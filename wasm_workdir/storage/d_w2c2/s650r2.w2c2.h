#ifndef s650r2_H
#define s650r2_H

#include "w2c2_base.h"

typedef struct s650r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s650r2Instance;

void f0(s650r2Instance*);

void f1(s650r2Instance*);

U32 f2(s650r2Instance*);

void f3(s650r2Instance*,U32);

U32 f4(s650r2Instance*,U32,U32,U32);

void f5(s650r2Instance*,U32,U32,U32,U32,U32);

void f6(s650r2Instance*,U32);

void f7(s650r2Instance*,U32,U32,U32);

void f8(s650r2Instance*,U32,U32,U32);

void s650r2____wasm_call_ctors(s650r2Instance*i);

void s650r2____wasm_apply_data_relocs(s650r2Instance*i);

U32 s650r2_func_1(s650r2Instance*i);

void s650r2_call_cb(s650r2Instance*i,U32 l0);

void s650r2Instantiate(s650r2Instance* instance, void* resolve(const char* module, const char* name));

void s650r2FreeInstance(s650r2Instance* instance);

#endif /* s650r2_H */

