#ifndef s852r2_H
#define s852r2_H

#include "w2c2_base.h"

typedef struct s852r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s852r2Instance;

void f0(s852r2Instance*);

void f1(s852r2Instance*);

U32 f2(s852r2Instance*);

void f3(s852r2Instance*,U32);

U32 f4(s852r2Instance*,U32,U32,U32,U32,U32);

void f5(s852r2Instance*,U32,U32,U32,U32,U32);

void f6(s852r2Instance*,U32);

void f7(s852r2Instance*,U32,U32,U32);

void f8(s852r2Instance*,U32,U32,U32);

void s852r2____wasm_call_ctors(s852r2Instance*i);

void s852r2____wasm_apply_data_relocs(s852r2Instance*i);

U32 s852r2_func_1(s852r2Instance*i);

void s852r2_call_cb(s852r2Instance*i,U32 l0);

void s852r2Instantiate(s852r2Instance* instance, void* resolve(const char* module, const char* name));

void s852r2FreeInstance(s852r2Instance* instance);

#endif /* s852r2_H */

