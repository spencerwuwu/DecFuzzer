#ifndef s304r2_H
#define s304r2_H

#include "w2c2_base.h"

typedef struct s304r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s304r2Instance;

void f0(s304r2Instance*);

void f1(s304r2Instance*);

U32 f2(s304r2Instance*);

void f3(s304r2Instance*,U32);

U32 f4(s304r2Instance*,U32,U32,U32,U32);

void f5(s304r2Instance*,U32,U32,U32,U32,U32);

void f6(s304r2Instance*,U32);

void f7(s304r2Instance*,U32,U32,U32);

void f8(s304r2Instance*,U32,U32,U32);

void s304r2____wasm_call_ctors(s304r2Instance*i);

void s304r2____wasm_apply_data_relocs(s304r2Instance*i);

U32 s304r2_func_1(s304r2Instance*i);

void s304r2_call_cb(s304r2Instance*i,U32 l0);

void s304r2Instantiate(s304r2Instance* instance, void* resolve(const char* module, const char* name));

void s304r2FreeInstance(s304r2Instance* instance);

#endif /* s304r2_H */

