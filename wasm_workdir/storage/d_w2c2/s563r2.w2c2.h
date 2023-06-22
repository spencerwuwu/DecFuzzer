#ifndef s563r2_H
#define s563r2_H

#include "w2c2_base.h"

typedef struct s563r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s563r2Instance;

void f0(s563r2Instance*);

void f1(s563r2Instance*);

U32 f2(s563r2Instance*);

void f3(s563r2Instance*,U32);

U32 f4(s563r2Instance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s563r2Instance*,U32,U32,U32,U32,U32);

void f6(s563r2Instance*,U32);

void f7(s563r2Instance*,U32,U32,U32);

void f8(s563r2Instance*,U32,U32,U32);

void s563r2____wasm_call_ctors(s563r2Instance*i);

void s563r2____wasm_apply_data_relocs(s563r2Instance*i);

U32 s563r2_func_1(s563r2Instance*i);

void s563r2_call_cb(s563r2Instance*i,U32 l0);

void s563r2Instantiate(s563r2Instance* instance, void* resolve(const char* module, const char* name));

void s563r2FreeInstance(s563r2Instance* instance);

#endif /* s563r2_H */

