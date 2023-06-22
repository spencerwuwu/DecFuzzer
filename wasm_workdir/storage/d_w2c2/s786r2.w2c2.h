#ifndef s786r2_H
#define s786r2_H

#include "w2c2_base.h"

typedef struct s786r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s786r2Instance;

void f0(s786r2Instance*);

void f1(s786r2Instance*);

U32 f2(s786r2Instance*);

void f3(s786r2Instance*,U32);

U32 f4(s786r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s786r2Instance*,U32,U32,U32,U32,U32);

void f6(s786r2Instance*,U32);

void f7(s786r2Instance*,U32,U32,U32);

void f8(s786r2Instance*,U32,U32,U32);

void s786r2____wasm_call_ctors(s786r2Instance*i);

void s786r2____wasm_apply_data_relocs(s786r2Instance*i);

U32 s786r2_func_1(s786r2Instance*i);

void s786r2_call_cb(s786r2Instance*i,U32 l0);

void s786r2Instantiate(s786r2Instance* instance, void* resolve(const char* module, const char* name));

void s786r2FreeInstance(s786r2Instance* instance);

#endif /* s786r2_H */

