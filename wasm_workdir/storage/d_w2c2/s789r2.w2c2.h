#ifndef s789r2_H
#define s789r2_H

#include "w2c2_base.h"

typedef struct s789r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s789r2Instance;

void f0(s789r2Instance*);

void f1(s789r2Instance*);

U32 f2(s789r2Instance*);

void f3(s789r2Instance*,U32);

void f4(s789r2Instance*,U32);

void s789r2____wasm_call_ctors(s789r2Instance*i);

void s789r2____wasm_apply_data_relocs(s789r2Instance*i);

U32 s789r2_func_1(s789r2Instance*i);

void s789r2_call_cb(s789r2Instance*i,U32 l0);

void s789r2Instantiate(s789r2Instance* instance, void* resolve(const char* module, const char* name));

void s789r2FreeInstance(s789r2Instance* instance);

#endif /* s789r2_H */

