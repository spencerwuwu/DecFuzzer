#ifndef s184r2_H
#define s184r2_H

#include "w2c2_base.h"

typedef struct s184r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s184r2Instance;

void f0(s184r2Instance*);

void f1(s184r2Instance*);

U32 f2(s184r2Instance*);

void f3(s184r2Instance*,U32);

U32 f4(s184r2Instance*,U32,U32,U32);

void f5(s184r2Instance*,U32,U32,U32,U32,U32);

void f6(s184r2Instance*,U32);

void f7(s184r2Instance*,U32,U32,U32);

void f8(s184r2Instance*,U32,U32,U32);

void s184r2____wasm_call_ctors(s184r2Instance*i);

void s184r2____wasm_apply_data_relocs(s184r2Instance*i);

U32 s184r2_func_1(s184r2Instance*i);

void s184r2_call_cb(s184r2Instance*i,U32 l0);

void s184r2Instantiate(s184r2Instance* instance, void* resolve(const char* module, const char* name));

void s184r2FreeInstance(s184r2Instance* instance);

#endif /* s184r2_H */

