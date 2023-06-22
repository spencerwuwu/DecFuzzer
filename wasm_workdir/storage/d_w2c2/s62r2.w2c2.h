#ifndef s62r2_H
#define s62r2_H

#include "w2c2_base.h"

typedef struct s62r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s62r2Instance;

void f0(s62r2Instance*);

void f1(s62r2Instance*);

U32 f2(s62r2Instance*);

void f3(s62r2Instance*,U32);

U32 f4(s62r2Instance*,U32,U32,U32,U32,U32);

void f5(s62r2Instance*,U32,U32,U32,U32,U32);

void f6(s62r2Instance*,U32);

void f7(s62r2Instance*,U32,U32,U32);

void f8(s62r2Instance*,U32,U32,U32);

void s62r2____wasm_call_ctors(s62r2Instance*i);

void s62r2____wasm_apply_data_relocs(s62r2Instance*i);

U32 s62r2_func_1(s62r2Instance*i);

void s62r2_call_cb(s62r2Instance*i,U32 l0);

void s62r2Instantiate(s62r2Instance* instance, void* resolve(const char* module, const char* name));

void s62r2FreeInstance(s62r2Instance* instance);

#endif /* s62r2_H */

