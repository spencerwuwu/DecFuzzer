#ifndef s613r2_H
#define s613r2_H

#include "w2c2_base.h"

typedef struct s613r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s613r2Instance;

void f0(s613r2Instance*);

void f1(s613r2Instance*);

U32 f2(s613r2Instance*);

void f3(s613r2Instance*,U32);

U32 f4(s613r2Instance*,U32,U32,U32);

void f5(s613r2Instance*,U32,U32,U32,U32,U32);

void f6(s613r2Instance*,U32);

void f7(s613r2Instance*,U32,U32,U32);

void f8(s613r2Instance*,U32,U32,U32);

void s613r2____wasm_call_ctors(s613r2Instance*i);

void s613r2____wasm_apply_data_relocs(s613r2Instance*i);

U32 s613r2_func_1(s613r2Instance*i);

void s613r2_call_cb(s613r2Instance*i,U32 l0);

void s613r2Instantiate(s613r2Instance* instance, void* resolve(const char* module, const char* name));

void s613r2FreeInstance(s613r2Instance* instance);

#endif /* s613r2_H */

