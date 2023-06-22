#ifndef s826r2_H
#define s826r2_H

#include "w2c2_base.h"

typedef struct s826r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s826r2Instance;

void f0(s826r2Instance*);

void f1(s826r2Instance*);

U32 f2(s826r2Instance*);

void f3(s826r2Instance*,U32);

U32 f4(s826r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s826r2Instance*,U32,U32,U32,U32,U32);

void f6(s826r2Instance*,U32);

void f7(s826r2Instance*,U32,U32,U32);

void f8(s826r2Instance*,U32,U32,U32);

void s826r2____wasm_call_ctors(s826r2Instance*i);

void s826r2____wasm_apply_data_relocs(s826r2Instance*i);

U32 s826r2_func_1(s826r2Instance*i);

void s826r2_call_cb(s826r2Instance*i,U32 l0);

void s826r2Instantiate(s826r2Instance* instance, void* resolve(const char* module, const char* name));

void s826r2FreeInstance(s826r2Instance* instance);

#endif /* s826r2_H */

