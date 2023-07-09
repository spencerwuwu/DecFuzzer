/* Automatically generated by wasm2c */
#include <assert.h>
#include <math.h>
#include <stdarg.h>
#include <stddef.h>
#include <string.h>
#if defined(__MINGW32__)
#include <malloc.h>
#elif defined(_MSC_VER)
#include <intrin.h>
#include <malloc.h>
#define alloca _alloca
#elif defined(__FreeBSD__) || defined(__OpenBSD__)
#include <stdlib.h>
#else
#include <alloca.h>
#endif

#include "s142retdec.wasm2c.h"

#define TRAP(x) (wasm_rt_trap(WASM_RT_TRAP_##x), 0)

#if WASM_RT_USE_STACK_DEPTH_COUNT
#define FUNC_PROLOGUE                                            \
  if (++wasm_rt_call_stack_depth > WASM_RT_MAX_CALL_STACK_DEPTH) \
    TRAP(EXHAUSTION);

#define FUNC_EPILOGUE --wasm_rt_call_stack_depth
#else
#define FUNC_PROLOGUE

#define FUNC_EPILOGUE
#endif

#define UNREACHABLE TRAP(UNREACHABLE)

static inline bool func_types_eq(const wasm_rt_func_type_t a,
                                 const wasm_rt_func_type_t b) {
  return (a == b) || LIKELY(a && b && !memcmp(a, b, 32));
}

#define CALL_INDIRECT(table, t, ft, x, ...)              \
  (LIKELY((x) < table.size && table.data[x].func &&      \
          func_types_eq(ft, table.data[x].func_type)) || \
       TRAP(CALL_INDIRECT),                              \
   ((t)table.data[x].func)(__VA_ARGS__))

#ifdef SUPPORT_MEMORY64
#define RANGE_CHECK(mem, offset, len)              \
  do {                                             \
    uint64_t res;                                  \
    if (__builtin_add_overflow(offset, len, &res)) \
      TRAP(OOB);                                   \
    if (UNLIKELY(res > mem->size))                 \
      TRAP(OOB);                                   \
  } while (0);
#else
#define RANGE_CHECK(mem, offset, len)               \
  if (UNLIKELY(offset + (uint64_t)len > mem->size)) \
    TRAP(OOB);
#endif

#if WASM_RT_MEMCHECK_GUARD_PAGES
#define MEMCHECK(mem, a, t)
#else
#define MEMCHECK(mem, a, t) RANGE_CHECK(mem, a, sizeof(t))
#endif

#ifdef __GNUC__
#define wasm_asm __asm__
#else
#define wasm_asm(X)
#endif

#if WABT_BIG_ENDIAN
static inline void load_data(void* dest, const void* src, size_t n) {
  if (!n) {
    return;
  }
  size_t i = 0;
  u8* dest_chars = dest;
  memcpy(dest, src, n);
  for (i = 0; i < (n >> 1); i++) {
    u8 cursor = dest_chars[i];
    dest_chars[i] = dest_chars[n - i - 1];
    dest_chars[n - i - 1] = cursor;
  }
}
#define LOAD_DATA(m, o, i, s)                   \
  do {                                          \
    RANGE_CHECK((&m), m.size - o - s, s);       \
    load_data(&(m.data[m.size - o - s]), i, s); \
  } while (0)
#define DEFINE_LOAD(name, t1, t2, t3)                                  \
  static inline t3 name(wasm_rt_memory_t* mem, u64 addr) {             \
    MEMCHECK(mem, addr, t1);                                           \
    t1 result;                                                         \
    wasm_rt_memcpy(&result, &mem->data[mem->size - addr - sizeof(t1)], \
                   sizeof(t1));                                        \
    wasm_asm("" ::"r"(result));                                        \
    return (t3)(t2)result;                                             \
  }

#define DEFINE_STORE(name, t1, t2)                                      \
  static inline void name(wasm_rt_memory_t* mem, u64 addr, t2 value) {  \
    MEMCHECK(mem, addr, t1);                                            \
    t1 wrapped = (t1)value;                                             \
    wasm_rt_memcpy(&mem->data[mem->size - addr - sizeof(t1)], &wrapped, \
                   sizeof(t1));                                         \
  }
#else
static inline void load_data(void* dest, const void* src, size_t n) {
  if (!n) {
    return;
  }
  memcpy(dest, src, n);
}
#define LOAD_DATA(m, o, i, s)      \
  do {                             \
    RANGE_CHECK((&m), o, s);       \
    load_data(&(m.data[o]), i, s); \
  } while (0)
#define DEFINE_LOAD(name, t1, t2, t3)                      \
  static inline t3 name(wasm_rt_memory_t* mem, u64 addr) { \
    MEMCHECK(mem, addr, t1);                               \
    t1 result;                                             \
    wasm_rt_memcpy(&result, &mem->data[addr], sizeof(t1)); \
    wasm_asm("" ::"r"(result));                            \
    return (t3)(t2)result;                                 \
  }

#define DEFINE_STORE(name, t1, t2)                                     \
  static inline void name(wasm_rt_memory_t* mem, u64 addr, t2 value) { \
    MEMCHECK(mem, addr, t1);                                           \
    t1 wrapped = (t1)value;                                            \
    wasm_rt_memcpy(&mem->data[addr], &wrapped, sizeof(t1));            \
  }
#endif

