#ifndef s259r2_H
#define s259r2_H

#include "w2c2_base.h"

typedef struct s259r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s259r2Instance;

void f0(s259r2Instance*);

void f1(s259r2Instance*);

U32 f2(s259r2Instance*);

void f3(s259r2Instance*,U32);

U32 f4(s259r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s259r2Instance*,U32,U32,U32,U32,U32);

void f6(s259r2Instance*,U32);

void f7(s259r2Instance*,U32,U32,U32);

void f8(s259r2Instance*,U32,U32,U32);

void s259r2____wasm_call_ctors(s259r2Instance*i);

void s259r2____wasm_apply_data_relocs(s259r2Instance*i);

U32 s259r2_func_1(s259r2Instance*i);

void s259r2_call_cb(s259r2Instance*i,U32 l0);

void s259r2Instantiate(s259r2Instance* instance, void* resolve(const char* module, const char* name));

void s259r2FreeInstance(s259r2Instance* instance);

#endif /* s259r2_H */

