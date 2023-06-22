#ifndef s709r2_H
#define s709r2_H

#include "w2c2_base.h"

typedef struct s709r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s709r2Instance;

void f0(s709r2Instance*);

void f1(s709r2Instance*);

U32 f2(s709r2Instance*);

void f3(s709r2Instance*,U32);

U32 f4(s709r2Instance*,U32,U32,U32,U32,U32,U32);

void f5(s709r2Instance*,U32,U32,U32,U32,U32);

void f6(s709r2Instance*,U32);

void f7(s709r2Instance*,U32,U32,U32);

void f8(s709r2Instance*,U32,U32,U32);

void s709r2____wasm_call_ctors(s709r2Instance*i);

void s709r2____wasm_apply_data_relocs(s709r2Instance*i);

U32 s709r2_func_1(s709r2Instance*i);

void s709r2_call_cb(s709r2Instance*i,U32 l0);

void s709r2Instantiate(s709r2Instance* instance, void* resolve(const char* module, const char* name));

void s709r2FreeInstance(s709r2Instance* instance);

#endif /* s709r2_H */

