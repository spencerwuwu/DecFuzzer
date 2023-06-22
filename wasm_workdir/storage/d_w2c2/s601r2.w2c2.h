#ifndef s601r2_H
#define s601r2_H

#include "w2c2_base.h"

typedef struct s601r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s601r2Instance;

void f0(s601r2Instance*);

void f1(s601r2Instance*);

U32 f2(s601r2Instance*);

void f3(s601r2Instance*,U32);

U32 f4(s601r2Instance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s601r2Instance*,U32,U32,U32,U32,U32);

void f6(s601r2Instance*,U32);

void f7(s601r2Instance*,U32,U32,U32);

void f8(s601r2Instance*,U32,U32,U32);

void s601r2____wasm_call_ctors(s601r2Instance*i);

void s601r2____wasm_apply_data_relocs(s601r2Instance*i);

U32 s601r2_func_1(s601r2Instance*i);

void s601r2_call_cb(s601r2Instance*i,U32 l0);

void s601r2Instantiate(s601r2Instance* instance, void* resolve(const char* module, const char* name));

void s601r2FreeInstance(s601r2Instance* instance);

#endif /* s601r2_H */

