#ifndef s297r2_H
#define s297r2_H

#include "w2c2_base.h"

typedef struct s297r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s297r2Instance;

void f0(s297r2Instance*);

void f1(s297r2Instance*);

U32 f2(s297r2Instance*);

void f3(s297r2Instance*,U32);

U32 f4(s297r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s297r2Instance*,U32,U32,U32,U32,U32);

void f6(s297r2Instance*,U32);

void f7(s297r2Instance*,U32,U32,U32);

void f8(s297r2Instance*,U32,U32,U32);

void s297r2____wasm_call_ctors(s297r2Instance*i);

void s297r2____wasm_apply_data_relocs(s297r2Instance*i);

U32 s297r2_func_1(s297r2Instance*i);

void s297r2_call_cb(s297r2Instance*i,U32 l0);

void s297r2Instantiate(s297r2Instance* instance, void* resolve(const char* module, const char* name));

void s297r2FreeInstance(s297r2Instance* instance);

#endif /* s297r2_H */

