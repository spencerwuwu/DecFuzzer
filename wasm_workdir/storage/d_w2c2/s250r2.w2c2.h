#ifndef s250r2_H
#define s250r2_H

#include "w2c2_base.h"

typedef struct s250r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s250r2Instance;

void f0(s250r2Instance*);

void f1(s250r2Instance*);

U32 f2(s250r2Instance*);

void f3(s250r2Instance*,U32);

U32 f4(s250r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s250r2Instance*,U32,U32,U32,U32,U32);

void f6(s250r2Instance*,U32);

void f7(s250r2Instance*,U32,U32,U32);

void f8(s250r2Instance*,U32,U32,U32);

void s250r2____wasm_call_ctors(s250r2Instance*i);

void s250r2____wasm_apply_data_relocs(s250r2Instance*i);

U32 s250r2_func_1(s250r2Instance*i);

void s250r2_call_cb(s250r2Instance*i,U32 l0);

void s250r2Instantiate(s250r2Instance* instance, void* resolve(const char* module, const char* name));

void s250r2FreeInstance(s250r2Instance* instance);

#endif /* s250r2_H */

