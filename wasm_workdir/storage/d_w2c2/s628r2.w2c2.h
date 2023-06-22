#ifndef s628r2_H
#define s628r2_H

#include "w2c2_base.h"

typedef struct s628r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s628r2Instance;

void f0(s628r2Instance*);

void f1(s628r2Instance*);

U32 f2(s628r2Instance*);

void f3(s628r2Instance*,U32);

U32 f4(s628r2Instance*,U32,U32,U32,U32,U32);

void f5(s628r2Instance*,U32,U32,U32,U32,U32);

void f6(s628r2Instance*,U32);

void f7(s628r2Instance*,U32,U32,U32);

void f8(s628r2Instance*,U32,U32,U32);

void s628r2____wasm_call_ctors(s628r2Instance*i);

void s628r2____wasm_apply_data_relocs(s628r2Instance*i);

U32 s628r2_func_1(s628r2Instance*i);

void s628r2_call_cb(s628r2Instance*i,U32 l0);

void s628r2Instantiate(s628r2Instance* instance, void* resolve(const char* module, const char* name));

void s628r2FreeInstance(s628r2Instance* instance);

#endif /* s628r2_H */

