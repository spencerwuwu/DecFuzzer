#ifndef s926r2_H
#define s926r2_H

#include "w2c2_base.h"

typedef struct s926r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s926r2Instance;

void f0(s926r2Instance*);

void f1(s926r2Instance*);

U32 f2(s926r2Instance*);

void f3(s926r2Instance*,U32);

U32 f4(s926r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s926r2Instance*,U32,U32,U32,U32,U32);

void f6(s926r2Instance*,U32);

void f7(s926r2Instance*,U32,U32,U32);

void f8(s926r2Instance*,U32,U32,U32);

void s926r2____wasm_call_ctors(s926r2Instance*i);

void s926r2____wasm_apply_data_relocs(s926r2Instance*i);

U32 s926r2_func_1(s926r2Instance*i);

void s926r2_call_cb(s926r2Instance*i,U32 l0);

void s926r2Instantiate(s926r2Instance* instance, void* resolve(const char* module, const char* name));

void s926r2FreeInstance(s926r2Instance* instance);

#endif /* s926r2_H */

