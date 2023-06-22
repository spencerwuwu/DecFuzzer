#ifndef s670r2_H
#define s670r2_H

#include "w2c2_base.h"

typedef struct s670r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s670r2Instance;

void f0(s670r2Instance*);

void f1(s670r2Instance*);

U32 f2(s670r2Instance*);

void f3(s670r2Instance*,U32);

U32 f4(s670r2Instance*,U32,U32,U32);

void f5(s670r2Instance*,U32,U32,U32,U32,U32);

void f6(s670r2Instance*,U32);

void f7(s670r2Instance*,U32,U32,U32);

void f8(s670r2Instance*,U32,U32,U32);

void s670r2____wasm_call_ctors(s670r2Instance*i);

void s670r2____wasm_apply_data_relocs(s670r2Instance*i);

U32 s670r2_func_1(s670r2Instance*i);

void s670r2_call_cb(s670r2Instance*i,U32 l0);

void s670r2Instantiate(s670r2Instance* instance, void* resolve(const char* module, const char* name));

void s670r2FreeInstance(s670r2Instance* instance);

#endif /* s670r2_H */

