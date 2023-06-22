#ifndef s315r2_H
#define s315r2_H

#include "w2c2_base.h"

typedef struct s315r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s315r2Instance;

void f0(s315r2Instance*);

void f1(s315r2Instance*);

U32 f2(s315r2Instance*);

void f3(s315r2Instance*,U32);

U32 f4(s315r2Instance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s315r2Instance*,U32,U32,U32,U32,U32);

void f6(s315r2Instance*,U32);

void f7(s315r2Instance*,U32,U32,U32);

void f8(s315r2Instance*,U32,U32,U32);

void s315r2____wasm_call_ctors(s315r2Instance*i);

void s315r2____wasm_apply_data_relocs(s315r2Instance*i);

U32 s315r2_func_1(s315r2Instance*i);

void s315r2_call_cb(s315r2Instance*i,U32 l0);

void s315r2Instantiate(s315r2Instance* instance, void* resolve(const char* module, const char* name));

void s315r2FreeInstance(s315r2Instance* instance);

#endif /* s315r2_H */

