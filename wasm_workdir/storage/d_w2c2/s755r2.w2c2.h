#ifndef s755r2_H
#define s755r2_H

#include "w2c2_base.h"

typedef struct s755r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s755r2Instance;

void f0(s755r2Instance*);

void f1(s755r2Instance*);

U32 f2(s755r2Instance*);

void f3(s755r2Instance*,U32);

U32 f4(s755r2Instance*,U32,U32,U32,U32);

void f5(s755r2Instance*,U32,U32,U32,U32,U32);

void f6(s755r2Instance*,U32);

void f7(s755r2Instance*,U32,U32,U32);

void f8(s755r2Instance*,U32,U32,U32);

void s755r2____wasm_call_ctors(s755r2Instance*i);

void s755r2____wasm_apply_data_relocs(s755r2Instance*i);

U32 s755r2_func_1(s755r2Instance*i);

void s755r2_call_cb(s755r2Instance*i,U32 l0);

void s755r2Instantiate(s755r2Instance* instance, void* resolve(const char* module, const char* name));

void s755r2FreeInstance(s755r2Instance* instance);

#endif /* s755r2_H */

