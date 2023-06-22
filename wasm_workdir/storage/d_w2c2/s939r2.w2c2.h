#ifndef s939r2_H
#define s939r2_H

#include "w2c2_base.h"

typedef struct s939r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s939r2Instance;

void f0(s939r2Instance*);

void f1(s939r2Instance*);

U32 f2(s939r2Instance*);

void f3(s939r2Instance*,U32);

U32 f4(s939r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s939r2Instance*,U32,U32,U32,U32,U32);

void f6(s939r2Instance*,U32);

void f7(s939r2Instance*,U32,U32,U32);

void f8(s939r2Instance*,U32,U32,U32);

void s939r2____wasm_call_ctors(s939r2Instance*i);

void s939r2____wasm_apply_data_relocs(s939r2Instance*i);

U32 s939r2_func_1(s939r2Instance*i);

void s939r2_call_cb(s939r2Instance*i,U32 l0);

void s939r2Instantiate(s939r2Instance* instance, void* resolve(const char* module, const char* name));

void s939r2FreeInstance(s939r2Instance* instance);

#endif /* s939r2_H */

