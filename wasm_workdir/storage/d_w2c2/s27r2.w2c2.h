#ifndef s27r2_H
#define s27r2_H

#include "w2c2_base.h"

typedef struct s27r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s27r2Instance;

void f0(s27r2Instance*);

void f1(s27r2Instance*);

U32 f2(s27r2Instance*);

void f3(s27r2Instance*,U32);

U32 f4(s27r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s27r2Instance*,U32,U32,U32,U32,U32);

void f6(s27r2Instance*,U32);

void f7(s27r2Instance*,U32,U32,U32);

void f8(s27r2Instance*,U32,U32,U32);

void s27r2____wasm_call_ctors(s27r2Instance*i);

void s27r2____wasm_apply_data_relocs(s27r2Instance*i);

U32 s27r2_func_1(s27r2Instance*i);

void s27r2_call_cb(s27r2Instance*i,U32 l0);

void s27r2Instantiate(s27r2Instance* instance, void* resolve(const char* module, const char* name));

void s27r2FreeInstance(s27r2Instance* instance);

#endif /* s27r2_H */

