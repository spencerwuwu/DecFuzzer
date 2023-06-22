#ifndef s140r2_H
#define s140r2_H

#include "w2c2_base.h"

typedef struct s140r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s140r2Instance;

void f0(s140r2Instance*);

void f1(s140r2Instance*);

U32 f2(s140r2Instance*);

void f3(s140r2Instance*,U32);

U32 f4(s140r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s140r2Instance*,U32,U32,U32,U32,U32);

void f6(s140r2Instance*,U32);

void f7(s140r2Instance*,U32,U32,U32);

void f8(s140r2Instance*,U32,U32,U32);

void s140r2____wasm_call_ctors(s140r2Instance*i);

void s140r2____wasm_apply_data_relocs(s140r2Instance*i);

U32 s140r2_func_1(s140r2Instance*i);

void s140r2_call_cb(s140r2Instance*i,U32 l0);

void s140r2Instantiate(s140r2Instance* instance, void* resolve(const char* module, const char* name));

void s140r2FreeInstance(s140r2Instance* instance);

#endif /* s140r2_H */

