#ifndef s454r2_H
#define s454r2_H

#include "w2c2_base.h"

typedef struct s454r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s454r2Instance;

void f0(s454r2Instance*);

void f1(s454r2Instance*);

U32 f2(s454r2Instance*);

void f3(s454r2Instance*,U32);

U32 f4(s454r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s454r2Instance*,U32,U32,U32,U32,U32);

void f6(s454r2Instance*,U32);

void f7(s454r2Instance*,U32,U32,U32);

void f8(s454r2Instance*,U32,U32,U32);

void s454r2____wasm_call_ctors(s454r2Instance*i);

void s454r2____wasm_apply_data_relocs(s454r2Instance*i);

U32 s454r2_func_1(s454r2Instance*i);

void s454r2_call_cb(s454r2Instance*i,U32 l0);

void s454r2Instantiate(s454r2Instance* instance, void* resolve(const char* module, const char* name));

void s454r2FreeInstance(s454r2Instance* instance);

#endif /* s454r2_H */

