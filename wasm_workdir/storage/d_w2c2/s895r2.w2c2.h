#ifndef s895r2_H
#define s895r2_H

#include "w2c2_base.h"

typedef struct s895r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s895r2Instance;

void f0(s895r2Instance*);

void f1(s895r2Instance*);

U32 f2(s895r2Instance*);

void f3(s895r2Instance*,U32);

U32 f4(s895r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s895r2Instance*,U32,U32,U32,U32,U32);

void f6(s895r2Instance*,U32);

void f7(s895r2Instance*,U32,U32,U32);

void f8(s895r2Instance*,U32,U32,U32);

void s895r2____wasm_call_ctors(s895r2Instance*i);

void s895r2____wasm_apply_data_relocs(s895r2Instance*i);

U32 s895r2_func_1(s895r2Instance*i);

void s895r2_call_cb(s895r2Instance*i,U32 l0);

void s895r2Instantiate(s895r2Instance* instance, void* resolve(const char* module, const char* name));

void s895r2FreeInstance(s895r2Instance* instance);

#endif /* s895r2_H */

