#ifndef s360r2_H
#define s360r2_H

#include "w2c2_base.h"

typedef struct s360r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s360r2Instance;

void f0(s360r2Instance*);

void f1(s360r2Instance*);

U32 f2(s360r2Instance*);

void f3(s360r2Instance*,U32);

U32 f4(s360r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s360r2Instance*,U32,U32,U32,U32,U32);

void f6(s360r2Instance*,U32);

void f7(s360r2Instance*,U32,U32,U32);

void f8(s360r2Instance*,U32,U32,U32);

void s360r2____wasm_call_ctors(s360r2Instance*i);

void s360r2____wasm_apply_data_relocs(s360r2Instance*i);

U32 s360r2_func_1(s360r2Instance*i);

void s360r2_call_cb(s360r2Instance*i,U32 l0);

void s360r2Instantiate(s360r2Instance* instance, void* resolve(const char* module, const char* name));

void s360r2FreeInstance(s360r2Instance* instance);

#endif /* s360r2_H */

