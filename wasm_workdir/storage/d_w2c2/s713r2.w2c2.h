#ifndef s713r2_H
#define s713r2_H

#include "w2c2_base.h"

typedef struct s713r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s713r2Instance;

void f0(s713r2Instance*);

void f1(s713r2Instance*);

U32 f2(s713r2Instance*);

void f3(s713r2Instance*,U32);

void f4(s713r2Instance*,U32);

void s713r2____wasm_call_ctors(s713r2Instance*i);

void s713r2____wasm_apply_data_relocs(s713r2Instance*i);

U32 s713r2_func_1(s713r2Instance*i);

void s713r2_call_cb(s713r2Instance*i,U32 l0);

void s713r2Instantiate(s713r2Instance* instance, void* resolve(const char* module, const char* name));

void s713r2FreeInstance(s713r2Instance* instance);

#endif /* s713r2_H */

