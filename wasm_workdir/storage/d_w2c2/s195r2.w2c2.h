#ifndef s195r2_H
#define s195r2_H

#include "w2c2_base.h"

typedef struct s195r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s195r2Instance;

void f0(s195r2Instance*);

void f1(s195r2Instance*);

U32 f2(s195r2Instance*);

void f3(s195r2Instance*,U32);

U32 f4(s195r2Instance*,U32,U32,U32,U32,U32,U32);

void f5(s195r2Instance*,U32,U32,U32,U32,U32);

void f6(s195r2Instance*,U32);

void f7(s195r2Instance*,U32,U32,U32);

void f8(s195r2Instance*,U32,U32,U32);

void s195r2____wasm_call_ctors(s195r2Instance*i);

void s195r2____wasm_apply_data_relocs(s195r2Instance*i);

U32 s195r2_func_1(s195r2Instance*i);

void s195r2_call_cb(s195r2Instance*i,U32 l0);

void s195r2Instantiate(s195r2Instance* instance, void* resolve(const char* module, const char* name));

void s195r2FreeInstance(s195r2Instance* instance);

#endif /* s195r2_H */

