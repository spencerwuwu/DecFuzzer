#ifndef s616r2_H
#define s616r2_H

#include "w2c2_base.h"

typedef struct s616r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s616r2Instance;

void f0(s616r2Instance*);

void f1(s616r2Instance*);

U32 f2(s616r2Instance*);

void f3(s616r2Instance*,U32);

U32 f4(s616r2Instance*,U32,U32,U32);

void f5(s616r2Instance*,U32,U32,U32,U32,U32);

void f6(s616r2Instance*,U32);

void f7(s616r2Instance*,U32,U32,U32);

void f8(s616r2Instance*,U32,U32,U32);

void s616r2____wasm_call_ctors(s616r2Instance*i);

void s616r2____wasm_apply_data_relocs(s616r2Instance*i);

U32 s616r2_func_1(s616r2Instance*i);

void s616r2_call_cb(s616r2Instance*i,U32 l0);

void s616r2Instantiate(s616r2Instance* instance, void* resolve(const char* module, const char* name));

void s616r2FreeInstance(s616r2Instance* instance);

#endif /* s616r2_H */

