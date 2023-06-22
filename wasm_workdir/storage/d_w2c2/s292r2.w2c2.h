#ifndef s292r2_H
#define s292r2_H

#include "w2c2_base.h"

typedef struct s292r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s292r2Instance;

void f0(s292r2Instance*);

void f1(s292r2Instance*);

U32 f2(s292r2Instance*);

void f3(s292r2Instance*,U32);

U32 f4(s292r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s292r2Instance*,U32,U32,U32,U32,U32);

void f6(s292r2Instance*,U32);

void f7(s292r2Instance*,U32,U32,U32);

void f8(s292r2Instance*,U32,U32,U32);

void s292r2____wasm_call_ctors(s292r2Instance*i);

void s292r2____wasm_apply_data_relocs(s292r2Instance*i);

U32 s292r2_func_1(s292r2Instance*i);

void s292r2_call_cb(s292r2Instance*i,U32 l0);

void s292r2Instantiate(s292r2Instance* instance, void* resolve(const char* module, const char* name));

void s292r2FreeInstance(s292r2Instance* instance);

#endif /* s292r2_H */