DEFINE_LOAD(i32_load, u32, u32, u32)
DEFINE_LOAD(i64_load, u64, u64, u64)
DEFINE_LOAD(f32_load, f32, f32, f32)
DEFINE_LOAD(f64_load, f64, f64, f64)
DEFINE_LOAD(i32_load8_s, s8, s32, u32)
DEFINE_LOAD(i64_load8_s, s8, s64, u64)
DEFINE_LOAD(i32_load8_u, u8, u32, u32)
DEFINE_LOAD(i64_load8_u, u8, u64, u64)
DEFINE_LOAD(i32_load16_s, s16, s32, u32)
DEFINE_LOAD(i64_load16_s, s16, s64, u64)
DEFINE_LOAD(i32_load16_u, u16, u32, u32)
DEFINE_LOAD(i64_load16_u, u16, u64, u64)
DEFINE_LOAD(i64_load32_s, s32, s64, u64)
DEFINE_LOAD(i64_load32_u, u32, u64, u64)
DEFINE_STORE(i32_store, u32, u32)
DEFINE_STORE(i64_store, u64, u64)
DEFINE_STORE(f32_store, f32, f32)
DEFINE_STORE(f64_store, f64, f64)
DEFINE_STORE(i32_store8, u8, u32)
DEFINE_STORE(i32_store16, u16, u32)
DEFINE_STORE(i64_store8, u8, u64)
DEFINE_STORE(i64_store16, u16, u64)
DEFINE_STORE(i64_store32, u32, u64)

#if defined(_MSC_VER)

// Adapted from
// https://github.com/nemequ/portable-snippets/blob/master/builtin/builtin.h

static inline int I64_CLZ(unsigned long long v) {
  unsigned long r = 0;
#if defined(_M_AMD64) || defined(_M_ARM)
  if (_BitScanReverse64(&r, v)) {
    return 63 - r;
  }
#else
  if (_BitScanReverse(&r, (unsigned long)(v >> 32))) {
    return 31 - r;
  } else if (_BitScanReverse(&r, (unsigned long)v)) {
    return 63 - r;
  }
#endif
  return 64;
}

static inline int I32_CLZ(unsigned long v) {
  unsigned long r = 0;
  if (_BitScanReverse(&r, v)) {
    return 31 - r;
  }
  return 32;
}

static inline int I64_CTZ(unsigned long long v) {
  if (!v) {
    return 64;
  }
  unsigned long r = 0;
#if defined(_M_AMD64) || defined(_M_ARM)
  _BitScanForward64(&r, v);
  return (int)r;
#else
  if (_BitScanForward(&r, (unsigned int)(v))) {
    return (int)(r);
  }

  _BitScanForward(&r, (unsigned int)(v >> 32));
  return (int)(r + 32);
#endif
}

static inline int I32_CTZ(unsigned long v) {
  if (!v) {
    return 32;
  }
  unsigned long r = 0;
  _BitScanForward(&r, v);
  return (int)r;
}

#define POPCOUNT_DEFINE_PORTABLE(f_n, T)                            \
  static inline u32 f_n(T x) {                                      \
    x = x - ((x >> 1) & (T) ~(T)0 / 3);                             \
    x = (x & (T) ~(T)0 / 15 * 3) + ((x >> 2) & (T) ~(T)0 / 15 * 3); \
    x = (x + (x >> 4)) & (T) ~(T)0 / 255 * 15;                      \
    return (T)(x * ((T) ~(T)0 / 255)) >> (sizeof(T) - 1) * 8;       \
  }

POPCOUNT_DEFINE_PORTABLE(I32_POPCNT, u32)
POPCOUNT_DEFINE_PORTABLE(I64_POPCNT, u64)

#undef POPCOUNT_DEFINE_PORTABLE

#else

#define I32_CLZ(x) ((x) ? __builtin_clz(x) : 32)
#define I64_CLZ(x) ((x) ? __builtin_clzll(x) : 64)
#define I32_CTZ(x) ((x) ? __builtin_ctz(x) : 32)
#define I64_CTZ(x) ((x) ? __builtin_ctzll(x) : 64)
#define I32_POPCNT(x) (__builtin_popcount(x))
#define I64_POPCNT(x) (__builtin_popcountll(x))

#endif

#define DIV_S(ut, min, x, y)                                      \
  ((UNLIKELY((y) == 0))                                           \
       ? TRAP(DIV_BY_ZERO)                                        \
       : (UNLIKELY((x) == min && (y) == -1)) ? TRAP(INT_OVERFLOW) \
                                             : (ut)((x) / (y)))

#define REM_S(ut, min, x, y) \
  ((UNLIKELY((y) == 0))      \
       ? TRAP(DIV_BY_ZERO)   \
       : (UNLIKELY((x) == min && (y) == -1)) ? 0 : (ut)((x) % (y)))

#define I32_DIV_S(x, y) DIV_S(u32, INT32_MIN, (s32)x, (s32)y)
#define I64_DIV_S(x, y) DIV_S(u64, INT64_MIN, (s64)x, (s64)y)
#define I32_REM_S(x, y) REM_S(u32, INT32_MIN, (s32)x, (s32)y)
#define I64_REM_S(x, y) REM_S(u64, INT64_MIN, (s64)x, (s64)y)

#define DIVREM_U(op, x, y) \
  ((UNLIKELY((y) == 0)) ? TRAP(DIV_BY_ZERO) : ((x)op(y)))

#define DIV_U(x, y) DIVREM_U(/, x, y)
#define REM_U(x, y) DIVREM_U(%, x, y)

#define ROTL(x, y, mask) \
  (((x) << ((y) & (mask))) | ((x) >> (((mask) - (y) + 1) & (mask))))
#define ROTR(x, y, mask) \
  (((x) >> ((y) & (mask))) | ((x) << (((mask) - (y) + 1) & (mask))))

