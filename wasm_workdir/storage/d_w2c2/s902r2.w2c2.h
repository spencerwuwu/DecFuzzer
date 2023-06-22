#ifndef s902r2_H
#define s902r2_H

#include "w2c2_base.h"

typedef struct s902r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s902r2Instance;

void f0(s902r2Instance*);

void f1(s902r2Instance*);

U32 f2(s902r2Instance*);

void f3(s902r2Instance*,U32);

U32 f4(s902r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s902r2Instance*,U32,U32,U32,U32,U32);

void f6(s902r2Instance*,U32);

void f7(s902r2Instance*,U32,U32,U32);

void f8(s902r2Instance*,U32,U32,U32);

void s902r2____wasm_call_ctors(s902r2Instance*i);

void s902r2____wasm_apply_data_relocs(s902r2Instance*i);

U32 s902r2_func_1(s902r2Instance*i);

void s902r2_call_cb(s902r2Instance*i,U32 l0);

void s902r2Instantiate(s902r2Instance* instance, void* resolve(const char* module, const char* name));

void s902r2FreeInstance(s902r2Instance* instance);

#endif /* s902r2_H */

