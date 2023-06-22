#ifndef s235r2_H
#define s235r2_H

#include "w2c2_base.h"

typedef struct s235r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s235r2Instance;

void f0(s235r2Instance*);

void f1(s235r2Instance*);

U32 f2(s235r2Instance*);

void f3(s235r2Instance*,U32);

U32 f4(s235r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s235r2Instance*,U32,U32,U32,U32,U32);

void f6(s235r2Instance*,U32);

void f7(s235r2Instance*,U32,U32,U32);

void f8(s235r2Instance*,U32,U32,U32);

void s235r2____wasm_call_ctors(s235r2Instance*i);

void s235r2____wasm_apply_data_relocs(s235r2Instance*i);

U32 s235r2_func_1(s235r2Instance*i);

void s235r2_call_cb(s235r2Instance*i,U32 l0);

void s235r2Instantiate(s235r2Instance* instance, void* resolve(const char* module, const char* name));

void s235r2FreeInstance(s235r2Instance* instance);

#endif /* s235r2_H */

