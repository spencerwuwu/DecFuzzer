#ifndef s51r2_H
#define s51r2_H

#include "w2c2_base.h"

typedef struct s51r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s51r2Instance;

void f0(s51r2Instance*);

void f1(s51r2Instance*);

U32 f2(s51r2Instance*);

void f3(s51r2Instance*,U32);

U32 f4(s51r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s51r2Instance*,U32,U32,U32,U32,U32);

void f6(s51r2Instance*,U32);

void f7(s51r2Instance*,U32,U32,U32);

void f8(s51r2Instance*,U32,U32,U32);

void s51r2____wasm_call_ctors(s51r2Instance*i);

void s51r2____wasm_apply_data_relocs(s51r2Instance*i);

U32 s51r2_func_1(s51r2Instance*i);

void s51r2_call_cb(s51r2Instance*i,U32 l0);

void s51r2Instantiate(s51r2Instance* instance, void* resolve(const char* module, const char* name));

void s51r2FreeInstance(s51r2Instance* instance);

#endif /* s51r2_H */

