#ifndef s344r2_H
#define s344r2_H

#include "w2c2_base.h"

typedef struct s344r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s344r2Instance;

void f0(s344r2Instance*);

void f1(s344r2Instance*);

U32 f2(s344r2Instance*);

void f3(s344r2Instance*,U32);

U32 f4(s344r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s344r2Instance*,U32,U32,U32,U32,U32);

void f6(s344r2Instance*,U32);

void f7(s344r2Instance*,U32,U32,U32);

void f8(s344r2Instance*,U32,U32,U32);

void s344r2____wasm_call_ctors(s344r2Instance*i);

void s344r2____wasm_apply_data_relocs(s344r2Instance*i);

U32 s344r2_func_1(s344r2Instance*i);

void s344r2_call_cb(s344r2Instance*i,U32 l0);

void s344r2Instantiate(s344r2Instance* instance, void* resolve(const char* module, const char* name));

void s344r2FreeInstance(s344r2Instance* instance);

#endif /* s344r2_H */

