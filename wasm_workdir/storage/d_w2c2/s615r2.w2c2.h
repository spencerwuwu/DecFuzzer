#ifndef s615r2_H
#define s615r2_H

#include "w2c2_base.h"

typedef struct s615r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s615r2Instance;

void f0(s615r2Instance*);

void f1(s615r2Instance*);

U32 f2(s615r2Instance*);

void f3(s615r2Instance*,U32);

U32 f4(s615r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s615r2Instance*,U32,U32,U32,U32,U32);

void f6(s615r2Instance*,U32);

void f7(s615r2Instance*,U32,U32,U32);

void f8(s615r2Instance*,U32,U32,U32);

void s615r2____wasm_call_ctors(s615r2Instance*i);

void s615r2____wasm_apply_data_relocs(s615r2Instance*i);

U32 s615r2_func_1(s615r2Instance*i);

void s615r2_call_cb(s615r2Instance*i,U32 l0);

void s615r2Instantiate(s615r2Instance* instance, void* resolve(const char* module, const char* name));

void s615r2FreeInstance(s615r2Instance* instance);

#endif /* s615r2_H */

