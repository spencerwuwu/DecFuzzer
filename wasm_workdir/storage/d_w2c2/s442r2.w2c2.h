#ifndef s442r2_H
#define s442r2_H

#include "w2c2_base.h"

typedef struct s442r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s442r2Instance;

void f0(s442r2Instance*);

void f1(s442r2Instance*);

U32 f2(s442r2Instance*);

void f3(s442r2Instance*,U32);

U32 f4(s442r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s442r2Instance*,U32,U32,U32,U32,U32);

void f6(s442r2Instance*,U32);

void f7(s442r2Instance*,U32,U32,U32);

void f8(s442r2Instance*,U32,U32,U32);

void s442r2____wasm_call_ctors(s442r2Instance*i);

void s442r2____wasm_apply_data_relocs(s442r2Instance*i);

U32 s442r2_func_1(s442r2Instance*i);

void s442r2_call_cb(s442r2Instance*i,U32 l0);

void s442r2Instantiate(s442r2Instance* instance, void* resolve(const char* module, const char* name));

void s442r2FreeInstance(s442r2Instance* instance);

#endif /* s442r2_H */

