#ifndef s630r2_H
#define s630r2_H

#include "w2c2_base.h"

typedef struct s630r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s630r2Instance;

void f0(s630r2Instance*);

void f1(s630r2Instance*);

U32 f2(s630r2Instance*);

void f3(s630r2Instance*,U32);

U32 f4(s630r2Instance*,U32,U32,U32,U32);

void f5(s630r2Instance*,U32,U32,U32,U32,U32);

void f6(s630r2Instance*,U32);

void f7(s630r2Instance*,U32,U32,U32);

void f8(s630r2Instance*,U32,U32,U32);

void s630r2____wasm_call_ctors(s630r2Instance*i);

void s630r2____wasm_apply_data_relocs(s630r2Instance*i);

U32 s630r2_func_1(s630r2Instance*i);

void s630r2_call_cb(s630r2Instance*i,U32 l0);

void s630r2Instantiate(s630r2Instance* instance, void* resolve(const char* module, const char* name));

void s630r2FreeInstance(s630r2Instance* instance);

#endif /* s630r2_H */

