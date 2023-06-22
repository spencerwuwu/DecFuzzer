#ifndef s986r2_H
#define s986r2_H

#include "w2c2_base.h"

typedef struct s986r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s986r2Instance;

void f0(s986r2Instance*);

void f1(s986r2Instance*);

U32 f2(s986r2Instance*);

void f3(s986r2Instance*,U32);

U32 f4(s986r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s986r2Instance*,U32,U32,U32,U32,U32);

void f6(s986r2Instance*,U32);

void f7(s986r2Instance*,U32,U32,U32);

void f8(s986r2Instance*,U32,U32,U32);

void s986r2____wasm_call_ctors(s986r2Instance*i);

void s986r2____wasm_apply_data_relocs(s986r2Instance*i);

U32 s986r2_func_1(s986r2Instance*i);

void s986r2_call_cb(s986r2Instance*i,U32 l0);

void s986r2Instantiate(s986r2Instance* instance, void* resolve(const char* module, const char* name));

void s986r2FreeInstance(s986r2Instance* instance);

#endif /* s986r2_H */

