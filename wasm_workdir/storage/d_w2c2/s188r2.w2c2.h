#ifndef s188r2_H
#define s188r2_H

#include "w2c2_base.h"

typedef struct s188r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s188r2Instance;

void f0(s188r2Instance*);

void f1(s188r2Instance*);

U32 f2(s188r2Instance*);

void f3(s188r2Instance*,U32);

void f4(s188r2Instance*,U32);

void s188r2____wasm_call_ctors(s188r2Instance*i);

void s188r2____wasm_apply_data_relocs(s188r2Instance*i);

U32 s188r2_func_1(s188r2Instance*i);

void s188r2_call_cb(s188r2Instance*i,U32 l0);

void s188r2Instantiate(s188r2Instance* instance, void* resolve(const char* module, const char* name));

void s188r2FreeInstance(s188r2Instance* instance);

#endif /* s188r2_H */

