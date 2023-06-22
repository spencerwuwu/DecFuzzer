#ifndef s838r2_H
#define s838r2_H

#include "w2c2_base.h"

typedef struct s838r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s838r2Instance;

void f0(s838r2Instance*);

void f1(s838r2Instance*);

U32 f2(s838r2Instance*);

void f3(s838r2Instance*,U32);

U32 f4(s838r2Instance*,U32,U32,U32,U32,U32,U32);

void f5(s838r2Instance*,U32,U32,U32,U32,U32);

void f6(s838r2Instance*,U32);

void f7(s838r2Instance*,U32,U32,U32);

void f8(s838r2Instance*,U32,U32,U32);

void s838r2____wasm_call_ctors(s838r2Instance*i);

void s838r2____wasm_apply_data_relocs(s838r2Instance*i);

U32 s838r2_func_1(s838r2Instance*i);

void s838r2_call_cb(s838r2Instance*i,U32 l0);

void s838r2Instantiate(s838r2Instance* instance, void* resolve(const char* module, const char* name));

void s838r2FreeInstance(s838r2Instance* instance);

#endif /* s838r2_H */

