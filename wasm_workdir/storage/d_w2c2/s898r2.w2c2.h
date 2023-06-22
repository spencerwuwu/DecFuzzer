#ifndef s898r2_H
#define s898r2_H

#include "w2c2_base.h"

typedef struct s898r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s898r2Instance;

void f0(s898r2Instance*);

void f1(s898r2Instance*);

U32 f2(s898r2Instance*);

void f3(s898r2Instance*,U32);

U32 f4(s898r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s898r2Instance*,U32,U32,U32,U32,U32);

void f6(s898r2Instance*,U32);

void f7(s898r2Instance*,U32,U32,U32);

void f8(s898r2Instance*,U32,U32,U32);

void s898r2____wasm_call_ctors(s898r2Instance*i);

void s898r2____wasm_apply_data_relocs(s898r2Instance*i);

U32 s898r2_func_1(s898r2Instance*i);

void s898r2_call_cb(s898r2Instance*i,U32 l0);

void s898r2Instantiate(s898r2Instance* instance, void* resolve(const char* module, const char* name));

void s898r2FreeInstance(s898r2Instance* instance);

#endif /* s898r2_H */

