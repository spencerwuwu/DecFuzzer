#ifndef s935r2_H
#define s935r2_H

#include "w2c2_base.h"

typedef struct s935r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s935r2Instance;

void f0(s935r2Instance*);

void f1(s935r2Instance*);

U32 f2(s935r2Instance*);

void f3(s935r2Instance*,U32);

U32 f4(s935r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s935r2Instance*,U32,U32,U32,U32,U32);

void f6(s935r2Instance*,U32);

void f7(s935r2Instance*,U32,U32,U32);

void f8(s935r2Instance*,U32,U32,U32);

void s935r2____wasm_call_ctors(s935r2Instance*i);

void s935r2____wasm_apply_data_relocs(s935r2Instance*i);

U32 s935r2_func_1(s935r2Instance*i);

void s935r2_call_cb(s935r2Instance*i,U32 l0);

void s935r2Instantiate(s935r2Instance* instance, void* resolve(const char* module, const char* name));

void s935r2FreeInstance(s935r2Instance* instance);

#endif /* s935r2_H */

