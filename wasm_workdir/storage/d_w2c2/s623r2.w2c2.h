#ifndef s623r2_H
#define s623r2_H

#include "w2c2_base.h"

typedef struct s623r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s623r2Instance;

void f0(s623r2Instance*);

void f1(s623r2Instance*);

U32 f2(s623r2Instance*);

void f3(s623r2Instance*,U32);

U32 f4(s623r2Instance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s623r2Instance*,U32,U32,U32,U32,U32);

void f6(s623r2Instance*,U32);

void f7(s623r2Instance*,U32,U32,U32);

void f8(s623r2Instance*,U32,U32,U32);

void s623r2____wasm_call_ctors(s623r2Instance*i);

void s623r2____wasm_apply_data_relocs(s623r2Instance*i);

U32 s623r2_func_1(s623r2Instance*i);

void s623r2_call_cb(s623r2Instance*i,U32 l0);

void s623r2Instantiate(s623r2Instance* instance, void* resolve(const char* module, const char* name));

void s623r2FreeInstance(s623r2Instance* instance);

#endif /* s623r2_H */

