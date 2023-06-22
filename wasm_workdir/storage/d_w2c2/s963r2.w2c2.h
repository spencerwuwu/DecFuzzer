#ifndef s963r2_H
#define s963r2_H

#include "w2c2_base.h"

typedef struct s963r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s963r2Instance;

void f0(s963r2Instance*);

void f1(s963r2Instance*);

U32 f2(s963r2Instance*);

void f3(s963r2Instance*,U32);

U32 f4(s963r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s963r2Instance*,U32,U32,U32,U32,U32);

void f6(s963r2Instance*,U32);

void f7(s963r2Instance*,U32,U32,U32);

void f8(s963r2Instance*,U32,U32,U32);

void s963r2____wasm_call_ctors(s963r2Instance*i);

void s963r2____wasm_apply_data_relocs(s963r2Instance*i);

U32 s963r2_func_1(s963r2Instance*i);

void s963r2_call_cb(s963r2Instance*i,U32 l0);

void s963r2Instantiate(s963r2Instance* instance, void* resolve(const char* module, const char* name));

void s963r2FreeInstance(s963r2Instance* instance);

#endif /* s963r2_H */

