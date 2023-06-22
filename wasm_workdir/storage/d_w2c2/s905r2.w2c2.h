#ifndef s905r2_H
#define s905r2_H

#include "w2c2_base.h"

typedef struct s905r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s905r2Instance;

void f0(s905r2Instance*);

void f1(s905r2Instance*);

U32 f2(s905r2Instance*);

void f3(s905r2Instance*,U32);

U32 f4(s905r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s905r2Instance*,U32,U32,U32,U32,U32);

void f6(s905r2Instance*,U32);

void f7(s905r2Instance*,U32,U32,U32);

void f8(s905r2Instance*,U32,U32,U32);

void s905r2____wasm_call_ctors(s905r2Instance*i);

void s905r2____wasm_apply_data_relocs(s905r2Instance*i);

U32 s905r2_func_1(s905r2Instance*i);

void s905r2_call_cb(s905r2Instance*i,U32 l0);

void s905r2Instantiate(s905r2Instance* instance, void* resolve(const char* module, const char* name));

void s905r2FreeInstance(s905r2Instance* instance);

#endif /* s905r2_H */

