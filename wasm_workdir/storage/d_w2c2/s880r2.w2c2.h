#ifndef s880r2_H
#define s880r2_H

#include "w2c2_base.h"

typedef struct s880r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s880r2Instance;

void f0(s880r2Instance*);

void f1(s880r2Instance*);

U32 f2(s880r2Instance*);

void f3(s880r2Instance*,U32);

U32 f4(s880r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s880r2Instance*,U32,U32,U32,U32,U32);

void f6(s880r2Instance*,U32);

void f7(s880r2Instance*,U32,U32,U32);

void f8(s880r2Instance*,U32,U32,U32);

void s880r2____wasm_call_ctors(s880r2Instance*i);

void s880r2____wasm_apply_data_relocs(s880r2Instance*i);

U32 s880r2_func_1(s880r2Instance*i);

void s880r2_call_cb(s880r2Instance*i,U32 l0);

void s880r2Instantiate(s880r2Instance* instance, void* resolve(const char* module, const char* name));

void s880r2FreeInstance(s880r2Instance* instance);

#endif /* s880r2_H */

