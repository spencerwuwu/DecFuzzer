#ifndef s796r2_H
#define s796r2_H

#include "w2c2_base.h"

typedef struct s796r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s796r2Instance;

void f0(s796r2Instance*);

void f1(s796r2Instance*);

U32 f2(s796r2Instance*);

void f3(s796r2Instance*,U32);

U32 f4(s796r2Instance*,U32,U32,U32,U32,U32,U32);

void f5(s796r2Instance*,U32,U32,U32,U32,U32);

void f6(s796r2Instance*,U32);

void f7(s796r2Instance*,U32,U32,U32);

void f8(s796r2Instance*,U32,U32,U32);

void s796r2____wasm_call_ctors(s796r2Instance*i);

void s796r2____wasm_apply_data_relocs(s796r2Instance*i);

U32 s796r2_func_1(s796r2Instance*i);

void s796r2_call_cb(s796r2Instance*i,U32 l0);

void s796r2Instantiate(s796r2Instance* instance, void* resolve(const char* module, const char* name));

void s796r2FreeInstance(s796r2Instance* instance);

#endif /* s796r2_H */

