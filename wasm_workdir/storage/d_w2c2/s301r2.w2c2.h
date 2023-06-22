#ifndef s301r2_H
#define s301r2_H

#include "w2c2_base.h"

typedef struct s301r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s301r2Instance;

void f0(s301r2Instance*);

void f1(s301r2Instance*);

U32 f2(s301r2Instance*);

void f3(s301r2Instance*,U32);

U32 f4(s301r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s301r2Instance*,U32,U32,U32,U32,U32);

void f6(s301r2Instance*,U32);

void f7(s301r2Instance*,U32,U32,U32);

void f8(s301r2Instance*,U32,U32,U32);

void s301r2____wasm_call_ctors(s301r2Instance*i);

void s301r2____wasm_apply_data_relocs(s301r2Instance*i);

U32 s301r2_func_1(s301r2Instance*i);

void s301r2_call_cb(s301r2Instance*i,U32 l0);

void s301r2Instantiate(s301r2Instance* instance, void* resolve(const char* module, const char* name));

void s301r2FreeInstance(s301r2Instance* instance);

#endif /* s301r2_H */

