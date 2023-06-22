#ifndef s158r2_H
#define s158r2_H

#include "w2c2_base.h"

typedef struct s158r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s158r2Instance;

void f0(s158r2Instance*);

void f1(s158r2Instance*);

U32 f2(s158r2Instance*);

void f3(s158r2Instance*,U32);

U32 f4(s158r2Instance*,U32,U32,U32,U32);

void f5(s158r2Instance*,U32,U32,U32,U32,U32);

void f6(s158r2Instance*,U32);

void f7(s158r2Instance*,U32,U32,U32);

void f8(s158r2Instance*,U32,U32,U32);

void s158r2____wasm_call_ctors(s158r2Instance*i);

void s158r2____wasm_apply_data_relocs(s158r2Instance*i);

U32 s158r2_func_1(s158r2Instance*i);

void s158r2_call_cb(s158r2Instance*i,U32 l0);

void s158r2Instantiate(s158r2Instance* instance, void* resolve(const char* module, const char* name));

void s158r2FreeInstance(s158r2Instance* instance);

#endif /* s158r2_H */

