#ifndef s643r2_H
#define s643r2_H

#include "w2c2_base.h"

typedef struct s643r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s643r2Instance;

void f0(s643r2Instance*);

void f1(s643r2Instance*);

U32 f2(s643r2Instance*);

void f3(s643r2Instance*,U32);

U32 f4(s643r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s643r2Instance*,U32,U32,U32,U32,U32);

void f6(s643r2Instance*,U32);

void f7(s643r2Instance*,U32,U32,U32);

void f8(s643r2Instance*,U32,U32,U32);

void s643r2____wasm_call_ctors(s643r2Instance*i);

void s643r2____wasm_apply_data_relocs(s643r2Instance*i);

U32 s643r2_func_1(s643r2Instance*i);

void s643r2_call_cb(s643r2Instance*i,U32 l0);

void s643r2Instantiate(s643r2Instance* instance, void* resolve(const char* module, const char* name));

void s643r2FreeInstance(s643r2Instance* instance);

#endif /* s643r2_H */

