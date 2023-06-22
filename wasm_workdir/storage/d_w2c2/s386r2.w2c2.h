#ifndef s386r2_H
#define s386r2_H

#include "w2c2_base.h"

typedef struct s386r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s386r2Instance;

void f0(s386r2Instance*);

void f1(s386r2Instance*);

U32 f2(s386r2Instance*);

void f3(s386r2Instance*,U32);

U32 f4(s386r2Instance*,U32,U32,U32,U32,U32,U32);

void f5(s386r2Instance*,U32,U32,U32,U32,U32);

void f6(s386r2Instance*,U32);

void f7(s386r2Instance*,U32,U32,U32);

void f8(s386r2Instance*,U32,U32,U32);

void s386r2____wasm_call_ctors(s386r2Instance*i);

void s386r2____wasm_apply_data_relocs(s386r2Instance*i);

U32 s386r2_func_1(s386r2Instance*i);

void s386r2_call_cb(s386r2Instance*i,U32 l0);

void s386r2Instantiate(s386r2Instance* instance, void* resolve(const char* module, const char* name));

void s386r2FreeInstance(s386r2Instance* instance);

#endif /* s386r2_H */

