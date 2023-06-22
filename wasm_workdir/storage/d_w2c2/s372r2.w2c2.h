#ifndef s372r2_H
#define s372r2_H

#include "w2c2_base.h"

typedef struct s372r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s372r2Instance;

void f0(s372r2Instance*);

void f1(s372r2Instance*);

U32 f2(s372r2Instance*);

void f3(s372r2Instance*,U32);

U32 f4(s372r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s372r2Instance*,U32,U32,U32,U32,U32);

void f6(s372r2Instance*,U32);

void f7(s372r2Instance*,U32,U32,U32);

void f8(s372r2Instance*,U32,U32,U32);

void s372r2____wasm_call_ctors(s372r2Instance*i);

void s372r2____wasm_apply_data_relocs(s372r2Instance*i);

U32 s372r2_func_1(s372r2Instance*i);

void s372r2_call_cb(s372r2Instance*i,U32 l0);

void s372r2Instantiate(s372r2Instance* instance, void* resolve(const char* module, const char* name));

void s372r2FreeInstance(s372r2Instance* instance);

#endif /* s372r2_H */

