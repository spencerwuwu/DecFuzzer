#ifndef s403r2_H
#define s403r2_H

#include "w2c2_base.h"

typedef struct s403r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s403r2Instance;

void f0(s403r2Instance*);

void f1(s403r2Instance*);

U32 f2(s403r2Instance*);

void f3(s403r2Instance*,U32);

U32 f4(s403r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s403r2Instance*,U32,U32,U32,U32,U32);

void f6(s403r2Instance*,U32);

void f7(s403r2Instance*,U32,U32,U32);

void f8(s403r2Instance*,U32,U32,U32);

void s403r2____wasm_call_ctors(s403r2Instance*i);

void s403r2____wasm_apply_data_relocs(s403r2Instance*i);

U32 s403r2_func_1(s403r2Instance*i);

void s403r2_call_cb(s403r2Instance*i,U32 l0);

void s403r2Instantiate(s403r2Instance* instance, void* resolve(const char* module, const char* name));

void s403r2FreeInstance(s403r2Instance* instance);

#endif /* s403r2_H */

