#ifndef s343r2_H
#define s343r2_H

#include "w2c2_base.h"

typedef struct s343r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s343r2Instance;

void f0(s343r2Instance*);

void f1(s343r2Instance*);

U32 f2(s343r2Instance*);

void f3(s343r2Instance*,U32);

U32 f4(s343r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s343r2Instance*,U32,U32,U32,U32,U32);

void f6(s343r2Instance*,U32);

void f7(s343r2Instance*,U32,U32,U32);

void f8(s343r2Instance*,U32,U32,U32);

void s343r2____wasm_call_ctors(s343r2Instance*i);

void s343r2____wasm_apply_data_relocs(s343r2Instance*i);

U32 s343r2_func_1(s343r2Instance*i);

void s343r2_call_cb(s343r2Instance*i,U32 l0);

void s343r2Instantiate(s343r2Instance* instance, void* resolve(const char* module, const char* name));

void s343r2FreeInstance(s343r2Instance* instance);

#endif /* s343r2_H */

