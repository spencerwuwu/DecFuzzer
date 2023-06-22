#ifndef s434r2_H
#define s434r2_H

#include "w2c2_base.h"

typedef struct s434r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s434r2Instance;

void f0(s434r2Instance*);

void f1(s434r2Instance*);

U32 f2(s434r2Instance*);

void f3(s434r2Instance*,U32);

U32 f4(s434r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s434r2Instance*,U32,U32,U32,U32,U32);

void f6(s434r2Instance*,U32);

void f7(s434r2Instance*,U32,U32,U32);

void f8(s434r2Instance*,U32,U32,U32);

void s434r2____wasm_call_ctors(s434r2Instance*i);

void s434r2____wasm_apply_data_relocs(s434r2Instance*i);

U32 s434r2_func_1(s434r2Instance*i);

void s434r2_call_cb(s434r2Instance*i,U32 l0);

void s434r2Instantiate(s434r2Instance* instance, void* resolve(const char* module, const char* name));

void s434r2FreeInstance(s434r2Instance* instance);

#endif /* s434r2_H */

