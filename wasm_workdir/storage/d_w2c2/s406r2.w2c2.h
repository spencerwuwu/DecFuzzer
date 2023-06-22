#ifndef s406r2_H
#define s406r2_H

#include "w2c2_base.h"

typedef struct s406r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s406r2Instance;

void f0(s406r2Instance*);

void f1(s406r2Instance*);

U32 f2(s406r2Instance*);

void f3(s406r2Instance*,U32);

U32 f4(s406r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s406r2Instance*,U32,U32,U32,U32,U32);

void f6(s406r2Instance*,U32);

void f7(s406r2Instance*,U32,U32,U32);

void f8(s406r2Instance*,U32,U32,U32);

void s406r2____wasm_call_ctors(s406r2Instance*i);

void s406r2____wasm_apply_data_relocs(s406r2Instance*i);

U32 s406r2_func_1(s406r2Instance*i);

void s406r2_call_cb(s406r2Instance*i,U32 l0);

void s406r2Instantiate(s406r2Instance* instance, void* resolve(const char* module, const char* name));

void s406r2FreeInstance(s406r2Instance* instance);

#endif /* s406r2_H */

