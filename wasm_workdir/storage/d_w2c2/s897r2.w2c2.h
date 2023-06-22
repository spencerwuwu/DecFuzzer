#ifndef s897r2_H
#define s897r2_H

#include "w2c2_base.h"

typedef struct s897r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s897r2Instance;

void f0(s897r2Instance*);

void f1(s897r2Instance*);

U32 f2(s897r2Instance*);

void f3(s897r2Instance*,U32);

U32 f4(s897r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s897r2Instance*,U32,U32,U32,U32,U32);

void f6(s897r2Instance*,U32);

void f7(s897r2Instance*,U32,U32,U32);

void f8(s897r2Instance*,U32,U32,U32);

void s897r2____wasm_call_ctors(s897r2Instance*i);

void s897r2____wasm_apply_data_relocs(s897r2Instance*i);

U32 s897r2_func_1(s897r2Instance*i);

void s897r2_call_cb(s897r2Instance*i,U32 l0);

void s897r2Instantiate(s897r2Instance* instance, void* resolve(const char* module, const char* name));

void s897r2FreeInstance(s897r2Instance* instance);

#endif /* s897r2_H */

