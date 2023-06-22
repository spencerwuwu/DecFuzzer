#ifndef s706r2_H
#define s706r2_H

#include "w2c2_base.h"

typedef struct s706r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s706r2Instance;

void f0(s706r2Instance*);

void f1(s706r2Instance*);

U32 f2(s706r2Instance*);

void f3(s706r2Instance*,U32);

U32 f4(s706r2Instance*,U32,U32,U32,U32);

void f5(s706r2Instance*,U32,U32,U32,U32,U32);

void f6(s706r2Instance*,U32);

void f7(s706r2Instance*,U32,U32,U32);

void f8(s706r2Instance*,U32,U32,U32);

void s706r2____wasm_call_ctors(s706r2Instance*i);

void s706r2____wasm_apply_data_relocs(s706r2Instance*i);

U32 s706r2_func_1(s706r2Instance*i);

void s706r2_call_cb(s706r2Instance*i,U32 l0);

void s706r2Instantiate(s706r2Instance* instance, void* resolve(const char* module, const char* name));

void s706r2FreeInstance(s706r2Instance* instance);

#endif /* s706r2_H */

