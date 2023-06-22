#ifndef s683r2_H
#define s683r2_H

#include "w2c2_base.h"

typedef struct s683r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s683r2Instance;

void f0(s683r2Instance*);

void f1(s683r2Instance*);

U32 f2(s683r2Instance*);

void f3(s683r2Instance*,U32);

U32 f4(s683r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s683r2Instance*,U32,U32,U32,U32,U32);

void f6(s683r2Instance*,U32);

void f7(s683r2Instance*,U32,U32,U32);

void f8(s683r2Instance*,U32,U32,U32);

void s683r2____wasm_call_ctors(s683r2Instance*i);

void s683r2____wasm_apply_data_relocs(s683r2Instance*i);

U32 s683r2_func_1(s683r2Instance*i);

void s683r2_call_cb(s683r2Instance*i,U32 l0);

void s683r2Instantiate(s683r2Instance* instance, void* resolve(const char* module, const char* name));

void s683r2FreeInstance(s683r2Instance* instance);

#endif /* s683r2_H */

