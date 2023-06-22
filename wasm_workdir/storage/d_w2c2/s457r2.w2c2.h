#ifndef s457r2_H
#define s457r2_H

#include "w2c2_base.h"

typedef struct s457r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s457r2Instance;

void f0(s457r2Instance*);

void f1(s457r2Instance*);

U32 f2(s457r2Instance*);

void f3(s457r2Instance*,U32);

U32 f4(s457r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s457r2Instance*,U32,U32,U32,U32,U32);

void f6(s457r2Instance*,U32);

void f7(s457r2Instance*,U32,U32,U32);

void f8(s457r2Instance*,U32,U32,U32);

void s457r2____wasm_call_ctors(s457r2Instance*i);

void s457r2____wasm_apply_data_relocs(s457r2Instance*i);

U32 s457r2_func_1(s457r2Instance*i);

void s457r2_call_cb(s457r2Instance*i,U32 l0);

void s457r2Instantiate(s457r2Instance* instance, void* resolve(const char* module, const char* name));

void s457r2FreeInstance(s457r2Instance* instance);

#endif /* s457r2_H */

