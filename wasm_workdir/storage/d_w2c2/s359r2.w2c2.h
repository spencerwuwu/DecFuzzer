#ifndef s359r2_H
#define s359r2_H

#include "w2c2_base.h"

typedef struct s359r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s359r2Instance;

void f0(s359r2Instance*);

void f1(s359r2Instance*);

U32 f2(s359r2Instance*);

void f3(s359r2Instance*,U32);

U32 f4(s359r2Instance*,U32,U32,U32,U32);

void f5(s359r2Instance*,U32,U32,U32,U32,U32);

void f6(s359r2Instance*,U32);

void f7(s359r2Instance*,U32,U32,U32);

void f8(s359r2Instance*,U32,U32,U32);

void s359r2____wasm_call_ctors(s359r2Instance*i);

void s359r2____wasm_apply_data_relocs(s359r2Instance*i);

U32 s359r2_func_1(s359r2Instance*i);

void s359r2_call_cb(s359r2Instance*i,U32 l0);

void s359r2Instantiate(s359r2Instance* instance, void* resolve(const char* module, const char* name));

void s359r2FreeInstance(s359r2Instance* instance);

#endif /* s359r2_H */
