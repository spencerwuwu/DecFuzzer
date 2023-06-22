#ifndef s324r2_H
#define s324r2_H

#include "w2c2_base.h"

typedef struct s324r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s324r2Instance;

void f0(s324r2Instance*);

void f1(s324r2Instance*);

U32 f2(s324r2Instance*);

void f3(s324r2Instance*,U32);

U32 f4(s324r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s324r2Instance*,U32,U32,U32,U32,U32);

void f6(s324r2Instance*,U32);

void f7(s324r2Instance*,U32,U32,U32);

void f8(s324r2Instance*,U32,U32,U32);

void s324r2____wasm_call_ctors(s324r2Instance*i);

void s324r2____wasm_apply_data_relocs(s324r2Instance*i);

U32 s324r2_func_1(s324r2Instance*i);

void s324r2_call_cb(s324r2Instance*i,U32 l0);

void s324r2Instantiate(s324r2Instance* instance, void* resolve(const char* module, const char* name));

void s324r2FreeInstance(s324r2Instance* instance);

#endif /* s324r2_H */

