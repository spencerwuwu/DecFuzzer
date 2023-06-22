#ifndef s106r2_H
#define s106r2_H

#include "w2c2_base.h"

typedef struct s106r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s106r2Instance;

void f0(s106r2Instance*);

void f1(s106r2Instance*);

U32 f2(s106r2Instance*);

void f3(s106r2Instance*,U32);

U32 f4(s106r2Instance*,U32,U32,U32,U32,U32);

void f5(s106r2Instance*,U32,U32,U32,U32,U32);

void f6(s106r2Instance*,U32);

void f7(s106r2Instance*,U32,U32,U32);

void f8(s106r2Instance*,U32,U32,U32);

void s106r2____wasm_call_ctors(s106r2Instance*i);

void s106r2____wasm_apply_data_relocs(s106r2Instance*i);

U32 s106r2_func_1(s106r2Instance*i);

void s106r2_call_cb(s106r2Instance*i,U32 l0);

void s106r2Instantiate(s106r2Instance* instance, void* resolve(const char* module, const char* name));

void s106r2FreeInstance(s106r2Instance* instance);

#endif /* s106r2_H */

