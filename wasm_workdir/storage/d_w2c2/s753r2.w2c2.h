#ifndef s753r2_H
#define s753r2_H

#include "w2c2_base.h"

typedef struct s753r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s753r2Instance;

void f0(s753r2Instance*);

void f1(s753r2Instance*);

U32 f2(s753r2Instance*);

void f3(s753r2Instance*,U32);

U32 f4(s753r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s753r2Instance*,U32,U32,U32,U32,U32);

void f6(s753r2Instance*,U32);

void f7(s753r2Instance*,U32,U32,U32);

void f8(s753r2Instance*,U32,U32,U32);

void s753r2____wasm_call_ctors(s753r2Instance*i);

void s753r2____wasm_apply_data_relocs(s753r2Instance*i);

U32 s753r2_func_1(s753r2Instance*i);

void s753r2_call_cb(s753r2Instance*i,U32 l0);

void s753r2Instantiate(s753r2Instance* instance, void* resolve(const char* module, const char* name));

void s753r2FreeInstance(s753r2Instance* instance);

#endif /* s753r2_H */

