#ifndef s137r2_H
#define s137r2_H

#include "w2c2_base.h"

typedef struct s137r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s137r2Instance;

void f0(s137r2Instance*);

void f1(s137r2Instance*);

U32 f2(s137r2Instance*);

void f3(s137r2Instance*,U32);

U32 f4(s137r2Instance*,U32,U32,U32);

void f5(s137r2Instance*,U32,U32,U32,U32,U32);

void f6(s137r2Instance*,U32);

void f7(s137r2Instance*,U32,U32,U32);

void f8(s137r2Instance*,U32,U32,U32);

void s137r2____wasm_call_ctors(s137r2Instance*i);

void s137r2____wasm_apply_data_relocs(s137r2Instance*i);

U32 s137r2_func_1(s137r2Instance*i);

void s137r2_call_cb(s137r2Instance*i,U32 l0);

void s137r2Instantiate(s137r2Instance* instance, void* resolve(const char* module, const char* name));

void s137r2FreeInstance(s137r2Instance* instance);

#endif /* s137r2_H */

