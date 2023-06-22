#ifndef s673r2_H
#define s673r2_H

#include "w2c2_base.h"

typedef struct s673r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s673r2Instance;

void f0(s673r2Instance*);

void f1(s673r2Instance*);

U32 f2(s673r2Instance*);

void f3(s673r2Instance*,U32);

U32 f4(s673r2Instance*,U32,U32,U32,U32,U32);

void f5(s673r2Instance*,U32,U32,U32,U32,U32);

void f6(s673r2Instance*,U32);

void f7(s673r2Instance*,U32,U32,U32);

void f8(s673r2Instance*,U32,U32,U32);

void s673r2____wasm_call_ctors(s673r2Instance*i);

void s673r2____wasm_apply_data_relocs(s673r2Instance*i);

U32 s673r2_func_1(s673r2Instance*i);

void s673r2_call_cb(s673r2Instance*i,U32 l0);

void s673r2Instantiate(s673r2Instance* instance, void* resolve(const char* module, const char* name));

void s673r2FreeInstance(s673r2Instance* instance);

#endif /* s673r2_H */

