#ifndef s771r2_H
#define s771r2_H

#include "w2c2_base.h"

typedef struct s771r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s771r2Instance;

void f0(s771r2Instance*);

void f1(s771r2Instance*);

U32 f2(s771r2Instance*);

void f3(s771r2Instance*,U32);

U32 f4(s771r2Instance*,U32,U32,U32,U32);

void f5(s771r2Instance*,U32,U32,U32,U32,U32);

void f6(s771r2Instance*,U32);

void f7(s771r2Instance*,U32,U32,U32);

void f8(s771r2Instance*,U32,U32,U32);

void s771r2____wasm_call_ctors(s771r2Instance*i);

void s771r2____wasm_apply_data_relocs(s771r2Instance*i);

U32 s771r2_func_1(s771r2Instance*i);

void s771r2_call_cb(s771r2Instance*i,U32 l0);

void s771r2Instantiate(s771r2Instance* instance, void* resolve(const char* module, const char* name));

void s771r2FreeInstance(s771r2Instance* instance);

#endif /* s771r2_H */

