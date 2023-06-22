#ifndef s886r2_H
#define s886r2_H

#include "w2c2_base.h"

typedef struct s886r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s886r2Instance;

void f0(s886r2Instance*);

void f1(s886r2Instance*);

U32 f2(s886r2Instance*);

void f3(s886r2Instance*,U32);

U32 f4(s886r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s886r2Instance*,U32,U32,U32,U32,U32);

void f6(s886r2Instance*,U32);

void f7(s886r2Instance*,U32,U32,U32);

void f8(s886r2Instance*,U32,U32,U32);

void s886r2____wasm_call_ctors(s886r2Instance*i);

void s886r2____wasm_apply_data_relocs(s886r2Instance*i);

U32 s886r2_func_1(s886r2Instance*i);

void s886r2_call_cb(s886r2Instance*i,U32 l0);

void s886r2Instantiate(s886r2Instance* instance, void* resolve(const char* module, const char* name));

void s886r2FreeInstance(s886r2Instance* instance);

#endif /* s886r2_H */

