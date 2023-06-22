#ifndef s849r2_H
#define s849r2_H

#include "w2c2_base.h"

typedef struct s849r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s849r2Instance;

void f0(s849r2Instance*);

void f1(s849r2Instance*);

U32 f2(s849r2Instance*);

void f3(s849r2Instance*,U32);

U32 f4(s849r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s849r2Instance*,U32,U32,U32,U32,U32);

void f6(s849r2Instance*,U32);

void f7(s849r2Instance*,U32,U32,U32);

void f8(s849r2Instance*,U32,U32,U32);

void s849r2____wasm_call_ctors(s849r2Instance*i);

void s849r2____wasm_apply_data_relocs(s849r2Instance*i);

U32 s849r2_func_1(s849r2Instance*i);

void s849r2_call_cb(s849r2Instance*i,U32 l0);

void s849r2Instantiate(s849r2Instance* instance, void* resolve(const char* module, const char* name));

void s849r2FreeInstance(s849r2Instance* instance);

#endif /* s849r2_H */

