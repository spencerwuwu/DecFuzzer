#ifndef s337r2_H
#define s337r2_H

#include "w2c2_base.h"

typedef struct s337r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s337r2Instance;

void f0(s337r2Instance*);

void f1(s337r2Instance*);

U32 f2(s337r2Instance*);

void f3(s337r2Instance*,U32);

U32 f4(s337r2Instance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s337r2Instance*,U32,U32,U32,U32,U32);

void f6(s337r2Instance*,U32);

void f7(s337r2Instance*,U32,U32,U32);

void f8(s337r2Instance*,U32,U32,U32);

void s337r2____wasm_call_ctors(s337r2Instance*i);

void s337r2____wasm_apply_data_relocs(s337r2Instance*i);

U32 s337r2_func_1(s337r2Instance*i);

void s337r2_call_cb(s337r2Instance*i,U32 l0);

void s337r2Instantiate(s337r2Instance* instance, void* resolve(const char* module, const char* name));

void s337r2FreeInstance(s337r2Instance* instance);

#endif /* s337r2_H */

