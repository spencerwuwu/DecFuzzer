#ifndef s667r2_H
#define s667r2_H

#include "w2c2_base.h"

typedef struct s667r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s667r2Instance;

void f0(s667r2Instance*);

void f1(s667r2Instance*);

U32 f2(s667r2Instance*);

void f3(s667r2Instance*,U32);

U32 f4(s667r2Instance*,U32,U32,U32);

void f5(s667r2Instance*,U32,U32,U32,U32,U32);

void f6(s667r2Instance*,U32);

void f7(s667r2Instance*,U32,U32,U32);

void f8(s667r2Instance*,U32,U32,U32);

void s667r2____wasm_call_ctors(s667r2Instance*i);

void s667r2____wasm_apply_data_relocs(s667r2Instance*i);

U32 s667r2_func_1(s667r2Instance*i);

void s667r2_call_cb(s667r2Instance*i,U32 l0);

void s667r2Instantiate(s667r2Instance* instance, void* resolve(const char* module, const char* name));

void s667r2FreeInstance(s667r2Instance* instance);

#endif /* s667r2_H */

