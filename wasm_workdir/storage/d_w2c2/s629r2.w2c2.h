#ifndef s629r2_H
#define s629r2_H

#include "w2c2_base.h"

typedef struct s629r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s629r2Instance;

void f0(s629r2Instance*);

void f1(s629r2Instance*);

U32 f2(s629r2Instance*);

void f3(s629r2Instance*,U32);

U32 f4(s629r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s629r2Instance*,U32,U32,U32,U32,U32);

void f6(s629r2Instance*,U32);

void f7(s629r2Instance*,U32,U32,U32);

void f8(s629r2Instance*,U32,U32,U32);

void s629r2____wasm_call_ctors(s629r2Instance*i);

void s629r2____wasm_apply_data_relocs(s629r2Instance*i);

U32 s629r2_func_1(s629r2Instance*i);

void s629r2_call_cb(s629r2Instance*i,U32 l0);

void s629r2Instantiate(s629r2Instance* instance, void* resolve(const char* module, const char* name));

void s629r2FreeInstance(s629r2Instance* instance);

#endif /* s629r2_H */