#define I32_ROTL(x, y) ROTL(x, y, 31)
#define I64_ROTL(x, y) ROTL(x, y, 63)
#define I32_ROTR(x, y) ROTR(x, y, 31)
#define I64_ROTR(x, y) ROTR(x, y, 63)

#define FMIN(x, y)                                                     \
  ((UNLIKELY((x) != (x)))                                              \
       ? NAN                                                           \
       : (UNLIKELY((y) != (y)))                                        \
             ? NAN                                                     \
             : (UNLIKELY((x) == 0 && (y) == 0)) ? (signbit(x) ? x : y) \
                                                : (x < y) ? x : y)

#define FMAX(x, y)                                                     \
  ((UNLIKELY((x) != (x)))                                              \
       ? NAN                                                           \
       : (UNLIKELY((y) != (y)))                                        \
             ? NAN                                                     \
             : (UNLIKELY((x) == 0 && (y) == 0)) ? (signbit(x) ? y : x) \
                                                : (x > y) ? x : y)

#define TRUNC_S(ut, st, ft, min, minop, max, x)                           \
  ((UNLIKELY((x) != (x)))                                                 \
       ? TRAP(INVALID_CONVERSION)                                         \
       : (UNLIKELY(!((x)minop(min) && (x) < (max)))) ? TRAP(INT_OVERFLOW) \
                                                     : (ut)(st)(x))

#define I32_TRUNC_S_F32(x) \
  TRUNC_S(u32, s32, f32, (f32)INT32_MIN, >=, 2147483648.f, x)
#define I64_TRUNC_S_F32(x) \
  TRUNC_S(u64, s64, f32, (f32)INT64_MIN, >=, (f32)INT64_MAX, x)
#define I32_TRUNC_S_F64(x) \
  TRUNC_S(u32, s32, f64, -2147483649., >, 2147483648., x)
#define I64_TRUNC_S_F64(x) \
  TRUNC_S(u64, s64, f64, (f64)INT64_MIN, >=, (f64)INT64_MAX, x)

#define TRUNC_U(ut, ft, max, x)                                          \
  ((UNLIKELY((x) != (x)))                                                \
       ? TRAP(INVALID_CONVERSION)                                        \
       : (UNLIKELY(!((x) > (ft)-1 && (x) < (max)))) ? TRAP(INT_OVERFLOW) \
                                                    : (ut)(x))

#define I32_TRUNC_U_F32(x) TRUNC_U(u32, f32, 4294967296.f, x)
#define I64_TRUNC_U_F32(x) TRUNC_U(u64, f32, (f32)UINT64_MAX, x)
#define I32_TRUNC_U_F64(x) TRUNC_U(u32, f64, 4294967296., x)
#define I64_TRUNC_U_F64(x) TRUNC_U(u64, f64, (f64)UINT64_MAX, x)

#define TRUNC_SAT_S(ut, st, ft, min, smin, minop, max, smax, x) \
  ((UNLIKELY((x) != (x)))                                       \
       ? 0                                                      \
       : (UNLIKELY(!((x)minop(min))))                           \
             ? smin                                             \
             : (UNLIKELY(!((x) < (max)))) ? smax : (ut)(st)(x))

#define I32_TRUNC_SAT_S_F32(x)                                            \
  TRUNC_SAT_S(u32, s32, f32, (f32)INT32_MIN, INT32_MIN, >=, 2147483648.f, \
              INT32_MAX, x)
#define I64_TRUNC_SAT_S_F32(x)                                              \
  TRUNC_SAT_S(u64, s64, f32, (f32)INT64_MIN, INT64_MIN, >=, (f32)INT64_MAX, \
              INT64_MAX, x)
#define I32_TRUNC_SAT_S_F64(x)                                        \
  TRUNC_SAT_S(u32, s32, f64, -2147483649., INT32_MIN, >, 2147483648., \
              INT32_MAX, x)
#define I64_TRUNC_SAT_S_F64(x)                                              \
  TRUNC_SAT_S(u64, s64, f64, (f64)INT64_MIN, INT64_MIN, >=, (f64)INT64_MAX, \
              INT64_MAX, x)

#define TRUNC_SAT_U(ut, ft, max, smax, x)               \
  ((UNLIKELY((x) != (x))) ? 0                           \
                          : (UNLIKELY(!((x) > (ft)-1))) \
                                ? 0                     \
                                : (UNLIKELY(!((x) < (max)))) ? smax : (ut)(x))

#define I32_TRUNC_SAT_U_F32(x) \
  TRUNC_SAT_U(u32, f32, 4294967296.f, UINT32_MAX, x)
#define I64_TRUNC_SAT_U_F32(x) \
  TRUNC_SAT_U(u64, f32, (f32)UINT64_MAX, UINT64_MAX, x)
#define I32_TRUNC_SAT_U_F64(x) TRUNC_SAT_U(u32, f64, 4294967296., UINT32_MAX, x)
#define I64_TRUNC_SAT_U_F64(x) \
  TRUNC_SAT_U(u64, f64, (f64)UINT64_MAX, UINT64_MAX, x)

#define DEFINE_REINTERPRET(name, t1, t2) \
  static inline t2 name(t1 x) {          \
    t2 result;                           \
    memcpy(&result, &x, sizeof(result)); \
    return result;                       \
  }

DEFINE_REINTERPRET(f32_reinterpret_i32, u32, f32)
DEFINE_REINTERPRET(i32_reinterpret_f32, f32, u32)
DEFINE_REINTERPRET(f64_reinterpret_i64, u64, f64)
DEFINE_REINTERPRET(i64_reinterpret_f64, f64, u64)

