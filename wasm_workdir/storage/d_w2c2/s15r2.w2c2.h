#ifndef s15r2_H
#define s15r2_H

#include "w2c2_base.h"

typedef struct s15r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s15r2Instance;

void f0(s15r2Instance*);

void f1(s15r2Instance*);

U32 f2(s15r2Instance*);

void f3(s15r2Instance*,U32);

U32 f4(s15r2Instance*,U32,U32,U32,U32,U32);

void f5(s15r2Instance*,U32,U32,U32,U32,U32);

void f6(s15r2Instance*,U32);

void f7(s15r2Instance*,U32,U32,U32);

void f8(s15r2Instance*,U32,U32,U32);

void s15r2____wasm_call_ctors(s15r2Instance*i);

void s15r2____wasm_apply_data_relocs(s15r2Instance*i);

U32 s15r2_func_1(s15r2Instance*i);

void s15r2_call_cb(s15r2Instance*i,U32 l0);

void s15r2Instantiate(s15r2Instance* instance, void* resolve(const char* module, const char* name));

void s15r2FreeInstance(s15r2Instance* instance);

#endif /* s15r2_H */

