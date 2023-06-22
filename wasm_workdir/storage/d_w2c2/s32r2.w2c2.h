#ifndef s32r2_H
#define s32r2_H

#include "w2c2_base.h"

typedef struct s32r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s32r2Instance;

void f0(s32r2Instance*);

void f1(s32r2Instance*);

U32 f2(s32r2Instance*);

void f3(s32r2Instance*,U32);

U32 f4(s32r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s32r2Instance*,U32,U32,U32,U32,U32);

void f6(s32r2Instance*,U32);

void f7(s32r2Instance*,U32,U32,U32);

void f8(s32r2Instance*,U32,U32,U32);

void s32r2____wasm_call_ctors(s32r2Instance*i);

void s32r2____wasm_apply_data_relocs(s32r2Instance*i);

U32 s32r2_func_1(s32r2Instance*i);

void s32r2_call_cb(s32r2Instance*i,U32 l0);

void s32r2Instantiate(s32r2Instance* instance, void* resolve(const char* module, const char* name));

void s32r2FreeInstance(s32r2Instance* instance);

#endif /* s32r2_H */