static float quiet_nanf(float x) {
  uint32_t tmp;
  memcpy(&tmp, &x, 4);
  tmp |= 0x7fc00000lu;
  memcpy(&x, &tmp, 4);
  return x;
}

static double quiet_nan(double x) {
  uint64_t tmp;
  memcpy(&tmp, &x, 8);
  tmp |= 0x7ff8000000000000llu;
  memcpy(&x, &tmp, 8);
  return x;
}

static double wasm_quiet(double x) {
  if (UNLIKELY(isnan(x))) {
    return quiet_nan(x);
  }
  return x;
}

static float wasm_quietf(float x) {
  if (UNLIKELY(isnan(x))) {
    return quiet_nanf(x);
  }
  return x;
}

static double wasm_floor(double x) {
  if (UNLIKELY(isnan(x))) {
    return quiet_nan(x);
  }
  return floor(x);
}

static float wasm_floorf(float x) {
  if (UNLIKELY(isnan(x))) {
    return quiet_nanf(x);
  }
  return floorf(x);
}

static double wasm_ceil(double x) {
  if (UNLIKELY(isnan(x))) {
    return quiet_nan(x);
  }
  return ceil(x);
}

static float wasm_ceilf(float x) {
  if (UNLIKELY(isnan(x))) {
    return quiet_nanf(x);
  }
  return ceilf(x);
}

static double wasm_trunc(double x) {
  if (UNLIKELY(isnan(x))) {
    return quiet_nan(x);
  }
  return trunc(x);
}

static float wasm_truncf(float x) {
  if (UNLIKELY(isnan(x))) {
    return quiet_nanf(x);
  }
  return truncf(x);
}

static float wasm_nearbyintf(float x) {
  if (UNLIKELY(isnan(x))) {
    return quiet_nanf(x);
  }
  return nearbyintf(x);
}

static double wasm_nearbyint(double x) {
  if (UNLIKELY(isnan(x))) {
    return quiet_nan(x);
  }
  return nearbyint(x);
}

static float wasm_fabsf(float x) {
  if (UNLIKELY(isnan(x))) {
    uint32_t tmp;
    memcpy(&tmp, &x, 4);
    tmp = tmp & ~(1UL << 31);
    memcpy(&x, &tmp, 4);
    return x;
  }
  return fabsf(x);
}

static double wasm_fabs(double x) {
  if (UNLIKELY(isnan(x))) {
    uint64_t tmp;
    memcpy(&tmp, &x, 8);
    tmp = tmp & ~(1ULL << 63);
    memcpy(&x, &tmp, 8);
    return x;
  }
  return fabs(x);
}

static double wasm_sqrt(double x) {
  if (UNLIKELY(isnan(x))) {
    return quiet_nan(x);
  }
  return sqrt(x);
}

static float wasm_sqrtf(float x) {
  if (UNLIKELY(isnan(x))) {
    return quiet_nanf(x);
  }
  return sqrtf(x);
}

static inline void memory_fill(wasm_rt_memory_t* mem, u32 d, u32 val, u32 n) {
  RANGE_CHECK(mem, d, n);
  memset(mem->data + d, val, n);
}

static inline void memory_copy(wasm_rt_memory_t* dest,
                               const wasm_rt_memory_t* src,
                               u32 dest_addr,
                               u32 src_addr,
                               u32 n) {
  RANGE_CHECK(dest, dest_addr, n);
  RANGE_CHECK(src, src_addr, n);
  memmove(dest->data + dest_addr, src->data + src_addr, n);
}

static inline void memory_init(wasm_rt_memory_t* dest,
                               const u8* src,
                               u32 src_size,
                               u32 dest_addr,
                               u32 src_addr,
                               u32 n) {
  if (UNLIKELY(src_addr + (uint64_t)n > src_size))
    TRAP(OOB);
  LOAD_DATA((*dest), dest_addr, src + src_addr, n);
}

typedef struct {
  wasm_rt_func_type_t type;
  wasm_rt_function_ptr_t func;
  size_t module_offset;
} wasm_elem_segment_expr_t;

static inline void funcref_table_init(wasm_rt_funcref_table_t* dest,
                                      const wasm_elem_segment_expr_t* src,
                                      u32 src_size,
                                      u32 dest_addr,
                                      u32 src_addr,
                                      u32 n,
                                      void* module_instance) {
  if (UNLIKELY(src_addr + (uint64_t)n > src_size))
    TRAP(OOB);
  if (UNLIKELY(dest_addr + (uint64_t)n > dest->size))
    TRAP(OOB);
  for (u32 i = 0; i < n; i++) {
    const wasm_elem_segment_expr_t* src_expr = &src[src_addr + i];
    dest->data[dest_addr + i] =
        (wasm_rt_funcref_t){src_expr->type, src_expr->func,
                            (char*)module_instance + src_expr->module_offset};
  }
}

// Currently Wasm only supports initializing externref tables with ref.null.
static inline void externref_table_init(wasm_rt_externref_table_t* dest,
                                        u32 src_size,
                                        u32 dest_addr,
                                        u32 src_addr,
                                        u32 n) {
  if (UNLIKELY(src_addr + (uint64_t)n > src_size))
    TRAP(OOB);
  if (UNLIKELY(dest_addr + (uint64_t)n > dest->size))
    TRAP(OOB);
  for (u32 i = 0; i < n; i++) {
    dest->data[dest_addr + i] = wasm_rt_externref_null_value;
  }
}

