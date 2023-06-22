#ifndef s149r2_H
#define s149r2_H

#include "w2c2_base.h"

typedef struct s149r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s149r2Instance;

void f0(s149r2Instance*);

void f1(s149r2Instance*);

U32 f2(s149r2Instance*);

void f3(s149r2Instance*,U32);

U32 f4(s149r2Instance*,U32,U32,U32,U32,U32,U32);

void f5(s149r2Instance*,U32,U32,U32,U32,U32);

void f6(s149r2Instance*,U32);

void f7(s149r2Instance*,U32,U32,U32);

void f8(s149r2Instance*,U32,U32,U32);

void s149r2____wasm_call_ctors(s149r2Instance*i);

void s149r2____wasm_apply_data_relocs(s149r2Instance*i);

U32 s149r2_func_1(s149r2Instance*i);

void s149r2_call_cb(s149r2Instance*i,U32 l0);

void s149r2Instantiate(s149r2Instance* instance, void* resolve(const char* module, const char* name));

void s149r2FreeInstance(s149r2Instance* instance);

#endif /* s149r2_H */

