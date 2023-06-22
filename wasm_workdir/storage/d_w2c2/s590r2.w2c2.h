#ifndef s590r2_H
#define s590r2_H

#include "w2c2_base.h"

typedef struct s590r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s590r2Instance;

void f0(s590r2Instance*);

void f1(s590r2Instance*);

U32 f2(s590r2Instance*);

void f3(s590r2Instance*,U32);

U32 f4(s590r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s590r2Instance*,U32,U32,U32,U32,U32);

void f6(s590r2Instance*,U32);

void f7(s590r2Instance*,U32,U32,U32);

void f8(s590r2Instance*,U32,U32,U32);

void s590r2____wasm_call_ctors(s590r2Instance*i);

void s590r2____wasm_apply_data_relocs(s590r2Instance*i);

U32 s590r2_func_1(s590r2Instance*i);

void s590r2_call_cb(s590r2Instance*i,U32 l0);

void s590r2Instantiate(s590r2Instance* instance, void* resolve(const char* module, const char* name));

void s590r2FreeInstance(s590r2Instance* instance);

#endif /* s590r2_H */