#define DEFINE_TABLE_COPY(type)                                              \
  static inline void type##_table_copy(wasm_rt_##type##_table_t* dest,       \
                                       const wasm_rt_##type##_table_t* src,  \
                                       u32 dest_addr, u32 src_addr, u32 n) { \
    if (UNLIKELY(dest_addr + (uint64_t)n > dest->size))                      \
      TRAP(OOB);                                                             \
    if (UNLIKELY(src_addr + (uint64_t)n > src->size))                        \
      TRAP(OOB);                                                             \
                                                                             \
    memmove(dest->data + dest_addr, src->data + src_addr,                    \
            n * sizeof(wasm_rt_##type##_t));                                 \
  }

DEFINE_TABLE_COPY(funcref)
DEFINE_TABLE_COPY(externref)

#define DEFINE_TABLE_GET(type)                        \
  static inline wasm_rt_##type##_t type##_table_get(  \
      const wasm_rt_##type##_table_t* table, u32 i) { \
    if (UNLIKELY(i >= table->size))                   \
      TRAP(OOB);                                      \
    return table->data[i];                            \
  }

DEFINE_TABLE_GET(funcref)
DEFINE_TABLE_GET(externref)

#define DEFINE_TABLE_SET(type)                                               \
  static inline void type##_table_set(const wasm_rt_##type##_table_t* table, \
                                      u32 i, const wasm_rt_##type##_t val) { \
    if (UNLIKELY(i >= table->size))                                          \
      TRAP(OOB);                                                             \
    table->data[i] = val;                                                    \
  }

DEFINE_TABLE_SET(funcref)
DEFINE_TABLE_SET(externref)

#define DEFINE_TABLE_FILL(type)                                               \
  static inline void type##_table_fill(const wasm_rt_##type##_table_t* table, \
                                       u32 d, const wasm_rt_##type##_t val,   \
                                       u32 n) {                               \
    if (UNLIKELY((uint64_t)d + n > table->size))                              \
      TRAP(OOB);                                                              \
    for (uint32_t i = d; i < d + n; i++) {                                    \
      table->data[i] = val;                                                   \
    }                                                                         \
  }

DEFINE_TABLE_FILL(funcref)
DEFINE_TABLE_FILL(externref)

#if defined(__GNUC__) || defined(__clang__)
#define FUNC_TYPE_DECL_EXTERN_T(x) extern const char* const x
#define FUNC_TYPE_EXTERN_T(x) const char* const x
#define FUNC_TYPE_T(x) static const char* const x
#else
#define FUNC_TYPE_DECL_EXTERN_T(x) extern const char x[]
#define FUNC_TYPE_EXTERN_T(x) const char x[]
#define FUNC_TYPE_T(x) static const char x[]
#endif

static void w2c_s142retdec_0x5F_wasm_call_ctors_0(w2c_s142retdec*);
static void w2c_s142retdec_0x5F_wasm_apply_data_relocs_0(w2c_s142retdec*);
static u32 w2c_s142retdec_func_1_0(w2c_s142retdec*);
static void w2c_s142retdec_crc32_gentab(w2c_s142retdec*, u32);
static void w2c_s142retdec_call_cb_0(w2c_s142retdec*, u32);

FUNC_TYPE_T(w2c_s142retdec_t0) = "\x89\x3a\x3d\x2c\x8f\x4d\x7f\x6d\x6c\x9d\x62\x67\x29\xaf\x3d\x44\x39\x8e\xc3\xf3\xe8\x51\xc1\x99\xb9\xdd\x9f\xd5\x3d\x1f\xd3\xe4";
FUNC_TYPE_T(w2c_s142retdec_t1) = "\x36\xa9\xe7\xf1\xc9\x5b\x82\xff\xb9\x97\x43\xe0\xc5\xc4\xce\x95\xd8\x3c\x9a\x43\x0a\xac\x59\xf8\x4e\xf3\xcb\xfa\xb6\x14\x50\x68";
FUNC_TYPE_T(w2c_s142retdec_t2) = "\x72\xab\x00\xdf\x20\x3d\xce\xa1\xf2\x29\xc7\x9d\x13\x40\x7e\x98\xac\x7d\x41\x4a\x53\x2e\x42\x42\x61\x55\x2e\xaa\xeb\xbe\xc6\x35";

static void init_globals(w2c_s142retdec* instance) {
}

static const u8 data_segment_data_w2c_s142retdec_0x2Erodata[] = {
  0x44, 0x75, 0x6d, 0x6d, 0x79, 0x20, 0x66, 0x6f, 0x72, 0x20, 0x69, 0x6e, 
  0x64, 0x69, 0x72, 0x65, 0x63, 0x74, 0x20, 0x66, 0x75, 0x6e, 0x63, 0x74, 
  0x69, 0x6f, 0x6e, 0x20, 0x74, 0x61, 0x62, 0x6c, 0x65, 0x00, 
};

static void init_memories(w2c_s142retdec* instance) {
  LOAD_DATA((*instance->w2c_env_memory), (*instance->w2c_env_0x5F_memory_base), data_segment_data_w2c_s142retdec_0x2Erodata, 34);
}

static void init_data_instances(w2c_s142retdec *instance) {
}

static void init_tables(w2c_s142retdec* instance) {
}

/* export: '__wasm_call_ctors' */
void w2c_s142retdec_0x5F_wasm_call_ctors(w2c_s142retdec* instance) {
  return w2c_s142retdec_0x5F_wasm_call_ctors_0(instance);
}

/* export: '__wasm_apply_data_relocs' */
void w2c_s142retdec_0x5F_wasm_apply_data_relocs(w2c_s142retdec* instance) {
  return w2c_s142retdec_0x5F_wasm_apply_data_relocs_0(instance);
}

