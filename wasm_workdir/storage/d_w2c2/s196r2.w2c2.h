#ifndef s196r2_H
#define s196r2_H

#include "w2c2_base.h"

typedef struct s196r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s196r2Instance;

void f0(s196r2Instance*);

void f1(s196r2Instance*);

U32 f2(s196r2Instance*);

void f3(s196r2Instance*,U32);

U32 f4(s196r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s196r2Instance*,U32,U32,U32,U32,U32);

void f6(s196r2Instance*,U32);

void f7(s196r2Instance*,U32,U32,U32);

void f8(s196r2Instance*,U32,U32,U32);

void s196r2____wasm_call_ctors(s196r2Instance*i);

void s196r2____wasm_apply_data_relocs(s196r2Instance*i);

U32 s196r2_func_1(s196r2Instance*i);

void s196r2_call_cb(s196r2Instance*i,U32 l0);

void s196r2Instantiate(s196r2Instance* instance, void* resolve(const char* module, const char* name));

void s196r2FreeInstance(s196r2Instance* instance);

#endif /* s196r2_H */

