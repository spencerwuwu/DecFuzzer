#ifndef s550r2_H
#define s550r2_H

#include "w2c2_base.h"

typedef struct s550r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s550r2Instance;

void f0(s550r2Instance*);

void f1(s550r2Instance*);

U32 f2(s550r2Instance*);

void f3(s550r2Instance*,U32);

U32 f4(s550r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s550r2Instance*,U32,U32,U32,U32,U32);

void f6(s550r2Instance*,U32);

void f7(s550r2Instance*,U32,U32,U32);

void f8(s550r2Instance*,U32,U32,U32);

void s550r2____wasm_call_ctors(s550r2Instance*i);

void s550r2____wasm_apply_data_relocs(s550r2Instance*i);

U32 s550r2_func_1(s550r2Instance*i);

void s550r2_call_cb(s550r2Instance*i,U32 l0);

void s550r2Instantiate(s550r2Instance* instance, void* resolve(const char* module, const char* name));

void s550r2FreeInstance(s550r2Instance* instance);

#endif /* s550r2_H */

