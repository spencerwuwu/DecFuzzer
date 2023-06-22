#ifndef s693r2_H
#define s693r2_H

#include "w2c2_base.h"

typedef struct s693r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s693r2Instance;

void f0(s693r2Instance*);

void f1(s693r2Instance*);

U32 f2(s693r2Instance*);

void f3(s693r2Instance*,U32);

U32 f4(s693r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s693r2Instance*,U32,U32,U32,U32,U32);

void f6(s693r2Instance*,U32);

void f7(s693r2Instance*,U32,U32,U32);

void f8(s693r2Instance*,U32,U32,U32);

void s693r2____wasm_call_ctors(s693r2Instance*i);

void s693r2____wasm_apply_data_relocs(s693r2Instance*i);

U32 s693r2_func_1(s693r2Instance*i);

void s693r2_call_cb(s693r2Instance*i,U32 l0);

void s693r2Instantiate(s693r2Instance* instance, void* resolve(const char* module, const char* name));

void s693r2FreeInstance(s693r2Instance* instance);

#endif /* s693r2_H */