/* export: 'func_1' */
u32 w2c_s142retdec_func_1(w2c_s142retdec* instance) {
  return w2c_s142retdec_func_1_0(instance);
}

/* export: 'call_cb' */
void w2c_s142retdec_call_cb(w2c_s142retdec* instance, u32 var_p0) {
  return w2c_s142retdec_call_cb_0(instance, var_p0);
}

static void init_instance_import(w2c_s142retdec* instance, struct w2c_env* w2c_env_instance){
  instance->w2c_env_0x5F_indirect_function_table = w2c_env_0x5F_indirect_function_table(w2c_env_instance);
  instance->w2c_env_0x5F_memory_base = w2c_env_0x5F_memory_base(w2c_env_instance);
  instance->w2c_env_0x5F_stack_pointer = w2c_env_0x5F_stack_pointer(w2c_env_instance);
  instance->w2c_env_0x5F_table_base = w2c_env_0x5F_table_base(w2c_env_instance);
  instance->w2c_env_memory = w2c_env_memory(w2c_env_instance);
}

const u32 wasm2c_s142retdec_min_env_0x5F_indirect_function_table = 0;
const u32 wasm2c_s142retdec_max_env_0x5F_indirect_function_table = 4294967295;
const u64 wasm2c_s142retdec_min_env_memory = 1;
const u64 wasm2c_s142retdec_max_env_memory = 65536;
const u8 wasm2c_s142retdec_is64_env_memory = 0;

void wasm2c_s142retdec_instantiate(w2c_s142retdec* instance, struct w2c_env* w2c_env_instance) {
  assert(wasm_rt_is_initialized());
  init_instance_import(instance, w2c_env_instance);
  init_globals(instance);
  init_tables(instance);
  init_memories(instance);
  init_data_instances(instance);
}

void wasm2c_s142retdec_free(w2c_s142retdec* instance) {
}

wasm_rt_func_type_t wasm2c_s142retdec_get_func_type(uint32_t param_count, uint32_t result_count, ...) {
  va_list args;
  
  if (param_count == 1 && result_count == 0) {
    va_start(args, result_count);
    if (true && va_arg(args, wasm_rt_type_t) == WASM_RT_I32) {
      va_end(args);
      return w2c_s142retdec_t0;
    }
    va_end(args);
  }
  
  if (param_count == 0 && result_count == 0) {
    va_start(args, result_count);
    if (true) {
      va_end(args);
      return w2c_s142retdec_t1;
    }
    va_end(args);
  }
  
  if (param_count == 0 && result_count == 1) {
    va_start(args, result_count);
    if (true && va_arg(args, wasm_rt_type_t) == WASM_RT_I32) {
      va_end(args);
      return w2c_s142retdec_t2;
    }
    va_end(args);
  }
  
  return NULL;
}

void w2c_s142retdec_0x5F_wasm_call_ctors_0(w2c_s142retdec* instance) {
  FUNC_PROLOGUE;
  FUNC_EPILOGUE;
}

void w2c_s142retdec_0x5F_wasm_apply_data_relocs_0(w2c_s142retdec* instance) {
  FUNC_PROLOGUE;
  FUNC_EPILOGUE;
}

u32 w2c_s142retdec_func_1_0(w2c_s142retdec* instance) {
  u32 var_l0 = 0, var_l1 = 0, var_l2 = 0, var_l3 = 0, var_l4 = 0, var_l5 = 0, var_l6 = 0, var_l7 = 0, 
      var_l8 = 0, var_l9 = 0, var_l10 = 0, var_l11 = 0, var_l12 = 0, var_l13 = 0, var_l14 = 0;
  FUNC_PROLOGUE;
  u32 var_i0, var_i1;
  var_i0 = (*instance->w2c_env_0x5F_stack_pointer);
  var_l0 = var_i0;
  var_i0 = 1040u;
  var_l1 = var_i0;
  var_i0 = var_l0;
  var_i1 = var_l1;
  var_i0 -= var_i1;
  var_l2 = var_i0;
  var_i0 = var_l2;
  (*instance->w2c_env_0x5F_stack_pointer) = var_i0;
  var_i0 = 4294967295u;
  var_l3 = var_i0;
  var_i0 = var_l2;
  var_i1 = var_l3;
  i32_store(instance->w2c_env_memory, (u64)(var_i0) + 12, var_i1);
  var_i0 = 16u;
  var_l4 = var_i0;
  var_i0 = var_l2;
  var_i1 = var_l4;
  var_i0 += var_i1;
  var_l5 = var_i0;
  var_i0 = var_l5;
  var_l6 = var_i0;
  var_i0 = var_l6;
  w2c_s142retdec_crc32_gentab(instance, var_i0);
  var_i0 = 1u;
  var_l7 = var_i0;
  var_i0 = var_l2;
  var_i1 = var_l7;
  i32_store16(instance->w2c_env_memory, (u64)(var_i0) + 10, var_i1);
  var_i0 = 1854112866u;
  var_l8 = var_i0;
  var_i0 = var_l2;
  var_i1 = var_l8;
  i32_store(instance->w2c_env_memory, (u64)(var_i0) + 4, var_i1);
  var_i0 = 3u;
  var_l9 = var_i0;
  var_i0 = var_l2;
  var_i1 = var_l9;
  i32_store(instance->w2c_env_memory, (u64)(var_i0) + 4, var_i1);
  var_i0 = var_l2;
  var_i0 = i32_load(instance->w2c_env_memory, (u64)(var_i0) + 12u);
  var_l10 = var_i0;
  var_i0 = 4294967295u;
  var_l11 = var_i0;
  var_i0 = var_l10;
  var_i1 = var_l11;
  var_i0 ^= var_i1;
  var_l12 = var_i0;
  var_i0 = 1040u;
  var_l13 = var_i0;
  var_i0 = var_l2;
  var_i1 = var_l13;
  var_i0 += var_i1;
  var_l14 = var_i0;
  var_i0 = var_l14;
  (*instance->w2c_env_0x5F_stack_pointer) = var_i0;
  var_i0 = var_l12;
  goto var_Bfunc;
  var_Bfunc:;
  FUNC_EPILOGUE;
  return var_i0;
}

