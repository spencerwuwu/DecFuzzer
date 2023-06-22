#ifndef s970r2_H
#define s970r2_H

#include "w2c2_base.h"

typedef struct s970r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s970r2Instance;

void f0(s970r2Instance*);

void f1(s970r2Instance*);

U32 f2(s970r2Instance*);

void f3(s970r2Instance*,U32);

U32 f4(s970r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s970r2Instance*,U32,U32,U32,U32,U32);

void f6(s970r2Instance*,U32);

void f7(s970r2Instance*,U32,U32,U32);

void f8(s970r2Instance*,U32,U32,U32);

void s970r2____wasm_call_ctors(s970r2Instance*i);

void s970r2____wasm_apply_data_relocs(s970r2Instance*i);

U32 s970r2_func_1(s970r2Instance*i);

void s970r2_call_cb(s970r2Instance*i,U32 l0);

void s970r2Instantiate(s970r2Instance* instance, void* resolve(const char* module, const char* name));

void s970r2FreeInstance(s970r2Instance* instance);

#endif /* s970r2_H */

