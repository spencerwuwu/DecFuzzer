#ifndef s735r2_H
#define s735r2_H

#include "w2c2_base.h"

typedef struct s735r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s735r2Instance;

void f0(s735r2Instance*);

void f1(s735r2Instance*);

U32 f2(s735r2Instance*);

void f3(s735r2Instance*,U32);

U32 f4(s735r2Instance*,U32,U32,U32,U32,U32,U32);

void f5(s735r2Instance*,U32,U32,U32,U32,U32);

void f6(s735r2Instance*,U32);

void f7(s735r2Instance*,U32,U32,U32);

void f8(s735r2Instance*,U32,U32,U32);

void s735r2____wasm_call_ctors(s735r2Instance*i);

void s735r2____wasm_apply_data_relocs(s735r2Instance*i);

U32 s735r2_func_1(s735r2Instance*i);

void s735r2_call_cb(s735r2Instance*i,U32 l0);

void s735r2Instantiate(s735r2Instance* instance, void* resolve(const char* module, const char* name));

void s735r2FreeInstance(s735r2Instance* instance);

#endif /* s735r2_H */

