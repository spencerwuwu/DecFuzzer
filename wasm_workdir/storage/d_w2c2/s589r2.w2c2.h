#ifndef s589r2_H
#define s589r2_H

#include "w2c2_base.h"

typedef struct s589r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s589r2Instance;

void f0(s589r2Instance*);

void f1(s589r2Instance*);

U32 f2(s589r2Instance*);

void f3(s589r2Instance*,U32);

U32 f4(s589r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s589r2Instance*,U32,U32,U32,U32,U32);

void f6(s589r2Instance*,U32);

void f7(s589r2Instance*,U32,U32,U32);

void f8(s589r2Instance*,U32,U32,U32);

void s589r2____wasm_call_ctors(s589r2Instance*i);

void s589r2____wasm_apply_data_relocs(s589r2Instance*i);

U32 s589r2_func_1(s589r2Instance*i);

void s589r2_call_cb(s589r2Instance*i,U32 l0);

void s589r2Instantiate(s589r2Instance* instance, void* resolve(const char* module, const char* name));

void s589r2FreeInstance(s589r2Instance* instance);

#endif /* s589r2_H */

