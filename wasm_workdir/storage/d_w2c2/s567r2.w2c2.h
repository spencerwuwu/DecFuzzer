#ifndef s567r2_H
#define s567r2_H

#include "w2c2_base.h"

typedef struct s567r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s567r2Instance;

void f0(s567r2Instance*);

void f1(s567r2Instance*);

U32 f2(s567r2Instance*);

void f3(s567r2Instance*,U32);

U32 f4(s567r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s567r2Instance*,U32,U32,U32,U32,U32);

void f6(s567r2Instance*,U32);

void f7(s567r2Instance*,U32,U32,U32);

void f8(s567r2Instance*,U32,U32,U32);

void s567r2____wasm_call_ctors(s567r2Instance*i);

void s567r2____wasm_apply_data_relocs(s567r2Instance*i);

U32 s567r2_func_1(s567r2Instance*i);

void s567r2_call_cb(s567r2Instance*i,U32 l0);

void s567r2Instantiate(s567r2Instance* instance, void* resolve(const char* module, const char* name));

void s567r2FreeInstance(s567r2Instance* instance);

#endif /* s567r2_H */

