#ifndef s208r2_H
#define s208r2_H

#include "w2c2_base.h"

typedef struct s208r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s208r2Instance;

void f0(s208r2Instance*);

void f1(s208r2Instance*);

U32 f2(s208r2Instance*);

void f3(s208r2Instance*,U32);

U32 f4(s208r2Instance*,U32,U32,U32);

void f5(s208r2Instance*,U32,U32,U32,U32,U32);

void f6(s208r2Instance*,U32);

void f7(s208r2Instance*,U32,U32,U32);

void f8(s208r2Instance*,U32,U32,U32);

void s208r2____wasm_call_ctors(s208r2Instance*i);

void s208r2____wasm_apply_data_relocs(s208r2Instance*i);

U32 s208r2_func_1(s208r2Instance*i);

void s208r2_call_cb(s208r2Instance*i,U32 l0);

void s208r2Instantiate(s208r2Instance* instance, void* resolve(const char* module, const char* name));

void s208r2FreeInstance(s208r2Instance* instance);

#endif /* s208r2_H */

