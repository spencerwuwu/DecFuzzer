#ifndef s681r2_H
#define s681r2_H

#include "w2c2_base.h"

typedef struct s681r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s681r2Instance;

void f0(s681r2Instance*);

void f1(s681r2Instance*);

U32 f2(s681r2Instance*);

void f3(s681r2Instance*,U32);

U32 f4(s681r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s681r2Instance*,U32,U32,U32,U32,U32);

void f6(s681r2Instance*,U32);

void f7(s681r2Instance*,U32,U32,U32);

void f8(s681r2Instance*,U32,U32,U32);

void s681r2____wasm_call_ctors(s681r2Instance*i);

void s681r2____wasm_apply_data_relocs(s681r2Instance*i);

U32 s681r2_func_1(s681r2Instance*i);

void s681r2_call_cb(s681r2Instance*i,U32 l0);

void s681r2Instantiate(s681r2Instance* instance, void* resolve(const char* module, const char* name));

void s681r2FreeInstance(s681r2Instance* instance);

#endif /* s681r2_H */

