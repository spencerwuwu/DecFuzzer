#ifndef s568r2_H
#define s568r2_H

#include "w2c2_base.h"

typedef struct s568r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s568r2Instance;

void f0(s568r2Instance*);

void f1(s568r2Instance*);

U32 f2(s568r2Instance*);

void f3(s568r2Instance*,U32);

U32 f4(s568r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s568r2Instance*,U32,U32,U32,U32,U32);

void f6(s568r2Instance*,U32);

void f7(s568r2Instance*,U32,U32,U32);

void f8(s568r2Instance*,U32,U32,U32);

void s568r2____wasm_call_ctors(s568r2Instance*i);

void s568r2____wasm_apply_data_relocs(s568r2Instance*i);

U32 s568r2_func_1(s568r2Instance*i);

void s568r2_call_cb(s568r2Instance*i,U32 l0);

void s568r2Instantiate(s568r2Instance* instance, void* resolve(const char* module, const char* name));

void s568r2FreeInstance(s568r2Instance* instance);

#endif /* s568r2_H */

