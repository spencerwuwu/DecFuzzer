#ifndef s536r2_H
#define s536r2_H

#include "w2c2_base.h"

typedef struct s536r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s536r2Instance;

void f0(s536r2Instance*);

void f1(s536r2Instance*);

U32 f2(s536r2Instance*);

void f3(s536r2Instance*,U32);

U32 f4(s536r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s536r2Instance*,U32,U32,U32,U32,U32);

void f6(s536r2Instance*,U32);

void f7(s536r2Instance*,U32,U32,U32);

void f8(s536r2Instance*,U32,U32,U32);

void s536r2____wasm_call_ctors(s536r2Instance*i);

void s536r2____wasm_apply_data_relocs(s536r2Instance*i);

U32 s536r2_func_1(s536r2Instance*i);

void s536r2_call_cb(s536r2Instance*i,U32 l0);

void s536r2Instantiate(s536r2Instance* instance, void* resolve(const char* module, const char* name));

void s536r2FreeInstance(s536r2Instance* instance);

#endif /* s536r2_H */

