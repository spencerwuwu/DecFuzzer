#ifndef s942r2_H
#define s942r2_H

#include "w2c2_base.h"

typedef struct s942r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s942r2Instance;

void f0(s942r2Instance*);

void f1(s942r2Instance*);

U32 f2(s942r2Instance*);

void f3(s942r2Instance*,U32);

U32 f4(s942r2Instance*,U32,U32,U32,U32,U32,U32);

void f5(s942r2Instance*,U32,U32,U32,U32,U32);

void f6(s942r2Instance*,U32);

void f7(s942r2Instance*,U32,U32,U32);

void f8(s942r2Instance*,U32,U32,U32);

void s942r2____wasm_call_ctors(s942r2Instance*i);

void s942r2____wasm_apply_data_relocs(s942r2Instance*i);

U32 s942r2_func_1(s942r2Instance*i);

void s942r2_call_cb(s942r2Instance*i,U32 l0);

void s942r2Instantiate(s942r2Instance* instance, void* resolve(const char* module, const char* name));

void s942r2FreeInstance(s942r2Instance* instance);

#endif /* s942r2_H */

