#ifndef s977r2_H
#define s977r2_H

#include "w2c2_base.h"

typedef struct s977r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s977r2Instance;

void f0(s977r2Instance*);

void f1(s977r2Instance*);

U32 f2(s977r2Instance*);

void f3(s977r2Instance*,U32);

U32 f4(s977r2Instance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s977r2Instance*,U32,U32,U32,U32,U32);

void f6(s977r2Instance*,U32);

void f7(s977r2Instance*,U32,U32,U32);

void f8(s977r2Instance*,U32,U32,U32);

void s977r2____wasm_call_ctors(s977r2Instance*i);

void s977r2____wasm_apply_data_relocs(s977r2Instance*i);

U32 s977r2_func_1(s977r2Instance*i);

void s977r2_call_cb(s977r2Instance*i,U32 l0);

void s977r2Instantiate(s977r2Instance* instance, void* resolve(const char* module, const char* name));

void s977r2FreeInstance(s977r2Instance* instance);

#endif /* s977r2_H */

