#ifndef s397r2_H
#define s397r2_H

#include "w2c2_base.h"

typedef struct s397r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s397r2Instance;

void f0(s397r2Instance*);

void f1(s397r2Instance*);

U32 f2(s397r2Instance*);

void f3(s397r2Instance*,U32);

U32 f4(s397r2Instance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s397r2Instance*,U32,U32,U32,U32,U32);

void f6(s397r2Instance*,U32);

void f7(s397r2Instance*,U32,U32,U32);

void f8(s397r2Instance*,U32,U32,U32);

void s397r2____wasm_call_ctors(s397r2Instance*i);

void s397r2____wasm_apply_data_relocs(s397r2Instance*i);

U32 s397r2_func_1(s397r2Instance*i);

void s397r2_call_cb(s397r2Instance*i,U32 l0);

void s397r2Instantiate(s397r2Instance* instance, void* resolve(const char* module, const char* name));

void s397r2FreeInstance(s397r2Instance* instance);

#endif /* s397r2_H */

