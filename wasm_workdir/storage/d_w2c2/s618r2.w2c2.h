#ifndef s618r2_H
#define s618r2_H

#include "w2c2_base.h"

typedef struct s618r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s618r2Instance;

void f0(s618r2Instance*);

void f1(s618r2Instance*);

U32 f2(s618r2Instance*);

void f3(s618r2Instance*,U32);

U32 f4(s618r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s618r2Instance*,U32,U32,U32,U32,U32);

void f6(s618r2Instance*,U32);

void f7(s618r2Instance*,U32,U32,U32);

void f8(s618r2Instance*,U32,U32,U32);

void s618r2____wasm_call_ctors(s618r2Instance*i);

void s618r2____wasm_apply_data_relocs(s618r2Instance*i);

U32 s618r2_func_1(s618r2Instance*i);

void s618r2_call_cb(s618r2Instance*i,U32 l0);

void s618r2Instantiate(s618r2Instance* instance, void* resolve(const char* module, const char* name));

void s618r2FreeInstance(s618r2Instance* instance);

#endif /* s618r2_H */

