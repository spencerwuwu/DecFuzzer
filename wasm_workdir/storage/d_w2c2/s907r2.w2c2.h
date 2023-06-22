#ifndef s907r2_H
#define s907r2_H

#include "w2c2_base.h"

typedef struct s907r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s907r2Instance;

void f0(s907r2Instance*);

void f1(s907r2Instance*);

U32 f2(s907r2Instance*);

void f3(s907r2Instance*,U32);

U32 f4(s907r2Instance*,U32,U32,U32,U32,U32);

void f5(s907r2Instance*,U32,U32,U32,U32,U32);

void f6(s907r2Instance*,U32);

void f7(s907r2Instance*,U32,U32,U32);

void f8(s907r2Instance*,U32,U32,U32);

void s907r2____wasm_call_ctors(s907r2Instance*i);

void s907r2____wasm_apply_data_relocs(s907r2Instance*i);

U32 s907r2_func_1(s907r2Instance*i);

void s907r2_call_cb(s907r2Instance*i,U32 l0);

void s907r2Instantiate(s907r2Instance* instance, void* resolve(const char* module, const char* name));

void s907r2FreeInstance(s907r2Instance* instance);

#endif /* s907r2_H */

