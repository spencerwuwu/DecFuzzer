#ifndef s336r2_H
#define s336r2_H

#include "w2c2_base.h"

typedef struct s336r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s336r2Instance;

void f0(s336r2Instance*);

void f1(s336r2Instance*);

U32 f2(s336r2Instance*);

void f3(s336r2Instance*,U32);

U32 f4(s336r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s336r2Instance*,U32,U32,U32,U32,U32);

void f6(s336r2Instance*,U32);

void f7(s336r2Instance*,U32,U32,U32);

void f8(s336r2Instance*,U32,U32,U32);

void s336r2____wasm_call_ctors(s336r2Instance*i);

void s336r2____wasm_apply_data_relocs(s336r2Instance*i);

U32 s336r2_func_1(s336r2Instance*i);

void s336r2_call_cb(s336r2Instance*i,U32 l0);

void s336r2Instantiate(s336r2Instance* instance, void* resolve(const char* module, const char* name));

void s336r2FreeInstance(s336r2Instance* instance);

#endif /* s336r2_H */

