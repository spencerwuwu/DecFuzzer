#ifndef s866r2_H
#define s866r2_H

#include "w2c2_base.h"

typedef struct s866r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s866r2Instance;

void f0(s866r2Instance*);

void f1(s866r2Instance*);

U32 f2(s866r2Instance*);

void f3(s866r2Instance*,U32);

U32 f4(s866r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s866r2Instance*,U32,U32,U32,U32,U32);

void f6(s866r2Instance*,U32);

void f7(s866r2Instance*,U32,U32,U32);

void f8(s866r2Instance*,U32,U32,U32);

void s866r2____wasm_call_ctors(s866r2Instance*i);

void s866r2____wasm_apply_data_relocs(s866r2Instance*i);

U32 s866r2_func_1(s866r2Instance*i);

void s866r2_call_cb(s866r2Instance*i,U32 l0);

void s866r2Instantiate(s866r2Instance* instance, void* resolve(const char* module, const char* name));

void s866r2FreeInstance(s866r2Instance* instance);

#endif /* s866r2_H */

