#ifndef s209r2_H
#define s209r2_H

#include "w2c2_base.h"

typedef struct s209r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s209r2Instance;

void f0(s209r2Instance*);

void f1(s209r2Instance*);

U32 f2(s209r2Instance*);

void f3(s209r2Instance*,U32);

void f4(s209r2Instance*,U32);

void s209r2____wasm_call_ctors(s209r2Instance*i);

void s209r2____wasm_apply_data_relocs(s209r2Instance*i);

U32 s209r2_func_1(s209r2Instance*i);

void s209r2_call_cb(s209r2Instance*i,U32 l0);

void s209r2Instantiate(s209r2Instance* instance, void* resolve(const char* module, const char* name));

void s209r2FreeInstance(s209r2Instance* instance);

#endif /* s209r2_H */

