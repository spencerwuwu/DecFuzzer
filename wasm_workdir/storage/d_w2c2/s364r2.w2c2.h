#ifndef s364r2_H
#define s364r2_H

#include "w2c2_base.h"

typedef struct s364r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s364r2Instance;

void f0(s364r2Instance*);

void f1(s364r2Instance*);

U32 f2(s364r2Instance*);

void f3(s364r2Instance*,U32);

U32 f4(s364r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s364r2Instance*,U32,U32,U32,U32,U32);

void f6(s364r2Instance*,U32);

void f7(s364r2Instance*,U32,U32,U32);

void f8(s364r2Instance*,U32,U32,U32);

void s364r2____wasm_call_ctors(s364r2Instance*i);

void s364r2____wasm_apply_data_relocs(s364r2Instance*i);

U32 s364r2_func_1(s364r2Instance*i);

void s364r2_call_cb(s364r2Instance*i,U32 l0);

void s364r2Instantiate(s364r2Instance* instance, void* resolve(const char* module, const char* name));

void s364r2FreeInstance(s364r2Instance* instance);

#endif /* s364r2_H */

