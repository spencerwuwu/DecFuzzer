#ifndef s169r2_H
#define s169r2_H

#include "w2c2_base.h"

typedef struct s169r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s169r2Instance;

void f0(s169r2Instance*);

void f1(s169r2Instance*);

U32 f2(s169r2Instance*);

void f3(s169r2Instance*,U32);

void f4(s169r2Instance*,U32);

void s169r2____wasm_call_ctors(s169r2Instance*i);

void s169r2____wasm_apply_data_relocs(s169r2Instance*i);

U32 s169r2_func_1(s169r2Instance*i);

void s169r2_call_cb(s169r2Instance*i,U32 l0);

void s169r2Instantiate(s169r2Instance* instance, void* resolve(const char* module, const char* name));

void s169r2FreeInstance(s169r2Instance* instance);

#endif /* s169r2_H */

