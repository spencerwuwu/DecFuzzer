#ifndef s708r2_H
#define s708r2_H

#include "w2c2_base.h"

typedef struct s708r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s708r2Instance;

void f0(s708r2Instance*);

void f1(s708r2Instance*);

U32 f2(s708r2Instance*);

void f3(s708r2Instance*,U32);

U32 f4(s708r2Instance*,U32,U32,U32,U32,U32,U32);

void f5(s708r2Instance*,U32,U32,U32,U32,U32);

void f6(s708r2Instance*,U32);

void f7(s708r2Instance*,U32,U32,U32);

void f8(s708r2Instance*,U32,U32,U32);

void s708r2____wasm_call_ctors(s708r2Instance*i);

void s708r2____wasm_apply_data_relocs(s708r2Instance*i);

U32 s708r2_func_1(s708r2Instance*i);

void s708r2_call_cb(s708r2Instance*i,U32 l0);

void s708r2Instantiate(s708r2Instance* instance, void* resolve(const char* module, const char* name));

void s708r2FreeInstance(s708r2Instance* instance);

#endif /* s708r2_H */

