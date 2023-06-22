#ifndef s387r2_H
#define s387r2_H

#include "w2c2_base.h"

typedef struct s387r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s387r2Instance;

void f0(s387r2Instance*);

void f1(s387r2Instance*);

U32 f2(s387r2Instance*);

void f3(s387r2Instance*,U32);

U32 f4(s387r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s387r2Instance*,U32,U32,U32,U32,U32);

void f6(s387r2Instance*,U32);

void f7(s387r2Instance*,U32,U32,U32);

void f8(s387r2Instance*,U32,U32,U32);

void s387r2____wasm_call_ctors(s387r2Instance*i);

void s387r2____wasm_apply_data_relocs(s387r2Instance*i);

U32 s387r2_func_1(s387r2Instance*i);

void s387r2_call_cb(s387r2Instance*i,U32 l0);

void s387r2Instantiate(s387r2Instance* instance, void* resolve(const char* module, const char* name));

void s387r2FreeInstance(s387r2Instance* instance);

#endif /* s387r2_H */

