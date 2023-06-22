#ifndef s462r2_H
#define s462r2_H

#include "w2c2_base.h"

typedef struct s462r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s462r2Instance;

void f0(s462r2Instance*);

void f1(s462r2Instance*);

U32 f2(s462r2Instance*);

void f3(s462r2Instance*,U32);

U32 f4(s462r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s462r2Instance*,U32,U32,U32,U32,U32);

void f6(s462r2Instance*,U32);

void f7(s462r2Instance*,U32,U32,U32);

void f8(s462r2Instance*,U32,U32,U32);

void s462r2____wasm_call_ctors(s462r2Instance*i);

void s462r2____wasm_apply_data_relocs(s462r2Instance*i);

U32 s462r2_func_1(s462r2Instance*i);

void s462r2_call_cb(s462r2Instance*i,U32 l0);

void s462r2Instantiate(s462r2Instance* instance, void* resolve(const char* module, const char* name));

void s462r2FreeInstance(s462r2Instance* instance);

#endif /* s462r2_H */

