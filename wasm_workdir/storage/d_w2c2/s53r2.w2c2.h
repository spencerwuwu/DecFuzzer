#ifndef s53r2_H
#define s53r2_H

#include "w2c2_base.h"

typedef struct s53r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s53r2Instance;

void f0(s53r2Instance*);

void f1(s53r2Instance*);

U32 f2(s53r2Instance*);

void f3(s53r2Instance*,U32);

U32 f4(s53r2Instance*,U32,U32,U32,U32,U32);

void f5(s53r2Instance*,U32,U32,U32,U32,U32);

void f6(s53r2Instance*,U32);

void f7(s53r2Instance*,U32,U32,U32);

void f8(s53r2Instance*,U32,U32,U32);

void s53r2____wasm_call_ctors(s53r2Instance*i);

void s53r2____wasm_apply_data_relocs(s53r2Instance*i);

U32 s53r2_func_1(s53r2Instance*i);

void s53r2_call_cb(s53r2Instance*i,U32 l0);

void s53r2Instantiate(s53r2Instance* instance, void* resolve(const char* module, const char* name));

void s53r2FreeInstance(s53r2Instance* instance);

#endif /* s53r2_H */

