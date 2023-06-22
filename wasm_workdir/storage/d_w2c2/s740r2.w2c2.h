#ifndef s740r2_H
#define s740r2_H

#include "w2c2_base.h"

typedef struct s740r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s740r2Instance;

void f0(s740r2Instance*);

void f1(s740r2Instance*);

U32 f2(s740r2Instance*);

void f3(s740r2Instance*,U32);

U32 f4(s740r2Instance*,U32,U32,U32,U32,U32);

void f5(s740r2Instance*,U32,U32,U32,U32,U32);

void f6(s740r2Instance*,U32);

void f7(s740r2Instance*,U32,U32,U32);

void f8(s740r2Instance*,U32,U32,U32);

void s740r2____wasm_call_ctors(s740r2Instance*i);

void s740r2____wasm_apply_data_relocs(s740r2Instance*i);

U32 s740r2_func_1(s740r2Instance*i);

void s740r2_call_cb(s740r2Instance*i,U32 l0);

void s740r2Instantiate(s740r2Instance* instance, void* resolve(const char* module, const char* name));

void s740r2FreeInstance(s740r2Instance* instance);

#endif /* s740r2_H */

