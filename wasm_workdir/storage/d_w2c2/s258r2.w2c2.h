#ifndef s258r2_H
#define s258r2_H

#include "w2c2_base.h"

typedef struct s258r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s258r2Instance;

void f0(s258r2Instance*);

void f1(s258r2Instance*);

U32 f2(s258r2Instance*);

void f3(s258r2Instance*,U32);

U32 f4(s258r2Instance*,U32,U32,U32,U32,U32,U32);

void f5(s258r2Instance*,U32,U32,U32,U32,U32);

void f6(s258r2Instance*,U32);

void f7(s258r2Instance*,U32,U32,U32);

void f8(s258r2Instance*,U32,U32,U32);

void s258r2____wasm_call_ctors(s258r2Instance*i);

void s258r2____wasm_apply_data_relocs(s258r2Instance*i);

U32 s258r2_func_1(s258r2Instance*i);

void s258r2_call_cb(s258r2Instance*i,U32 l0);

void s258r2Instantiate(s258r2Instance* instance, void* resolve(const char* module, const char* name));

void s258r2FreeInstance(s258r2Instance* instance);

#endif /* s258r2_H */

