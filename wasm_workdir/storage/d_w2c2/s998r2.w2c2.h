#ifndef s998r2_H
#define s998r2_H

#include "w2c2_base.h"

typedef struct s998r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s998r2Instance;

void f0(s998r2Instance*);

void f1(s998r2Instance*);

U32 f2(s998r2Instance*);

void f3(s998r2Instance*,U32);

U32 f4(s998r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s998r2Instance*,U32,U32,U32,U32,U32);

void f6(s998r2Instance*,U32);

void f7(s998r2Instance*,U32,U32,U32);

void f8(s998r2Instance*,U32,U32,U32);

void s998r2____wasm_call_ctors(s998r2Instance*i);

void s998r2____wasm_apply_data_relocs(s998r2Instance*i);

U32 s998r2_func_1(s998r2Instance*i);

void s998r2_call_cb(s998r2Instance*i,U32 l0);

void s998r2Instantiate(s998r2Instance* instance, void* resolve(const char* module, const char* name));

void s998r2FreeInstance(s998r2Instance* instance);

#endif /* s998r2_H */

