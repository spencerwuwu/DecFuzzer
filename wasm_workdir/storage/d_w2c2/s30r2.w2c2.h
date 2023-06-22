#ifndef s30r2_H
#define s30r2_H

#include "w2c2_base.h"

typedef struct s30r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s30r2Instance;

void f0(s30r2Instance*);

void f1(s30r2Instance*);

U32 f2(s30r2Instance*);

void f3(s30r2Instance*,U32);

U32 f4(s30r2Instance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s30r2Instance*,U32,U32,U32,U32,U32);

void f6(s30r2Instance*,U32);

void f7(s30r2Instance*,U32,U32,U32);

void f8(s30r2Instance*,U32,U32,U32);

void s30r2____wasm_call_ctors(s30r2Instance*i);

void s30r2____wasm_apply_data_relocs(s30r2Instance*i);

U32 s30r2_func_1(s30r2Instance*i);

void s30r2_call_cb(s30r2Instance*i,U32 l0);

void s30r2Instantiate(s30r2Instance* instance, void* resolve(const char* module, const char* name));

void s30r2FreeInstance(s30r2Instance* instance);

#endif /* s30r2_H */

