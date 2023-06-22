#ifndef s520r2_H
#define s520r2_H

#include "w2c2_base.h"

typedef struct s520r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s520r2Instance;

void f0(s520r2Instance*);

void f1(s520r2Instance*);

U32 f2(s520r2Instance*);

void f3(s520r2Instance*,U32);

U32 f4(s520r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s520r2Instance*,U32,U32,U32,U32,U32);

void f6(s520r2Instance*,U32);

void f7(s520r2Instance*,U32,U32,U32);

void f8(s520r2Instance*,U32,U32,U32);

void s520r2____wasm_call_ctors(s520r2Instance*i);

void s520r2____wasm_apply_data_relocs(s520r2Instance*i);

U32 s520r2_func_1(s520r2Instance*i);

void s520r2_call_cb(s520r2Instance*i,U32 l0);

void s520r2Instantiate(s520r2Instance* instance, void* resolve(const char* module, const char* name));

void s520r2FreeInstance(s520r2Instance* instance);

#endif /* s520r2_H */

