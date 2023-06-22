#ifndef s379r2_H
#define s379r2_H

#include "w2c2_base.h"

typedef struct s379r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s379r2Instance;

void f0(s379r2Instance*);

void f1(s379r2Instance*);

U32 f2(s379r2Instance*);

void f3(s379r2Instance*,U32);

U32 f4(s379r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s379r2Instance*,U32,U32,U32,U32,U32);

void f6(s379r2Instance*,U32);

void f7(s379r2Instance*,U32,U32,U32);

void f8(s379r2Instance*,U32,U32,U32);

void s379r2____wasm_call_ctors(s379r2Instance*i);

void s379r2____wasm_apply_data_relocs(s379r2Instance*i);

U32 s379r2_func_1(s379r2Instance*i);

void s379r2_call_cb(s379r2Instance*i,U32 l0);

void s379r2Instantiate(s379r2Instance* instance, void* resolve(const char* module, const char* name));

void s379r2FreeInstance(s379r2Instance* instance);

#endif /* s379r2_H */

