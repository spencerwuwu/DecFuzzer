#ifndef s16r2_H
#define s16r2_H

#include "w2c2_base.h"

typedef struct s16r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s16r2Instance;

void f0(s16r2Instance*);

void f1(s16r2Instance*);

U32 f2(s16r2Instance*);

void f3(s16r2Instance*,U32);

U32 f4(s16r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s16r2Instance*,U32,U32,U32,U32,U32);

void f6(s16r2Instance*,U32);

void f7(s16r2Instance*,U32,U32,U32);

void f8(s16r2Instance*,U32,U32,U32);

void s16r2____wasm_call_ctors(s16r2Instance*i);

void s16r2____wasm_apply_data_relocs(s16r2Instance*i);

U32 s16r2_func_1(s16r2Instance*i);

void s16r2_call_cb(s16r2Instance*i,U32 l0);

void s16r2Instantiate(s16r2Instance* instance, void* resolve(const char* module, const char* name));

void s16r2FreeInstance(s16r2Instance* instance);

#endif /* s16r2_H */

