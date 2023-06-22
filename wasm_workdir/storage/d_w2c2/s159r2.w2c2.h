#ifndef s159r2_H
#define s159r2_H

#include "w2c2_base.h"

typedef struct s159r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s159r2Instance;

void f0(s159r2Instance*);

void f1(s159r2Instance*);

U32 f2(s159r2Instance*);

void f3(s159r2Instance*,U32);

U32 f4(s159r2Instance*,U32,U32,U32,U32);

void f5(s159r2Instance*,U32,U32,U32,U32,U32);

void f6(s159r2Instance*,U32);

void f7(s159r2Instance*,U32,U32,U32);

void f8(s159r2Instance*,U32,U32,U32);

void s159r2____wasm_call_ctors(s159r2Instance*i);

void s159r2____wasm_apply_data_relocs(s159r2Instance*i);

U32 s159r2_func_1(s159r2Instance*i);

void s159r2_call_cb(s159r2Instance*i,U32 l0);

void s159r2Instantiate(s159r2Instance* instance, void* resolve(const char* module, const char* name));

void s159r2FreeInstance(s159r2Instance* instance);

#endif /* s159r2_H */

