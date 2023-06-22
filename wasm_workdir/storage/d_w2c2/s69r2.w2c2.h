#ifndef s69r2_H
#define s69r2_H

#include "w2c2_base.h"

typedef struct s69r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s69r2Instance;

void f0(s69r2Instance*);

void f1(s69r2Instance*);

U32 f2(s69r2Instance*);

void f3(s69r2Instance*,U32);

U32 f4(s69r2Instance*,U32,U32,U32,U32);

void f5(s69r2Instance*,U32,U32,U32,U32,U32);

void f6(s69r2Instance*,U32);

void f7(s69r2Instance*,U32,U32,U32);

void f8(s69r2Instance*,U32,U32,U32);

void s69r2____wasm_call_ctors(s69r2Instance*i);

void s69r2____wasm_apply_data_relocs(s69r2Instance*i);

U32 s69r2_func_1(s69r2Instance*i);

void s69r2_call_cb(s69r2Instance*i,U32 l0);

void s69r2Instantiate(s69r2Instance* instance, void* resolve(const char* module, const char* name));

void s69r2FreeInstance(s69r2Instance* instance);

#endif /* s69r2_H */

