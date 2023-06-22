#ifndef s274r2_H
#define s274r2_H

#include "w2c2_base.h"

typedef struct s274r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s274r2Instance;

void f0(s274r2Instance*);

void f1(s274r2Instance*);

U32 f2(s274r2Instance*);

void f3(s274r2Instance*,U32);

U32 f4(s274r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s274r2Instance*,U32,U32,U32,U32,U32);

void f6(s274r2Instance*,U32);

void f7(s274r2Instance*,U32,U32,U32);

void f8(s274r2Instance*,U32,U32,U32);

void s274r2____wasm_call_ctors(s274r2Instance*i);

void s274r2____wasm_apply_data_relocs(s274r2Instance*i);

U32 s274r2_func_1(s274r2Instance*i);

void s274r2_call_cb(s274r2Instance*i,U32 l0);

void s274r2Instantiate(s274r2Instance* instance, void* resolve(const char* module, const char* name));

void s274r2FreeInstance(s274r2Instance* instance);

#endif /* s274r2_H */

