#ifndef s968r2_H
#define s968r2_H

#include "w2c2_base.h"

typedef struct s968r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s968r2Instance;

void f0(s968r2Instance*);

void f1(s968r2Instance*);

U32 f2(s968r2Instance*);

void f3(s968r2Instance*,U32);

U32 f4(s968r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s968r2Instance*,U32,U32,U32,U32,U32);

void f6(s968r2Instance*,U32);

void f7(s968r2Instance*,U32,U32,U32);

void f8(s968r2Instance*,U32,U32,U32);

void s968r2____wasm_call_ctors(s968r2Instance*i);

void s968r2____wasm_apply_data_relocs(s968r2Instance*i);

U32 s968r2_func_1(s968r2Instance*i);

void s968r2_call_cb(s968r2Instance*i,U32 l0);

void s968r2Instantiate(s968r2Instance* instance, void* resolve(const char* module, const char* name));

void s968r2FreeInstance(s968r2Instance* instance);

#endif /* s968r2_H */

