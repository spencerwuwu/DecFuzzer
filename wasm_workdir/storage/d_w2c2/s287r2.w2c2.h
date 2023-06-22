#ifndef s287r2_H
#define s287r2_H

#include "w2c2_base.h"

typedef struct s287r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s287r2Instance;

void f0(s287r2Instance*);

void f1(s287r2Instance*);

U32 f2(s287r2Instance*);

void f3(s287r2Instance*,U32);

U32 f4(s287r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s287r2Instance*,U32,U32,U32,U32,U32);

void f6(s287r2Instance*,U32);

void f7(s287r2Instance*,U32,U32,U32);

void f8(s287r2Instance*,U32,U32,U32);

void s287r2____wasm_call_ctors(s287r2Instance*i);

void s287r2____wasm_apply_data_relocs(s287r2Instance*i);

U32 s287r2_func_1(s287r2Instance*i);

void s287r2_call_cb(s287r2Instance*i,U32 l0);

void s287r2Instantiate(s287r2Instance* instance, void* resolve(const char* module, const char* name));

void s287r2FreeInstance(s287r2Instance* instance);

#endif /* s287r2_H */

