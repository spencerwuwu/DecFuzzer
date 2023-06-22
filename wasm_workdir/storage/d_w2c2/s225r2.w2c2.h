#ifndef s225r2_H
#define s225r2_H

#include "w2c2_base.h"

typedef struct s225r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s225r2Instance;

void f0(s225r2Instance*);

void f1(s225r2Instance*);

U32 f2(s225r2Instance*);

void f3(s225r2Instance*,U32);

U32 f4(s225r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s225r2Instance*,U32,U32,U32,U32,U32);

void f6(s225r2Instance*,U32);

void f7(s225r2Instance*,U32,U32,U32);

void f8(s225r2Instance*,U32,U32,U32);

void s225r2____wasm_call_ctors(s225r2Instance*i);

void s225r2____wasm_apply_data_relocs(s225r2Instance*i);

U32 s225r2_func_1(s225r2Instance*i);

void s225r2_call_cb(s225r2Instance*i,U32 l0);

void s225r2Instantiate(s225r2Instance* instance, void* resolve(const char* module, const char* name));

void s225r2FreeInstance(s225r2Instance* instance);

#endif /* s225r2_H */

