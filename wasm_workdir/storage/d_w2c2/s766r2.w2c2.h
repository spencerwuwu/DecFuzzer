#ifndef s766r2_H
#define s766r2_H

#include "w2c2_base.h"

typedef struct s766r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s766r2Instance;

void f0(s766r2Instance*);

void f1(s766r2Instance*);

U32 f2(s766r2Instance*);

void f3(s766r2Instance*,U32);

U32 f4(s766r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s766r2Instance*,U32,U32,U32,U32,U32);

void f6(s766r2Instance*,U32);

void f7(s766r2Instance*,U32,U32,U32);

void f8(s766r2Instance*,U32,U32,U32);

void s766r2____wasm_call_ctors(s766r2Instance*i);

void s766r2____wasm_apply_data_relocs(s766r2Instance*i);

U32 s766r2_func_1(s766r2Instance*i);

void s766r2_call_cb(s766r2Instance*i,U32 l0);

void s766r2Instantiate(s766r2Instance* instance, void* resolve(const char* module, const char* name));

void s766r2FreeInstance(s766r2Instance* instance);

#endif /* s766r2_H */

