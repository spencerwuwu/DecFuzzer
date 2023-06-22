#ifndef s371r2_H
#define s371r2_H

#include "w2c2_base.h"

typedef struct s371r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s371r2Instance;

void f0(s371r2Instance*);

void f1(s371r2Instance*);

U32 f2(s371r2Instance*);

void f3(s371r2Instance*,U32);

U32 f4(s371r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s371r2Instance*,U32,U32,U32,U32,U32);

void f6(s371r2Instance*,U32);

void f7(s371r2Instance*,U32,U32,U32);

void f8(s371r2Instance*,U32,U32,U32);

void s371r2____wasm_call_ctors(s371r2Instance*i);

void s371r2____wasm_apply_data_relocs(s371r2Instance*i);

U32 s371r2_func_1(s371r2Instance*i);

void s371r2_call_cb(s371r2Instance*i,U32 l0);

void s371r2Instantiate(s371r2Instance* instance, void* resolve(const char* module, const char* name));

void s371r2FreeInstance(s371r2Instance* instance);

#endif /* s371r2_H */

