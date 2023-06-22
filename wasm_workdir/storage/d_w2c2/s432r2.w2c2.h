#ifndef s432r2_H
#define s432r2_H

#include "w2c2_base.h"

typedef struct s432r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s432r2Instance;

void f0(s432r2Instance*);

void f1(s432r2Instance*);

U32 f2(s432r2Instance*);

void f3(s432r2Instance*,U32);

U32 f4(s432r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s432r2Instance*,U32,U32,U32,U32,U32);

void f6(s432r2Instance*,U32);

void f7(s432r2Instance*,U32,U32,U32);

void f8(s432r2Instance*,U32,U32,U32);

void s432r2____wasm_call_ctors(s432r2Instance*i);

void s432r2____wasm_apply_data_relocs(s432r2Instance*i);

U32 s432r2_func_1(s432r2Instance*i);

void s432r2_call_cb(s432r2Instance*i,U32 l0);

void s432r2Instantiate(s432r2Instance* instance, void* resolve(const char* module, const char* name));

void s432r2FreeInstance(s432r2Instance* instance);

#endif /* s432r2_H */

