#ifndef s835r2_H
#define s835r2_H

#include "w2c2_base.h"

typedef struct s835r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s835r2Instance;

void f0(s835r2Instance*);

void f1(s835r2Instance*);

U32 f2(s835r2Instance*);

void f3(s835r2Instance*,U32);

void f4(s835r2Instance*,U32);

void s835r2____wasm_call_ctors(s835r2Instance*i);

void s835r2____wasm_apply_data_relocs(s835r2Instance*i);

U32 s835r2_func_1(s835r2Instance*i);

void s835r2_call_cb(s835r2Instance*i,U32 l0);

void s835r2Instantiate(s835r2Instance* instance, void* resolve(const char* module, const char* name));

void s835r2FreeInstance(s835r2Instance* instance);

#endif /* s835r2_H */

