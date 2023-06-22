#ifndef s294r2_H
#define s294r2_H

#include "w2c2_base.h"

typedef struct s294r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s294r2Instance;

void f0(s294r2Instance*);

void f1(s294r2Instance*);

U32 f2(s294r2Instance*);

void f3(s294r2Instance*,U32);

U32 f4(s294r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s294r2Instance*,U32,U32,U32,U32,U32);

void f6(s294r2Instance*,U32);

void f7(s294r2Instance*,U32,U32,U32);

void f8(s294r2Instance*,U32,U32,U32);

void s294r2____wasm_call_ctors(s294r2Instance*i);

void s294r2____wasm_apply_data_relocs(s294r2Instance*i);

U32 s294r2_func_1(s294r2Instance*i);

void s294r2_call_cb(s294r2Instance*i,U32 l0);

void s294r2Instantiate(s294r2Instance* instance, void* resolve(const char* module, const char* name));

void s294r2FreeInstance(s294r2Instance* instance);

#endif /* s294r2_H */

