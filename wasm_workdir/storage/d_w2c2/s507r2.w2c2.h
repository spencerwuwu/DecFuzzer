#ifndef s507r2_H
#define s507r2_H

#include "w2c2_base.h"

typedef struct s507r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s507r2Instance;

void f0(s507r2Instance*);

void f1(s507r2Instance*);

U32 f2(s507r2Instance*);

void f3(s507r2Instance*,U32);

U32 f4(s507r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s507r2Instance*,U32,U32,U32,U32,U32);

void f6(s507r2Instance*,U32);

void f7(s507r2Instance*,U32,U32,U32);

void f8(s507r2Instance*,U32,U32,U32);

void s507r2____wasm_call_ctors(s507r2Instance*i);

void s507r2____wasm_apply_data_relocs(s507r2Instance*i);

U32 s507r2_func_1(s507r2Instance*i);

void s507r2_call_cb(s507r2Instance*i,U32 l0);

void s507r2Instantiate(s507r2Instance* instance, void* resolve(const char* module, const char* name));

void s507r2FreeInstance(s507r2Instance* instance);

#endif /* s507r2_H */

