#ifndef s580r2_H
#define s580r2_H

#include "w2c2_base.h"

typedef struct s580r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s580r2Instance;

void f0(s580r2Instance*);

void f1(s580r2Instance*);

U32 f2(s580r2Instance*);

void f3(s580r2Instance*,U32);

U32 f4(s580r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s580r2Instance*,U32,U32,U32,U32,U32);

void f6(s580r2Instance*,U32);

void f7(s580r2Instance*,U32,U32,U32);

void f8(s580r2Instance*,U32,U32,U32);

void s580r2____wasm_call_ctors(s580r2Instance*i);

void s580r2____wasm_apply_data_relocs(s580r2Instance*i);

U32 s580r2_func_1(s580r2Instance*i);

void s580r2_call_cb(s580r2Instance*i,U32 l0);

void s580r2Instantiate(s580r2Instance* instance, void* resolve(const char* module, const char* name));

void s580r2FreeInstance(s580r2Instance* instance);

#endif /* s580r2_H */

