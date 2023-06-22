#ifndef s24r2_H
#define s24r2_H

#include "w2c2_base.h"

typedef struct s24r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s24r2Instance;

void f0(s24r2Instance*);

void f1(s24r2Instance*);

U32 f2(s24r2Instance*);

void f3(s24r2Instance*,U32);

U32 f4(s24r2Instance*,U32,U32,U32,U32);

void f5(s24r2Instance*,U32,U32,U32,U32,U32);

void f6(s24r2Instance*,U32);

void f7(s24r2Instance*,U32,U32,U32);

void f8(s24r2Instance*,U32,U32,U32);

void s24r2____wasm_call_ctors(s24r2Instance*i);

void s24r2____wasm_apply_data_relocs(s24r2Instance*i);

U32 s24r2_func_1(s24r2Instance*i);

void s24r2_call_cb(s24r2Instance*i,U32 l0);

void s24r2Instantiate(s24r2Instance* instance, void* resolve(const char* module, const char* name));

void s24r2FreeInstance(s24r2Instance* instance);

#endif /* s24r2_H */

