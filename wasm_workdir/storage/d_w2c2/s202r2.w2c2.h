#ifndef s202r2_H
#define s202r2_H

#include "w2c2_base.h"

typedef struct s202r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s202r2Instance;

void f0(s202r2Instance*);

void f1(s202r2Instance*);

U32 f2(s202r2Instance*);

void f3(s202r2Instance*,U32);

U32 f4(s202r2Instance*,U32,U32,U32);

void f5(s202r2Instance*,U32,U32,U32,U32,U32);

void f6(s202r2Instance*,U32);

void f7(s202r2Instance*,U32,U32,U32);

void f8(s202r2Instance*,U32,U32,U32);

void s202r2____wasm_call_ctors(s202r2Instance*i);

void s202r2____wasm_apply_data_relocs(s202r2Instance*i);

U32 s202r2_func_1(s202r2Instance*i);

void s202r2_call_cb(s202r2Instance*i,U32 l0);

void s202r2Instantiate(s202r2Instance* instance, void* resolve(const char* module, const char* name));

void s202r2FreeInstance(s202r2Instance* instance);

#endif /* s202r2_H */

