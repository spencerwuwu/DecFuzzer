#ifndef s882r2_H
#define s882r2_H

#include "w2c2_base.h"

typedef struct s882r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s882r2Instance;

void f0(s882r2Instance*);

void f1(s882r2Instance*);

U32 f2(s882r2Instance*);

void f3(s882r2Instance*,U32);

U32 f4(s882r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s882r2Instance*,U32,U32,U32,U32,U32);

void f6(s882r2Instance*,U32);

void f7(s882r2Instance*,U32,U32,U32);

void f8(s882r2Instance*,U32,U32,U32);

void s882r2____wasm_call_ctors(s882r2Instance*i);

void s882r2____wasm_apply_data_relocs(s882r2Instance*i);

U32 s882r2_func_1(s882r2Instance*i);

void s882r2_call_cb(s882r2Instance*i,U32 l0);

void s882r2Instantiate(s882r2Instance* instance, void* resolve(const char* module, const char* name));

void s882r2FreeInstance(s882r2Instance* instance);

#endif /* s882r2_H */

