#ifndef s859r2_H
#define s859r2_H

#include "w2c2_base.h"

typedef struct s859r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s859r2Instance;

void f0(s859r2Instance*);

void f1(s859r2Instance*);

U32 f2(s859r2Instance*);

void f3(s859r2Instance*,U32);

U32 f4(s859r2Instance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s859r2Instance*,U32,U32,U32,U32,U32);

void f6(s859r2Instance*,U32);

void f7(s859r2Instance*,U32,U32,U32);

void f8(s859r2Instance*,U32,U32,U32);

void s859r2____wasm_call_ctors(s859r2Instance*i);

void s859r2____wasm_apply_data_relocs(s859r2Instance*i);

U32 s859r2_func_1(s859r2Instance*i);

void s859r2_call_cb(s859r2Instance*i,U32 l0);

void s859r2Instantiate(s859r2Instance* instance, void* resolve(const char* module, const char* name));

void s859r2FreeInstance(s859r2Instance* instance);

#endif /* s859r2_H */

