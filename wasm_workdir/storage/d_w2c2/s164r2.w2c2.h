#ifndef s164r2_H
#define s164r2_H

#include "w2c2_base.h"

typedef struct s164r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s164r2Instance;

void f0(s164r2Instance*);

void f1(s164r2Instance*);

U32 f2(s164r2Instance*);

void f3(s164r2Instance*,U32);

U32 f4(s164r2Instance*,U32,U32,U32,U32,U32);

void f5(s164r2Instance*,U32,U32,U32,U32,U32);

void f6(s164r2Instance*,U32);

void f7(s164r2Instance*,U32,U32,U32);

void f8(s164r2Instance*,U32,U32,U32);

void s164r2____wasm_call_ctors(s164r2Instance*i);

void s164r2____wasm_apply_data_relocs(s164r2Instance*i);

U32 s164r2_func_1(s164r2Instance*i);

void s164r2_call_cb(s164r2Instance*i,U32 l0);

void s164r2Instantiate(s164r2Instance* instance, void* resolve(const char* module, const char* name));

void s164r2FreeInstance(s164r2Instance* instance);

#endif /* s164r2_H */

