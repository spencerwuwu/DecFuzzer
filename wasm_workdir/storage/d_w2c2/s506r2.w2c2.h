#ifndef s506r2_H
#define s506r2_H

#include "w2c2_base.h"

typedef struct s506r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s506r2Instance;

void f0(s506r2Instance*);

void f1(s506r2Instance*);

U32 f2(s506r2Instance*);

void f3(s506r2Instance*,U32);

U32 f4(s506r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s506r2Instance*,U32,U32,U32,U32,U32);

void f6(s506r2Instance*,U32);

void f7(s506r2Instance*,U32,U32,U32);

void f8(s506r2Instance*,U32,U32,U32);

void s506r2____wasm_call_ctors(s506r2Instance*i);

void s506r2____wasm_apply_data_relocs(s506r2Instance*i);

U32 s506r2_func_1(s506r2Instance*i);

void s506r2_call_cb(s506r2Instance*i,U32 l0);

void s506r2Instantiate(s506r2Instance* instance, void* resolve(const char* module, const char* name));

void s506r2FreeInstance(s506r2Instance* instance);

#endif /* s506r2_H */

