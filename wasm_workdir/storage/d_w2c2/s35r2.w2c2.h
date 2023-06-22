#ifndef s35r2_H
#define s35r2_H

#include "w2c2_base.h"

typedef struct s35r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s35r2Instance;

void f0(s35r2Instance*);

void f1(s35r2Instance*);

U32 f2(s35r2Instance*);

void f3(s35r2Instance*,U32);

U32 f4(s35r2Instance*,U32,U32,U32);

void f5(s35r2Instance*,U32,U32,U32,U32,U32);

void f6(s35r2Instance*,U32);

void f7(s35r2Instance*,U32,U32,U32);

void f8(s35r2Instance*,U32,U32,U32);

void s35r2____wasm_call_ctors(s35r2Instance*i);

void s35r2____wasm_apply_data_relocs(s35r2Instance*i);

U32 s35r2_func_1(s35r2Instance*i);

void s35r2_call_cb(s35r2Instance*i,U32 l0);

void s35r2Instantiate(s35r2Instance* instance, void* resolve(const char* module, const char* name));

void s35r2FreeInstance(s35r2Instance* instance);

#endif /* s35r2_H */

