#ifndef s711r2_H
#define s711r2_H

#include "w2c2_base.h"

typedef struct s711r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s711r2Instance;

void f0(s711r2Instance*);

void f1(s711r2Instance*);

U32 f2(s711r2Instance*);

void f3(s711r2Instance*,U32);

U32 f4(s711r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s711r2Instance*,U32,U32,U32,U32,U32);

void f6(s711r2Instance*,U32);

void f7(s711r2Instance*,U32,U32,U32);

void f8(s711r2Instance*,U32,U32,U32);

void s711r2____wasm_call_ctors(s711r2Instance*i);

void s711r2____wasm_apply_data_relocs(s711r2Instance*i);

U32 s711r2_func_1(s711r2Instance*i);

void s711r2_call_cb(s711r2Instance*i,U32 l0);

void s711r2Instantiate(s711r2Instance* instance, void* resolve(const char* module, const char* name));

void s711r2FreeInstance(s711r2Instance* instance);

#endif /* s711r2_H */

