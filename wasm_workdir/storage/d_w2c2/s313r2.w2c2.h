#ifndef s313r2_H
#define s313r2_H

#include "w2c2_base.h"

typedef struct s313r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s313r2Instance;

void f0(s313r2Instance*);

void f1(s313r2Instance*);

U32 f2(s313r2Instance*);

void f3(s313r2Instance*,U32);

U32 f4(s313r2Instance*,U32,U32,U32,U32,U32,U32);

void f5(s313r2Instance*,U32,U32,U32,U32,U32);

void f6(s313r2Instance*,U32);

void f7(s313r2Instance*,U32,U32,U32);

void f8(s313r2Instance*,U32,U32,U32);

void s313r2____wasm_call_ctors(s313r2Instance*i);

void s313r2____wasm_apply_data_relocs(s313r2Instance*i);

U32 s313r2_func_1(s313r2Instance*i);

void s313r2_call_cb(s313r2Instance*i,U32 l0);

void s313r2Instantiate(s313r2Instance* instance, void* resolve(const char* module, const char* name));

void s313r2FreeInstance(s313r2Instance* instance);

#endif /* s313r2_H */

