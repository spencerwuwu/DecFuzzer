#ifndef s728r2_H
#define s728r2_H

#include "w2c2_base.h"

typedef struct s728r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s728r2Instance;

void f0(s728r2Instance*);

void f1(s728r2Instance*);

U32 f2(s728r2Instance*);

void f3(s728r2Instance*,U32);

U32 f4(s728r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s728r2Instance*,U32,U32,U32,U32,U32);

void f6(s728r2Instance*,U32);

void f7(s728r2Instance*,U32,U32,U32);

void f8(s728r2Instance*,U32,U32,U32);

void s728r2____wasm_call_ctors(s728r2Instance*i);

void s728r2____wasm_apply_data_relocs(s728r2Instance*i);

U32 s728r2_func_1(s728r2Instance*i);

void s728r2_call_cb(s728r2Instance*i,U32 l0);

void s728r2Instantiate(s728r2Instance* instance, void* resolve(const char* module, const char* name));

void s728r2FreeInstance(s728r2Instance* instance);

#endif /* s728r2_H */

