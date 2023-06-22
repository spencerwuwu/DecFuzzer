#ifndef s475r2_H
#define s475r2_H

#include "w2c2_base.h"

typedef struct s475r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s475r2Instance;

void f0(s475r2Instance*);

void f1(s475r2Instance*);

U32 f2(s475r2Instance*);

void f3(s475r2Instance*,U32);

U32 f4(s475r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s475r2Instance*,U32,U32,U32,U32,U32);

void f6(s475r2Instance*,U32);

void f7(s475r2Instance*,U32,U32,U32);

void f8(s475r2Instance*,U32,U32,U32);

void s475r2____wasm_call_ctors(s475r2Instance*i);

void s475r2____wasm_apply_data_relocs(s475r2Instance*i);

U32 s475r2_func_1(s475r2Instance*i);

void s475r2_call_cb(s475r2Instance*i,U32 l0);

void s475r2Instantiate(s475r2Instance* instance, void* resolve(const char* module, const char* name));

void s475r2FreeInstance(s475r2Instance* instance);

#endif /* s475r2_H */