void w2c_s142retdec_crc32_gentab(w2c_s142retdec* instance, u32 var_p0) {
  u32 var_l1 = 0, var_l2 = 0, var_l3 = 0, var_l4 = 0, var_l5 = 0, var_l6 = 0, var_l7 = 0, var_l8 = 0, 
      var_l9 = 0, var_l10 = 0, var_l11 = 0, var_l12 = 0, var_l13 = 0, var_l14 = 0, var_l15 = 0, var_l16 = 0, 
      var_l17 = 0, var_l18 = 0, var_l19 = 0, var_l20 = 0, var_l21 = 0, var_l22 = 0, var_l23 = 0, var_l24 = 0, 
      var_l25 = 0, var_l26 = 0, var_l27 = 0, var_l28 = 0, var_l29 = 0, var_l30 = 0, var_l31 = 0, var_l32 = 0, 
      var_l33 = 0, var_l34 = 0, var_l35 = 0, var_l36 = 0, var_l37 = 0, var_l38 = 0, var_l39 = 0, var_l40 = 0, 
      var_l41 = 0, var_l42 = 0, var_l43 = 0, var_l44 = 0;
  FUNC_PROLOGUE;
  u32 var_i0, var_i1;
  var_i0 = (*instance->w2c_env_0x5F_stack_pointer);
  var_l1 = var_i0;
  var_i0 = 32u;
  var_l2 = var_i0;
  var_i0 = var_l1;
  var_i1 = var_l2;
  var_i0 -= var_i1;
  var_l3 = var_i0;
  var_i0 = var_l3;
  var_i1 = var_p0;
  i32_store(instance->w2c_env_memory, (u64)(var_i0) + 28, var_i1);
  var_i0 = 3988292384u;
  var_l4 = var_i0;
  var_i0 = var_l3;
  var_i1 = var_l4;
  i32_store(instance->w2c_env_memory, (u64)(var_i0) + 20, var_i1);
  var_i0 = 0u;
  var_l5 = var_i0;
  var_i0 = var_l3;
  var_i1 = var_l5;
  i32_store(instance->w2c_env_memory, (u64)(var_i0) + 16, var_i1);
  var_L1: 
    var_i0 = var_l3;
    var_i0 = i32_load(instance->w2c_env_memory, (u64)(var_i0) + 16u);
    var_l6 = var_i0;
    var_i0 = 256u;
    var_l7 = var_i0;
    var_i0 = var_l6;
    var_l8 = var_i0;
    var_i0 = var_l7;
    var_l9 = var_i0;
    var_i0 = var_l8;
    var_i1 = var_l9;
    var_i0 = (u32)((s32)var_i0 < (s32)var_i1);
    var_l10 = var_i0;
    var_i0 = 1u;
    var_l11 = var_i0;
    var_i0 = var_l10;
    var_i1 = var_l11;
    var_i0 &= var_i1;
    var_l12 = var_i0;
    var_i0 = var_l12;
    var_i0 = !(var_i0);
    if (var_i0) {goto var_B0;}
    var_i0 = var_l3;
    var_i0 = i32_load(instance->w2c_env_memory, (u64)(var_i0) + 16u);
    var_l13 = var_i0;
    var_i0 = var_l3;
    var_i1 = var_l13;
    i32_store(instance->w2c_env_memory, (u64)(var_i0) + 24, var_i1);
    var_i0 = 8u;
    var_l14 = var_i0;
    var_i0 = var_l3;
    var_i1 = var_l14;
    i32_store(instance->w2c_env_memory, (u64)(var_i0) + 12, var_i1);
    var_L3: 
      var_i0 = var_l3;
      var_i0 = i32_load(instance->w2c_env_memory, (u64)(var_i0) + 12u);
      var_l15 = var_i0;
      var_i0 = 0u;
      var_l16 = var_i0;
      var_i0 = var_l15;
      var_l17 = var_i0;
      var_i0 = var_l16;
      var_l18 = var_i0;
      var_i0 = var_l17;
      var_i1 = var_l18;
      var_i0 = (u32)((s32)var_i0 > (s32)var_i1);
      var_l19 = var_i0;
      var_i0 = 1u;
      var_l20 = var_i0;
      var_i0 = var_l19;
      var_i1 = var_l20;
      var_i0 &= var_i1;
      var_l21 = var_i0;
      var_i0 = var_l21;
      var_i0 = !(var_i0);
      if (var_i0) {goto var_B2;}
      var_i0 = var_l3;
      var_i0 = i32_load(instance->w2c_env_memory, (u64)(var_i0) + 24u);
      var_l22 = var_i0;
      var_i0 = 1u;
      var_l23 = var_i0;
      var_i0 = var_l22;
      var_i1 = var_l23;
      var_i0 &= var_i1;
      var_l24 = var_i0;
      var_i0 = var_l24;
      var_i0 = !(var_i0);
      if (var_i0) {goto var_B5;}
      var_i0 = var_l3;
      var_i0 = i32_load(instance->w2c_env_memory, (u64)(var_i0) + 24u);
      var_l25 = var_i0;
      var_i0 = 1u;
      var_l26 = var_i0;
      var_i0 = var_l25;
      var_i1 = var_l26;
      var_i0 >>= (var_i1 & 31);
      var_l27 = var_i0;
      var_i0 = 3988292384u;
      var_l28 = var_i0;
      var_i0 = var_l27;
      var_i1 = var_l28;
      var_i0 ^= var_i1;
      var_l29 = var_i0;
      var_i0 = var_l3;
      var_i1 = var_l29;
      i32_store(instance->w2c_env_memory, (u64)(var_i0) + 24, var_i1);
      goto var_B4;
      var_B5:;
      var_i0 = var_l3;
      var_i0 = i32_load(instance->w2c_env_memory, (u64)(var_i0) + 24u);
      var_l30 = var_i0;
      var_i0 = 1u;
      var_l31 = var_i0;
      var_i0 = var_l30;
      var_i1 = var_l31;
      var_i0 >>= (var_i1 & 31);
      var_l32 = var_i0;
      var_i0 = var_l3;
      var_i1 = var_l32;
      i32_store(instance->w2c_env_memory, (u64)(var_i0) + 24, var_i1);
      var_B4:;
      var_i0 = var_l3;
      var_i0 = i32_load(instance->w2c_env_memory, (u64)(var_i0) + 12u);
      var_l33 = var_i0;
      var_i0 = 4294967295u;
      var_l34 = var_i0;
      var_i0 = var_l33;
      var_i1 = var_l34;
      var_i0 += var_i1;
      var_l35 = var_i0;
      var_i0 = var_l3;
      var_i1 = var_l35;
      i32_store(instance->w2c_env_memory, (u64)(var_i0) + 12, var_i1);
      goto var_L3;
    UNREACHABLE;
    var_B2:;
    var_i0 = var_l3;
    var_i0 = i32_load(instance->w2c_env_memory, (u64)(var_i0) + 24u);
    var_l36 = var_i0;
    var_i0 = var_l3;
    var_i0 = i32_load(instance->w2c_env_memory, (u64)(var_i0) + 28u);
    var_l37 = var_i0;
    var_i0 = var_l3;
    var_i0 = i32_load(instance->w2c_env_memory, (u64)(var_i0) + 16u);
    var_l38 = var_i0;
    var_i0 = 2u;
    var_l39 = var_i0;
    var_i0 = var_l38;
    var_i1 = var_l39;
    var_i0 <<= (var_i1 & 31);
    var_l40 = var_i0;
    var_i0 = var_l37;
    var_i1 = var_l40;
    var_i0 += var_i1;
    var_l41 = var_i0;
    var_i0 = var_l41;
    var_i1 = var_l36;
    i32_store(instance->w2c_env_memory, (u64)(var_i0), var_i1);
    var_i0 = var_l3;
    var_i0 = i32_load(instance->w2c_env_memory, (u64)(var_i0) + 16u);
    var_l42 = var_i0;
    var_i0 = 1u;
    var_l43 = var_i0;
    var_i0 = var_l42;
    var_i1 = var_l43;
    var_i0 += var_i1;
    var_l44 = var_i0;
    var_i0 = var_l3;
    var_i1 = var_l44;
    i32_store(instance->w2c_env_memory, (u64)(var_i0) + 16, var_i1);
    goto var_L1;
  UNREACHABLE;
  var_B0:;
  goto var_Bfunc;
  var_Bfunc:;
  FUNC_EPILOGUE;
}

