#ifndef s527r2_H
#define s527r2_H

#include "w2c2_base.h"

typedef struct s527r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s527r2Instance;

void f0(s527r2Instance*);

void f1(s527r2Instance*);

U32 f2(s527r2Instance*);

void f3(s527r2Instance*,U32);

U32 f4(s527r2Instance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s527r2Instance*,U32,U32,U32,U32,U32);

void f6(s527r2Instance*,U32);

void f7(s527r2Instance*,U32,U32,U32);

void f8(s527r2Instance*,U32,U32,U32);

void s527r2____wasm_call_ctors(s527r2Instance*i);

void s527r2____wasm_apply_data_relocs(s527r2Instance*i);

U32 s527r2_func_1(s527r2Instance*i);

void s527r2_call_cb(s527r2Instance*i,U32 l0);

void s527r2Instantiate(s527r2Instance* instance, void* resolve(const char* module, const char* name));

void s527r2FreeInstance(s527r2Instance* instance);

#endif /* s527r2_H */

