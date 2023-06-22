#ifndef s923r2_H
#define s923r2_H

#include "w2c2_base.h"

typedef struct s923r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s923r2Instance;

void f0(s923r2Instance*);

void f1(s923r2Instance*);

U32 f2(s923r2Instance*);

void f3(s923r2Instance*,U32);

U32 f4(s923r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s923r2Instance*,U32,U32,U32,U32,U32);

void f6(s923r2Instance*,U32);

void f7(s923r2Instance*,U32,U32,U32);

void f8(s923r2Instance*,U32,U32,U32);

void s923r2____wasm_call_ctors(s923r2Instance*i);

void s923r2____wasm_apply_data_relocs(s923r2Instance*i);

U32 s923r2_func_1(s923r2Instance*i);

void s923r2_call_cb(s923r2Instance*i,U32 l0);

void s923r2Instantiate(s923r2Instance* instance, void* resolve(const char* module, const char* name));

void s923r2FreeInstance(s923r2Instance* instance);

#endif /* s923r2_H */

