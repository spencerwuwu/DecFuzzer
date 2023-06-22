#ifndef s978r2_H
#define s978r2_H

#include "w2c2_base.h"

typedef struct s978r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s978r2Instance;

void f0(s978r2Instance*);

void f1(s978r2Instance*);

U32 f2(s978r2Instance*);

void f3(s978r2Instance*,U32);

U32 f4(s978r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s978r2Instance*,U32,U32,U32,U32,U32);

void f6(s978r2Instance*,U32);

void f7(s978r2Instance*,U32,U32,U32);

void f8(s978r2Instance*,U32,U32,U32);

void s978r2____wasm_call_ctors(s978r2Instance*i);

void s978r2____wasm_apply_data_relocs(s978r2Instance*i);

U32 s978r2_func_1(s978r2Instance*i);

void s978r2_call_cb(s978r2Instance*i,U32 l0);

void s978r2Instantiate(s978r2Instance* instance, void* resolve(const char* module, const char* name));

void s978r2FreeInstance(s978r2Instance* instance);

#endif /* s978r2_H */

