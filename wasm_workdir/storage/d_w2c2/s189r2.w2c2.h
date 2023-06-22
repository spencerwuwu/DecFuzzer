#ifndef s189r2_H
#define s189r2_H

#include "w2c2_base.h"

typedef struct s189r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s189r2Instance;

void f0(s189r2Instance*);

void f1(s189r2Instance*);

U32 f2(s189r2Instance*);

void f3(s189r2Instance*,U32);

U32 f4(s189r2Instance*,U32,U32,U32);

void f5(s189r2Instance*,U32,U32,U32,U32,U32);

void f6(s189r2Instance*,U32);

void f7(s189r2Instance*,U32,U32,U32);

void f8(s189r2Instance*,U32,U32,U32);

void s189r2____wasm_call_ctors(s189r2Instance*i);

void s189r2____wasm_apply_data_relocs(s189r2Instance*i);

U32 s189r2_func_1(s189r2Instance*i);

void s189r2_call_cb(s189r2Instance*i,U32 l0);

void s189r2Instantiate(s189r2Instance* instance, void* resolve(const char* module, const char* name));

void s189r2FreeInstance(s189r2Instance* instance);

#endif /* s189r2_H */

