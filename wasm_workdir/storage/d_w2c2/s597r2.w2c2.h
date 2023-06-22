#ifndef s597r2_H
#define s597r2_H

#include "w2c2_base.h"

typedef struct s597r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s597r2Instance;

void f0(s597r2Instance*);

void f1(s597r2Instance*);

U32 f2(s597r2Instance*);

void f3(s597r2Instance*,U32);

U32 f4(s597r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s597r2Instance*,U32,U32,U32,U32,U32);

void f6(s597r2Instance*,U32);

void f7(s597r2Instance*,U32,U32,U32);

void f8(s597r2Instance*,U32,U32,U32);

void s597r2____wasm_call_ctors(s597r2Instance*i);

void s597r2____wasm_apply_data_relocs(s597r2Instance*i);

U32 s597r2_func_1(s597r2Instance*i);

void s597r2_call_cb(s597r2Instance*i,U32 l0);

void s597r2Instantiate(s597r2Instance* instance, void* resolve(const char* module, const char* name));

void s597r2FreeInstance(s597r2Instance* instance);

#endif /* s597r2_H */

