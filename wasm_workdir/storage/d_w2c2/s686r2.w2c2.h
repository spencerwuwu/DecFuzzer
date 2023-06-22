#ifndef s686r2_H
#define s686r2_H

#include "w2c2_base.h"

typedef struct s686r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s686r2Instance;

void f0(s686r2Instance*);

void f1(s686r2Instance*);

U32 f2(s686r2Instance*);

void f3(s686r2Instance*,U32);

U32 f4(s686r2Instance*,U32,U32,U32,U32);

void f5(s686r2Instance*,U32,U32,U32,U32,U32);

void f6(s686r2Instance*,U32);

void f7(s686r2Instance*,U32,U32,U32);

void f8(s686r2Instance*,U32,U32,U32);

void s686r2____wasm_call_ctors(s686r2Instance*i);

void s686r2____wasm_apply_data_relocs(s686r2Instance*i);

U32 s686r2_func_1(s686r2Instance*i);

void s686r2_call_cb(s686r2Instance*i,U32 l0);

void s686r2Instantiate(s686r2Instance* instance, void* resolve(const char* module, const char* name));

void s686r2FreeInstance(s686r2Instance* instance);

#endif /* s686r2_H */

