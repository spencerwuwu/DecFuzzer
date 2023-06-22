#ifndef s465r2_H
#define s465r2_H

#include "w2c2_base.h"

typedef struct s465r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s465r2Instance;

void f0(s465r2Instance*);

void f1(s465r2Instance*);

U32 f2(s465r2Instance*);

void f3(s465r2Instance*,U32);

U32 f4(s465r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s465r2Instance*,U32,U32,U32,U32,U32);

void f6(s465r2Instance*,U32);

void f7(s465r2Instance*,U32,U32,U32);

void f8(s465r2Instance*,U32,U32,U32);

void s465r2____wasm_call_ctors(s465r2Instance*i);

void s465r2____wasm_apply_data_relocs(s465r2Instance*i);

U32 s465r2_func_1(s465r2Instance*i);

void s465r2_call_cb(s465r2Instance*i,U32 l0);

void s465r2Instantiate(s465r2Instance* instance, void* resolve(const char* module, const char* name));

void s465r2FreeInstance(s465r2Instance* instance);

#endif /* s465r2_H */

