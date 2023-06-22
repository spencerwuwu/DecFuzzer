#ifndef s347r2_H
#define s347r2_H

#include "w2c2_base.h"

typedef struct s347r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s347r2Instance;

void f0(s347r2Instance*);

void f1(s347r2Instance*);

U32 f2(s347r2Instance*);

void f3(s347r2Instance*,U32);

U32 f4(s347r2Instance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s347r2Instance*,U32,U32,U32,U32,U32);

void f6(s347r2Instance*,U32);

void f7(s347r2Instance*,U32,U32,U32);

void f8(s347r2Instance*,U32,U32,U32);

void s347r2____wasm_call_ctors(s347r2Instance*i);

void s347r2____wasm_apply_data_relocs(s347r2Instance*i);

U32 s347r2_func_1(s347r2Instance*i);

void s347r2_call_cb(s347r2Instance*i,U32 l0);

void s347r2Instantiate(s347r2Instance* instance, void* resolve(const char* module, const char* name));

void s347r2FreeInstance(s347r2Instance* instance);

#endif /* s347r2_H */

