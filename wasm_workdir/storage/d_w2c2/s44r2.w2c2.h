#ifndef s44r2_H
#define s44r2_H

#include "w2c2_base.h"

typedef struct s44r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s44r2Instance;

void f0(s44r2Instance*);

void f1(s44r2Instance*);

U32 f2(s44r2Instance*);

void f3(s44r2Instance*,U32);

U32 f4(s44r2Instance*,U32,U32,U32);

void f5(s44r2Instance*,U32,U32,U32,U32,U32);

void f6(s44r2Instance*,U32);

void f7(s44r2Instance*,U32,U32,U32);

void f8(s44r2Instance*,U32,U32,U32);

void s44r2____wasm_call_ctors(s44r2Instance*i);

void s44r2____wasm_apply_data_relocs(s44r2Instance*i);

U32 s44r2_func_1(s44r2Instance*i);

void s44r2_call_cb(s44r2Instance*i,U32 l0);

void s44r2Instantiate(s44r2Instance* instance, void* resolve(const char* module, const char* name));

void s44r2FreeInstance(s44r2Instance* instance);

#endif /* s44r2_H */

