#ifndef s843r2_H
#define s843r2_H

#include "w2c2_base.h"

typedef struct s843r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s843r2Instance;

void f0(s843r2Instance*);

void f1(s843r2Instance*);

U32 f2(s843r2Instance*);

void f3(s843r2Instance*,U32);

U32 f4(s843r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s843r2Instance*,U32,U32,U32,U32,U32);

void f6(s843r2Instance*,U32);

void f7(s843r2Instance*,U32,U32,U32);

void f8(s843r2Instance*,U32,U32,U32);

void s843r2____wasm_call_ctors(s843r2Instance*i);

void s843r2____wasm_apply_data_relocs(s843r2Instance*i);

U32 s843r2_func_1(s843r2Instance*i);

void s843r2_call_cb(s843r2Instance*i,U32 l0);

void s843r2Instantiate(s843r2Instance* instance, void* resolve(const char* module, const char* name));

void s843r2FreeInstance(s843r2Instance* instance);

#endif /* s843r2_H */

