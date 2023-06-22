#ifndef s503r2_H
#define s503r2_H

#include "w2c2_base.h"

typedef struct s503r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s503r2Instance;

void f0(s503r2Instance*);

void f1(s503r2Instance*);

U32 f2(s503r2Instance*);

void f3(s503r2Instance*,U32);

U32 f4(s503r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s503r2Instance*,U32,U32,U32,U32,U32);

void f6(s503r2Instance*,U32);

void f7(s503r2Instance*,U32,U32,U32);

void f8(s503r2Instance*,U32,U32,U32);

void s503r2____wasm_call_ctors(s503r2Instance*i);

void s503r2____wasm_apply_data_relocs(s503r2Instance*i);

U32 s503r2_func_1(s503r2Instance*i);

void s503r2_call_cb(s503r2Instance*i,U32 l0);

void s503r2Instantiate(s503r2Instance* instance, void* resolve(const char* module, const char* name));

void s503r2FreeInstance(s503r2Instance* instance);

#endif /* s503r2_H */

