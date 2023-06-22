#ifndef s12r2_H
#define s12r2_H

#include "w2c2_base.h"

typedef struct s12r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s12r2Instance;

void f0(s12r2Instance*);

void f1(s12r2Instance*);

U32 f2(s12r2Instance*);

void f3(s12r2Instance*,U32);

U32 f4(s12r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s12r2Instance*,U32,U32,U32,U32,U32);

void f6(s12r2Instance*,U32);

void f7(s12r2Instance*,U32,U32,U32);

void f8(s12r2Instance*,U32,U32,U32);

void s12r2____wasm_call_ctors(s12r2Instance*i);

void s12r2____wasm_apply_data_relocs(s12r2Instance*i);

U32 s12r2_func_1(s12r2Instance*i);

void s12r2_call_cb(s12r2Instance*i,U32 l0);

void s12r2Instantiate(s12r2Instance* instance, void* resolve(const char* module, const char* name));

void s12r2FreeInstance(s12r2Instance* instance);

#endif /* s12r2_H */

