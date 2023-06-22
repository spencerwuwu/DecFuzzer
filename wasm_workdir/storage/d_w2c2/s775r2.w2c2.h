#ifndef s775r2_H
#define s775r2_H

#include "w2c2_base.h"

typedef struct s775r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s775r2Instance;

void f0(s775r2Instance*);

void f1(s775r2Instance*);

U32 f2(s775r2Instance*);

void f3(s775r2Instance*,U32);

U32 f4(s775r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s775r2Instance*,U32,U32,U32,U32,U32);

void f6(s775r2Instance*,U32);

void f7(s775r2Instance*,U32,U32,U32);

void f8(s775r2Instance*,U32,U32,U32);

void s775r2____wasm_call_ctors(s775r2Instance*i);

void s775r2____wasm_apply_data_relocs(s775r2Instance*i);

U32 s775r2_func_1(s775r2Instance*i);

void s775r2_call_cb(s775r2Instance*i,U32 l0);

void s775r2Instantiate(s775r2Instance* instance, void* resolve(const char* module, const char* name));

void s775r2FreeInstance(s775r2Instance* instance);

#endif /* s775r2_H */

