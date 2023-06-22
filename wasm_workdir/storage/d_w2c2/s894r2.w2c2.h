#ifndef s894r2_H
#define s894r2_H

#include "w2c2_base.h"

typedef struct s894r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s894r2Instance;

void f0(s894r2Instance*);

void f1(s894r2Instance*);

U32 f2(s894r2Instance*);

void f3(s894r2Instance*,U32);

U32 f4(s894r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s894r2Instance*,U32,U32,U32,U32,U32);

void f6(s894r2Instance*,U32);

void f7(s894r2Instance*,U32,U32,U32);

void f8(s894r2Instance*,U32,U32,U32);

void s894r2____wasm_call_ctors(s894r2Instance*i);

void s894r2____wasm_apply_data_relocs(s894r2Instance*i);

U32 s894r2_func_1(s894r2Instance*i);

void s894r2_call_cb(s894r2Instance*i,U32 l0);

void s894r2Instantiate(s894r2Instance* instance, void* resolve(const char* module, const char* name));

void s894r2FreeInstance(s894r2Instance* instance);

#endif /* s894r2_H */

