#ifndef s220r2_H
#define s220r2_H

#include "w2c2_base.h"

typedef struct s220r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s220r2Instance;

void f0(s220r2Instance*);

void f1(s220r2Instance*);

U32 f2(s220r2Instance*);

void f3(s220r2Instance*,U32);

U32 f4(s220r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s220r2Instance*,U32,U32,U32,U32,U32);

void f6(s220r2Instance*,U32);

void f7(s220r2Instance*,U32,U32,U32);

void f8(s220r2Instance*,U32,U32,U32);

void s220r2____wasm_call_ctors(s220r2Instance*i);

void s220r2____wasm_apply_data_relocs(s220r2Instance*i);

U32 s220r2_func_1(s220r2Instance*i);

void s220r2_call_cb(s220r2Instance*i,U32 l0);

void s220r2Instantiate(s220r2Instance* instance, void* resolve(const char* module, const char* name));

void s220r2FreeInstance(s220r2Instance* instance);

#endif /* s220r2_H */

