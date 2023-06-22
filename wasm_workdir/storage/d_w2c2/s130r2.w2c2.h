#ifndef s130r2_H
#define s130r2_H

#include "w2c2_base.h"

typedef struct s130r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s130r2Instance;

void f0(s130r2Instance*);

void f1(s130r2Instance*);

U32 f2(s130r2Instance*);

void f3(s130r2Instance*,U32);

U32 f4(s130r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s130r2Instance*,U32,U32,U32,U32,U32);

void f6(s130r2Instance*,U32);

void f7(s130r2Instance*,U32,U32,U32);

void f8(s130r2Instance*,U32,U32,U32);

void s130r2____wasm_call_ctors(s130r2Instance*i);

void s130r2____wasm_apply_data_relocs(s130r2Instance*i);

U32 s130r2_func_1(s130r2Instance*i);

void s130r2_call_cb(s130r2Instance*i,U32 l0);

void s130r2Instantiate(s130r2Instance* instance, void* resolve(const char* module, const char* name));

void s130r2FreeInstance(s130r2Instance* instance);

#endif /* s130r2_H */

