#ifndef s129r2_H
#define s129r2_H

#include "w2c2_base.h"

typedef struct s129r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s129r2Instance;

void f0(s129r2Instance*);

void f1(s129r2Instance*);

U32 f2(s129r2Instance*);

void f3(s129r2Instance*,U32);

U32 f4(s129r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s129r2Instance*,U32,U32,U32,U32,U32);

void f6(s129r2Instance*,U32);

void f7(s129r2Instance*,U32,U32,U32);

void f8(s129r2Instance*,U32,U32,U32);

void s129r2____wasm_call_ctors(s129r2Instance*i);

void s129r2____wasm_apply_data_relocs(s129r2Instance*i);

U32 s129r2_func_1(s129r2Instance*i);

void s129r2_call_cb(s129r2Instance*i,U32 l0);

void s129r2Instantiate(s129r2Instance* instance, void* resolve(const char* module, const char* name));

void s129r2FreeInstance(s129r2Instance* instance);

#endif /* s129r2_H */

