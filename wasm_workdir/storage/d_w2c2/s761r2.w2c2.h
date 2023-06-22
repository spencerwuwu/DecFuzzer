#ifndef s761r2_H
#define s761r2_H

#include "w2c2_base.h"

typedef struct s761r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s761r2Instance;

void f0(s761r2Instance*);

void f1(s761r2Instance*);

U32 f2(s761r2Instance*);

void f3(s761r2Instance*,U32);

U32 f4(s761r2Instance*,U32,U32,U32,U32,U32);

void f5(s761r2Instance*,U32,U32,U32,U32,U32);

void f6(s761r2Instance*,U32);

void f7(s761r2Instance*,U32,U32,U32);

void f8(s761r2Instance*,U32,U32,U32);

void s761r2____wasm_call_ctors(s761r2Instance*i);

void s761r2____wasm_apply_data_relocs(s761r2Instance*i);

U32 s761r2_func_1(s761r2Instance*i);

void s761r2_call_cb(s761r2Instance*i,U32 l0);

void s761r2Instantiate(s761r2Instance* instance, void* resolve(const char* module, const char* name));

void s761r2FreeInstance(s761r2Instance* instance);

#endif /* s761r2_H */

