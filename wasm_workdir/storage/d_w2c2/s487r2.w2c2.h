#ifndef s487r2_H
#define s487r2_H

#include "w2c2_base.h"

typedef struct s487r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s487r2Instance;

void f0(s487r2Instance*);

void f1(s487r2Instance*);

U32 f2(s487r2Instance*);

void f3(s487r2Instance*,U32);

U32 f4(s487r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s487r2Instance*,U32,U32,U32,U32,U32);

void f6(s487r2Instance*,U32);

void f7(s487r2Instance*,U32,U32,U32);

void f8(s487r2Instance*,U32,U32,U32);

void s487r2____wasm_call_ctors(s487r2Instance*i);

void s487r2____wasm_apply_data_relocs(s487r2Instance*i);

U32 s487r2_func_1(s487r2Instance*i);

void s487r2_call_cb(s487r2Instance*i,U32 l0);

void s487r2Instantiate(s487r2Instance* instance, void* resolve(const char* module, const char* name));

void s487r2FreeInstance(s487r2Instance* instance);

#endif /* s487r2_H */

