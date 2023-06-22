#ifndef s329r2_H
#define s329r2_H

#include "w2c2_base.h"

typedef struct s329r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s329r2Instance;

void f0(s329r2Instance*);

void f1(s329r2Instance*);

U32 f2(s329r2Instance*);

void f3(s329r2Instance*,U32);

U32 f4(s329r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s329r2Instance*,U32,U32,U32,U32,U32);

void f6(s329r2Instance*,U32);

void f7(s329r2Instance*,U32,U32,U32);

void f8(s329r2Instance*,U32,U32,U32);

void s329r2____wasm_call_ctors(s329r2Instance*i);

void s329r2____wasm_apply_data_relocs(s329r2Instance*i);

U32 s329r2_func_1(s329r2Instance*i);

void s329r2_call_cb(s329r2Instance*i,U32 l0);

void s329r2Instantiate(s329r2Instance* instance, void* resolve(const char* module, const char* name));

void s329r2FreeInstance(s329r2Instance* instance);

#endif /* s329r2_H */

