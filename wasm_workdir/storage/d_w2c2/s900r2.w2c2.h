#ifndef s900r2_H
#define s900r2_H

#include "w2c2_base.h"

typedef struct s900r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s900r2Instance;

void f0(s900r2Instance*);

void f1(s900r2Instance*);

U32 f2(s900r2Instance*);

void f3(s900r2Instance*,U32);

U32 f4(s900r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s900r2Instance*,U32,U32,U32,U32,U32);

void f6(s900r2Instance*,U32);

void f7(s900r2Instance*,U32,U32,U32);

void f8(s900r2Instance*,U32,U32,U32);

void s900r2____wasm_call_ctors(s900r2Instance*i);

void s900r2____wasm_apply_data_relocs(s900r2Instance*i);

U32 s900r2_func_1(s900r2Instance*i);

void s900r2_call_cb(s900r2Instance*i,U32 l0);

void s900r2Instantiate(s900r2Instance* instance, void* resolve(const char* module, const char* name));

void s900r2FreeInstance(s900r2Instance* instance);

#endif /* s900r2_H */

