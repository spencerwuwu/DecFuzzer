#ifndef s104r2_H
#define s104r2_H

#include "w2c2_base.h"

typedef struct s104r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s104r2Instance;

void f0(s104r2Instance*);

void f1(s104r2Instance*);

U32 f2(s104r2Instance*);

void f3(s104r2Instance*,U32);

U32 f4(s104r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s104r2Instance*,U32,U32,U32,U32,U32);

void f6(s104r2Instance*,U32);

void f7(s104r2Instance*,U32,U32,U32);

void f8(s104r2Instance*,U32,U32,U32);

void s104r2____wasm_call_ctors(s104r2Instance*i);

void s104r2____wasm_apply_data_relocs(s104r2Instance*i);

U32 s104r2_func_1(s104r2Instance*i);

void s104r2_call_cb(s104r2Instance*i,U32 l0);

void s104r2Instantiate(s104r2Instance* instance, void* resolve(const char* module, const char* name));

void s104r2FreeInstance(s104r2Instance* instance);

#endif /* s104r2_H */

