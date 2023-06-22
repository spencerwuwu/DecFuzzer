#ifndef s437r2_H
#define s437r2_H

#include "w2c2_base.h"

typedef struct s437r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s437r2Instance;

void f0(s437r2Instance*);

void f1(s437r2Instance*);

U32 f2(s437r2Instance*);

void f3(s437r2Instance*,U32);

U32 f4(s437r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s437r2Instance*,U32,U32,U32,U32,U32);

void f6(s437r2Instance*,U32);

void f7(s437r2Instance*,U32,U32,U32);

void f8(s437r2Instance*,U32,U32,U32);

void s437r2____wasm_call_ctors(s437r2Instance*i);

void s437r2____wasm_apply_data_relocs(s437r2Instance*i);

U32 s437r2_func_1(s437r2Instance*i);

void s437r2_call_cb(s437r2Instance*i,U32 l0);

void s437r2Instantiate(s437r2Instance* instance, void* resolve(const char* module, const char* name));

void s437r2FreeInstance(s437r2Instance* instance);

#endif /* s437r2_H */

