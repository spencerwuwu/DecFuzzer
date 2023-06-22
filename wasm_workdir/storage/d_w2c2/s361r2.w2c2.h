#ifndef s361r2_H
#define s361r2_H

#include "w2c2_base.h"

typedef struct s361r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s361r2Instance;

void f0(s361r2Instance*);

void f1(s361r2Instance*);

U32 f2(s361r2Instance*);

void f3(s361r2Instance*,U32);

U32 f4(s361r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s361r2Instance*,U32,U32,U32,U32,U32);

void f6(s361r2Instance*,U32);

void f7(s361r2Instance*,U32,U32,U32);

void f8(s361r2Instance*,U32,U32,U32);

void s361r2____wasm_call_ctors(s361r2Instance*i);

void s361r2____wasm_apply_data_relocs(s361r2Instance*i);

U32 s361r2_func_1(s361r2Instance*i);

void s361r2_call_cb(s361r2Instance*i,U32 l0);

void s361r2Instantiate(s361r2Instance* instance, void* resolve(const char* module, const char* name));

void s361r2FreeInstance(s361r2Instance* instance);

#endif /* s361r2_H */

