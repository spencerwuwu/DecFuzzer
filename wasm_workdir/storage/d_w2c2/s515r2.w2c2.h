#ifndef s515r2_H
#define s515r2_H

#include "w2c2_base.h"

typedef struct s515r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s515r2Instance;

void f0(s515r2Instance*);

void f1(s515r2Instance*);

U32 f2(s515r2Instance*);

void f3(s515r2Instance*,U32);

U32 f4(s515r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s515r2Instance*,U32,U32,U32,U32,U32);

void f6(s515r2Instance*,U32);

void f7(s515r2Instance*,U32,U32,U32);

void f8(s515r2Instance*,U32,U32,U32);

void s515r2____wasm_call_ctors(s515r2Instance*i);

void s515r2____wasm_apply_data_relocs(s515r2Instance*i);

U32 s515r2_func_1(s515r2Instance*i);

void s515r2_call_cb(s515r2Instance*i,U32 l0);

void s515r2Instantiate(s515r2Instance* instance, void* resolve(const char* module, const char* name));

void s515r2FreeInstance(s515r2Instance* instance);

#endif /* s515r2_H */

