#ifndef s4r2_H
#define s4r2_H

#include "w2c2_base.h"

typedef struct s4r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s4r2Instance;

void f0(s4r2Instance*);

void f1(s4r2Instance*);

U32 f2(s4r2Instance*);

void f3(s4r2Instance*,U32);

void f4(s4r2Instance*,U32);

void s4r2____wasm_call_ctors(s4r2Instance*i);

void s4r2____wasm_apply_data_relocs(s4r2Instance*i);

U32 s4r2_func_1(s4r2Instance*i);

void s4r2_call_cb(s4r2Instance*i,U32 l0);

void s4r2Instantiate(s4r2Instance* instance, void* resolve(const char* module, const char* name));

void s4r2FreeInstance(s4r2Instance* instance);

#endif /* s4r2_H */

