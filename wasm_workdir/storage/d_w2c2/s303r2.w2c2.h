#ifndef s303r2_H
#define s303r2_H

#include "w2c2_base.h"

typedef struct s303r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s303r2Instance;

void f0(s303r2Instance*);

void f1(s303r2Instance*);

U32 f2(s303r2Instance*);

void f3(s303r2Instance*,U32);

U32 f4(s303r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s303r2Instance*,U32,U32,U32,U32,U32);

void f6(s303r2Instance*,U32);

void f7(s303r2Instance*,U32,U32,U32);

void f8(s303r2Instance*,U32,U32,U32);

void s303r2____wasm_call_ctors(s303r2Instance*i);

void s303r2____wasm_apply_data_relocs(s303r2Instance*i);

U32 s303r2_func_1(s303r2Instance*i);

void s303r2_call_cb(s303r2Instance*i,U32 l0);

void s303r2Instantiate(s303r2Instance* instance, void* resolve(const char* module, const char* name));

void s303r2FreeInstance(s303r2Instance* instance);

#endif /* s303r2_H */

