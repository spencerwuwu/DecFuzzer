#ifndef s143r2_H
#define s143r2_H

#include "w2c2_base.h"

typedef struct s143r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s143r2Instance;

void f0(s143r2Instance*);

void f1(s143r2Instance*);

U32 f2(s143r2Instance*);

void f3(s143r2Instance*,U32);

U32 f4(s143r2Instance*,U32,U32,U32);

void f5(s143r2Instance*,U32,U32,U32,U32,U32);

void f6(s143r2Instance*,U32);

void f7(s143r2Instance*,U32,U32,U32);

void f8(s143r2Instance*,U32,U32,U32);

void s143r2____wasm_call_ctors(s143r2Instance*i);

void s143r2____wasm_apply_data_relocs(s143r2Instance*i);

U32 s143r2_func_1(s143r2Instance*i);

void s143r2_call_cb(s143r2Instance*i,U32 l0);

void s143r2Instantiate(s143r2Instance* instance, void* resolve(const char* module, const char* name));

void s143r2FreeInstance(s143r2Instance* instance);

#endif /* s143r2_H */

