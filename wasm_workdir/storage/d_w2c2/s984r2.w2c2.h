#ifndef s984r2_H
#define s984r2_H

#include "w2c2_base.h"

typedef struct s984r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s984r2Instance;

void f0(s984r2Instance*);

void f1(s984r2Instance*);

U32 f2(s984r2Instance*);

void f3(s984r2Instance*,U32);

U32 f4(s984r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s984r2Instance*,U32,U32,U32,U32,U32);

void f6(s984r2Instance*,U32);

void f7(s984r2Instance*,U32,U32,U32);

void f8(s984r2Instance*,U32,U32,U32);

void s984r2____wasm_call_ctors(s984r2Instance*i);

void s984r2____wasm_apply_data_relocs(s984r2Instance*i);

U32 s984r2_func_1(s984r2Instance*i);

void s984r2_call_cb(s984r2Instance*i,U32 l0);

void s984r2Instantiate(s984r2Instance* instance, void* resolve(const char* module, const char* name));

void s984r2FreeInstance(s984r2Instance* instance);

#endif /* s984r2_H */

