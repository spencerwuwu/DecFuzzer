#ifndef s272r2_H
#define s272r2_H

#include "w2c2_base.h"

typedef struct s272r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s272r2Instance;

void f0(s272r2Instance*);

void f1(s272r2Instance*);

U32 f2(s272r2Instance*);

void f3(s272r2Instance*,U32);

U32 f4(s272r2Instance*,U32,U32,U32,U32);

void f5(s272r2Instance*,U32,U32,U32,U32,U32);

void f6(s272r2Instance*,U32);

void f7(s272r2Instance*,U32,U32,U32);

void f8(s272r2Instance*,U32,U32,U32);

void s272r2____wasm_call_ctors(s272r2Instance*i);

void s272r2____wasm_apply_data_relocs(s272r2Instance*i);

U32 s272r2_func_1(s272r2Instance*i);

void s272r2_call_cb(s272r2Instance*i,U32 l0);

void s272r2Instantiate(s272r2Instance* instance, void* resolve(const char* module, const char* name));

void s272r2FreeInstance(s272r2Instance* instance);

#endif /* s272r2_H */