void w2c_s142retdec_call_cb_0(w2c_s142retdec* instance, u32 var_p0) {
  u32 var_l1 = 0, var_l2 = 0, var_l3 = 0, var_l4 = 0, var_l5 = 0, var_l6 = 0, var_l7 = 0, var_l8 = 0, 
      var_l9 = 0;
  FUNC_PROLOGUE;
  u32 var_i0, var_i1;
  var_i0 = (*instance->w2c_env_0x5F_stack_pointer);
  var_l1 = var_i0;
  var_i0 = 16u;
  var_l2 = var_i0;
  var_i0 = var_l1;
  var_i1 = var_l2;
  var_i0 -= var_i1;
  var_l3 = var_i0;
  var_i0 = var_l3;
  (*instance->w2c_env_0x5F_stack_pointer) = var_i0;
  var_i0 = var_l3;
  var_i1 = var_p0;
  i32_store(instance->w2c_env_memory, (u64)(var_i0) + 12, var_i1);
  var_i0 = var_l3;
  var_i0 = i32_load(instance->w2c_env_memory, (u64)(var_i0) + 12u);
  var_l4 = var_i0;
  var_i0 = 0u;
  var_l5 = var_i0;
  var_i0 = (*instance->w2c_env_0x5F_memory_base);
  var_l6 = var_i0;
  var_i0 = var_l6;
  var_i1 = var_l5;
  var_i0 += var_i1;
  var_l7 = var_i0;
  var_i0 = var_l7;
  var_i1 = var_l4;
  CALL_INDIRECT((*instance->w2c_env_0x5F_indirect_function_table), void (*)(void*, u32), w2c_s142retdec_t0, var_i1, (*instance->w2c_env_0x5F_indirect_function_table).data[var_i1].module_instance, var_i0);
  var_i0 = 16u;
  var_l8 = var_i0;
  var_i0 = var_l3;
  var_i1 = var_l8;
  var_i0 += var_i1;
  var_l9 = var_i0;
  var_i0 = var_l9;
  (*instance->w2c_env_0x5F_stack_pointer) = var_i0;
  goto var_Bfunc;
  var_Bfunc:;
  FUNC_EPILOGUE;
}