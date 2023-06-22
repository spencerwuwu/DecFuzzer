#ifndef s554r2_H
#define s554r2_H

#include "w2c2_base.h"

typedef struct s554r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s554r2Instance;

void f0(s554r2Instance*);

void f1(s554r2Instance*);

U32 f2(s554r2Instance*);

void f3(s554r2Instance*,U32);

U32 f4(s554r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s554r2Instance*,U32,U32,U32,U32,U32);

void f6(s554r2Instance*,U32);

void f7(s554r2Instance*,U32,U32,U32);

void f8(s554r2Instance*,U32,U32,U32);

void s554r2____wasm_call_ctors(s554r2Instance*i);

void s554r2____wasm_apply_data_relocs(s554r2Instance*i);

U32 s554r2_func_1(s554r2Instance*i);

void s554r2_call_cb(s554r2Instance*i,U32 l0);

void s554r2Instantiate(s554r2Instance* instance, void* resolve(const char* module, const char* name));

void s554r2FreeInstance(s554r2Instance* instance);

#endif /* s554r2_H */

