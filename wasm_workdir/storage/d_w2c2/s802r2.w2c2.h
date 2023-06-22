#ifndef s802r2_H
#define s802r2_H

#include "w2c2_base.h"

typedef struct s802r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s802r2Instance;

void f0(s802r2Instance*);

void f1(s802r2Instance*);

U32 f2(s802r2Instance*);

void f3(s802r2Instance*,U32);

U32 f4(s802r2Instance*,U32,U32,U32);

void f5(s802r2Instance*,U32,U32,U32,U32,U32);

void f6(s802r2Instance*,U32);

void f7(s802r2Instance*,U32,U32,U32);

void f8(s802r2Instance*,U32,U32,U32);

void s802r2____wasm_call_ctors(s802r2Instance*i);

void s802r2____wasm_apply_data_relocs(s802r2Instance*i);

U32 s802r2_func_1(s802r2Instance*i);

void s802r2_call_cb(s802r2Instance*i,U32 l0);

void s802r2Instantiate(s802r2Instance* instance, void* resolve(const char* module, const char* name));

void s802r2FreeInstance(s802r2Instance* instance);

#endif /* s802r2_H */

