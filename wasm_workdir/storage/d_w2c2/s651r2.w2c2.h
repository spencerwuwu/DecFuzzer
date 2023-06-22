#ifndef s651r2_H
#define s651r2_H

#include "w2c2_base.h"

typedef struct s651r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s651r2Instance;

void f0(s651r2Instance*);

void f1(s651r2Instance*);

U32 f2(s651r2Instance*);

void f3(s651r2Instance*,U32);

U32 f4(s651r2Instance*,U32,U32,U32);

void f5(s651r2Instance*,U32,U32,U32,U32,U32);

void f6(s651r2Instance*,U32);

void f7(s651r2Instance*,U32,U32,U32);

void f8(s651r2Instance*,U32,U32,U32);

void s651r2____wasm_call_ctors(s651r2Instance*i);

void s651r2____wasm_apply_data_relocs(s651r2Instance*i);

U32 s651r2_func_1(s651r2Instance*i);

void s651r2_call_cb(s651r2Instance*i,U32 l0);

void s651r2Instantiate(s651r2Instance* instance, void* resolve(const char* module, const char* name));

void s651r2FreeInstance(s651r2Instance* instance);

#endif /* s651r2_H */

