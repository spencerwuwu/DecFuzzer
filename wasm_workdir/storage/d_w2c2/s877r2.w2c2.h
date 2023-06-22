#ifndef s877r2_H
#define s877r2_H

#include "w2c2_base.h"

typedef struct s877r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s877r2Instance;

void f0(s877r2Instance*);

void f1(s877r2Instance*);

U32 f2(s877r2Instance*);

void f3(s877r2Instance*,U32);

U32 f4(s877r2Instance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s877r2Instance*,U32,U32,U32,U32,U32);

void f6(s877r2Instance*,U32);

void f7(s877r2Instance*,U32,U32,U32);

void f8(s877r2Instance*,U32,U32,U32);

void s877r2____wasm_call_ctors(s877r2Instance*i);

void s877r2____wasm_apply_data_relocs(s877r2Instance*i);

U32 s877r2_func_1(s877r2Instance*i);

void s877r2_call_cb(s877r2Instance*i,U32 l0);

void s877r2Instantiate(s877r2Instance* instance, void* resolve(const char* module, const char* name));

void s877r2FreeInstance(s877r2Instance* instance);

#endif /* s877r2_H */

