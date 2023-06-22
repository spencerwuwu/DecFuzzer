#ifndef s291r2_H
#define s291r2_H

#include "w2c2_base.h"

typedef struct s291r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s291r2Instance;

void f0(s291r2Instance*);

void f1(s291r2Instance*);

U32 f2(s291r2Instance*);

void f3(s291r2Instance*,U32);

U32 f4(s291r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s291r2Instance*,U32,U32,U32,U32,U32);

void f6(s291r2Instance*,U32);

void f7(s291r2Instance*,U32,U32,U32);

void f8(s291r2Instance*,U32,U32,U32);

void s291r2____wasm_call_ctors(s291r2Instance*i);

void s291r2____wasm_apply_data_relocs(s291r2Instance*i);

U32 s291r2_func_1(s291r2Instance*i);

void s291r2_call_cb(s291r2Instance*i,U32 l0);

void s291r2Instantiate(s291r2Instance* instance, void* resolve(const char* module, const char* name));

void s291r2FreeInstance(s291r2Instance* instance);

#endif /* s291r2_H */

