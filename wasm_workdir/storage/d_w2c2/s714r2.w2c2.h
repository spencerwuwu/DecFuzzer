#ifndef s714r2_H
#define s714r2_H

#include "w2c2_base.h"

typedef struct s714r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s714r2Instance;

void f0(s714r2Instance*);

void f1(s714r2Instance*);

U32 f2(s714r2Instance*);

void f3(s714r2Instance*,U32);

U32 f4(s714r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s714r2Instance*,U32,U32,U32,U32,U32);

void f6(s714r2Instance*,U32);

void f7(s714r2Instance*,U32,U32,U32);

void f8(s714r2Instance*,U32,U32,U32);

void s714r2____wasm_call_ctors(s714r2Instance*i);

void s714r2____wasm_apply_data_relocs(s714r2Instance*i);

U32 s714r2_func_1(s714r2Instance*i);

void s714r2_call_cb(s714r2Instance*i,U32 l0);

void s714r2Instantiate(s714r2Instance* instance, void* resolve(const char* module, const char* name));

void s714r2FreeInstance(s714r2Instance* instance);

#endif /* s714r2_H */

