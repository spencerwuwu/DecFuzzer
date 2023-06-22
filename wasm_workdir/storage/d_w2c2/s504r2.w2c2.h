#ifndef s504r2_H
#define s504r2_H

#include "w2c2_base.h"

typedef struct s504r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s504r2Instance;

void f0(s504r2Instance*);

void f1(s504r2Instance*);

U32 f2(s504r2Instance*);

void f3(s504r2Instance*,U32);

U32 f4(s504r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s504r2Instance*,U32,U32,U32,U32,U32);

void f6(s504r2Instance*,U32);

void f7(s504r2Instance*,U32,U32,U32);

void f8(s504r2Instance*,U32,U32,U32);

void s504r2____wasm_call_ctors(s504r2Instance*i);

void s504r2____wasm_apply_data_relocs(s504r2Instance*i);

U32 s504r2_func_1(s504r2Instance*i);

void s504r2_call_cb(s504r2Instance*i,U32 l0);

void s504r2Instantiate(s504r2Instance* instance, void* resolve(const char* module, const char* name));

void s504r2FreeInstance(s504r2Instance* instance);

#endif /* s504r2_H */

