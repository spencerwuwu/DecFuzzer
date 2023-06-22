#ifndef s731r2_H
#define s731r2_H

#include "w2c2_base.h"

typedef struct s731r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s731r2Instance;

void f0(s731r2Instance*);

void f1(s731r2Instance*);

U32 f2(s731r2Instance*);

void f3(s731r2Instance*,U32);

U32 f4(s731r2Instance*,U32,U32,U32,U32);

void f5(s731r2Instance*,U32,U32,U32,U32,U32);

void f6(s731r2Instance*,U32);

void f7(s731r2Instance*,U32,U32,U32);

void f8(s731r2Instance*,U32,U32,U32);

void s731r2____wasm_call_ctors(s731r2Instance*i);

void s731r2____wasm_apply_data_relocs(s731r2Instance*i);

U32 s731r2_func_1(s731r2Instance*i);

void s731r2_call_cb(s731r2Instance*i,U32 l0);

void s731r2Instantiate(s731r2Instance* instance, void* resolve(const char* module, const char* name));

void s731r2FreeInstance(s731r2Instance* instance);

#endif /* s731r2_H */

