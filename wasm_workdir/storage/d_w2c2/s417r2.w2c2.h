#ifndef s417r2_H
#define s417r2_H

#include "w2c2_base.h"

typedef struct s417r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s417r2Instance;

void f0(s417r2Instance*);

void f1(s417r2Instance*);

U32 f2(s417r2Instance*);

void f3(s417r2Instance*,U32);

U32 f4(s417r2Instance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s417r2Instance*,U32,U32,U32,U32,U32);

void f6(s417r2Instance*,U32);

void f7(s417r2Instance*,U32,U32,U32);

void f8(s417r2Instance*,U32,U32,U32);

void s417r2____wasm_call_ctors(s417r2Instance*i);

void s417r2____wasm_apply_data_relocs(s417r2Instance*i);

U32 s417r2_func_1(s417r2Instance*i);

void s417r2_call_cb(s417r2Instance*i,U32 l0);

void s417r2Instantiate(s417r2Instance* instance, void* resolve(const char* module, const char* name));

void s417r2FreeInstance(s417r2Instance* instance);

#endif /* s417r2_H */

