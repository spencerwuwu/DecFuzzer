#ifndef s499r2_H
#define s499r2_H

#include "w2c2_base.h"

typedef struct s499r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s499r2Instance;

void f0(s499r2Instance*);

void f1(s499r2Instance*);

U32 f2(s499r2Instance*);

void f3(s499r2Instance*,U32);

U32 f4(s499r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s499r2Instance*,U32,U32,U32,U32,U32);

void f6(s499r2Instance*,U32);

void f7(s499r2Instance*,U32,U32,U32);

void f8(s499r2Instance*,U32,U32,U32);

void s499r2____wasm_call_ctors(s499r2Instance*i);

void s499r2____wasm_apply_data_relocs(s499r2Instance*i);

U32 s499r2_func_1(s499r2Instance*i);

void s499r2_call_cb(s499r2Instance*i,U32 l0);

void s499r2Instantiate(s499r2Instance* instance, void* resolve(const char* module, const char* name));

void s499r2FreeInstance(s499r2Instance* instance);

#endif /* s499r2_H */

