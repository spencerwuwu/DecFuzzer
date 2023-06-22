#ifndef s41r2_H
#define s41r2_H

#include "w2c2_base.h"

typedef struct s41r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s41r2Instance;

void f0(s41r2Instance*);

void f1(s41r2Instance*);

U32 f2(s41r2Instance*);

void f3(s41r2Instance*,U32);

U32 f4(s41r2Instance*,U32,U32,U32,U32);

void f5(s41r2Instance*,U32,U32,U32,U32,U32);

void f6(s41r2Instance*,U32);

void f7(s41r2Instance*,U32,U32,U32);

void f8(s41r2Instance*,U32,U32,U32);

void s41r2____wasm_call_ctors(s41r2Instance*i);

void s41r2____wasm_apply_data_relocs(s41r2Instance*i);

U32 s41r2_func_1(s41r2Instance*i);

void s41r2_call_cb(s41r2Instance*i,U32 l0);

void s41r2Instantiate(s41r2Instance* instance, void* resolve(const char* module, const char* name));

void s41r2FreeInstance(s41r2Instance* instance);

#endif /* s41r2_H */

