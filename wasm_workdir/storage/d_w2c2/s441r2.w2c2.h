#ifndef s441r2_H
#define s441r2_H

#include "w2c2_base.h"

typedef struct s441r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s441r2Instance;

void f0(s441r2Instance*);

void f1(s441r2Instance*);

U32 f2(s441r2Instance*);

void f3(s441r2Instance*,U32);

U32 f4(s441r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s441r2Instance*,U32,U32,U32,U32,U32);

void f6(s441r2Instance*,U32);

void f7(s441r2Instance*,U32,U32,U32);

void f8(s441r2Instance*,U32,U32,U32);

void s441r2____wasm_call_ctors(s441r2Instance*i);

void s441r2____wasm_apply_data_relocs(s441r2Instance*i);

U32 s441r2_func_1(s441r2Instance*i);

void s441r2_call_cb(s441r2Instance*i,U32 l0);

void s441r2Instantiate(s441r2Instance* instance, void* resolve(const char* module, const char* name));

void s441r2FreeInstance(s441r2Instance* instance);

#endif /* s441r2_H */

