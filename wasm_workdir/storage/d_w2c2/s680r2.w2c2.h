#ifndef s680r2_H
#define s680r2_H

#include "w2c2_base.h"

typedef struct s680r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s680r2Instance;

void f0(s680r2Instance*);

void f1(s680r2Instance*);

U32 f2(s680r2Instance*);

void f3(s680r2Instance*,U32);

void f4(s680r2Instance*,U32);

void s680r2____wasm_call_ctors(s680r2Instance*i);

void s680r2____wasm_apply_data_relocs(s680r2Instance*i);

U32 s680r2_func_1(s680r2Instance*i);

void s680r2_call_cb(s680r2Instance*i,U32 l0);

void s680r2Instantiate(s680r2Instance* instance, void* resolve(const char* module, const char* name));

void s680r2FreeInstance(s680r2Instance* instance);

#endif /* s680r2_H */

