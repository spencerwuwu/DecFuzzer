#ifndef s644r2_H
#define s644r2_H

#include "w2c2_base.h"

typedef struct s644r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s644r2Instance;

void f0(s644r2Instance*);

void f1(s644r2Instance*);

U32 f2(s644r2Instance*);

void f3(s644r2Instance*,U32);

U32 f4(s644r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s644r2Instance*,U32,U32,U32,U32,U32);

void f6(s644r2Instance*,U32);

void f7(s644r2Instance*,U32,U32,U32);

void f8(s644r2Instance*,U32,U32,U32);

void s644r2____wasm_call_ctors(s644r2Instance*i);

void s644r2____wasm_apply_data_relocs(s644r2Instance*i);

U32 s644r2_func_1(s644r2Instance*i);

void s644r2_call_cb(s644r2Instance*i,U32 l0);

void s644r2Instantiate(s644r2Instance* instance, void* resolve(const char* module, const char* name));

void s644r2FreeInstance(s644r2Instance* instance);

#endif /* s644r2_H */

