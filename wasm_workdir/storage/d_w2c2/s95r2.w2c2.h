#ifndef s95r2_H
#define s95r2_H

#include "w2c2_base.h"

typedef struct s95r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s95r2Instance;

void f0(s95r2Instance*);

void f1(s95r2Instance*);

U32 f2(s95r2Instance*);

void f3(s95r2Instance*,U32);

U32 f4(s95r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s95r2Instance*,U32,U32,U32,U32,U32);

void f6(s95r2Instance*,U32);

void f7(s95r2Instance*,U32,U32,U32);

void f8(s95r2Instance*,U32,U32,U32);

void s95r2____wasm_call_ctors(s95r2Instance*i);

void s95r2____wasm_apply_data_relocs(s95r2Instance*i);

U32 s95r2_func_1(s95r2Instance*i);

void s95r2_call_cb(s95r2Instance*i,U32 l0);

void s95r2Instantiate(s95r2Instance* instance, void* resolve(const char* module, const char* name));

void s95r2FreeInstance(s95r2Instance* instance);

#endif /* s95r2_H */

