#ifndef s718r2_H
#define s718r2_H

#include "w2c2_base.h"

typedef struct s718r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s718r2Instance;

void f0(s718r2Instance*);

void f1(s718r2Instance*);

U32 f2(s718r2Instance*);

void f3(s718r2Instance*,U32);

U32 f4(s718r2Instance*,U32,U32,U32,U32);

void f5(s718r2Instance*,U32,U32,U32,U32,U32);

void f6(s718r2Instance*,U32);

void f7(s718r2Instance*,U32,U32,U32);

void f8(s718r2Instance*,U32,U32,U32);

void s718r2____wasm_call_ctors(s718r2Instance*i);

void s718r2____wasm_apply_data_relocs(s718r2Instance*i);

U32 s718r2_func_1(s718r2Instance*i);

void s718r2_call_cb(s718r2Instance*i,U32 l0);

void s718r2Instantiate(s718r2Instance* instance, void* resolve(const char* module, const char* name));

void s718r2FreeInstance(s718r2Instance* instance);

#endif /* s718r2_H */

