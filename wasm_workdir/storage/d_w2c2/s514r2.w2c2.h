#ifndef s514r2_H
#define s514r2_H

#include "w2c2_base.h"

typedef struct s514r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s514r2Instance;

void f0(s514r2Instance*);

void f1(s514r2Instance*);

U32 f2(s514r2Instance*);

void f3(s514r2Instance*,U32);

U32 f4(s514r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s514r2Instance*,U32,U32,U32,U32,U32);

void f6(s514r2Instance*,U32);

void f7(s514r2Instance*,U32,U32,U32);

void f8(s514r2Instance*,U32,U32,U32);

void s514r2____wasm_call_ctors(s514r2Instance*i);

void s514r2____wasm_apply_data_relocs(s514r2Instance*i);

U32 s514r2_func_1(s514r2Instance*i);

void s514r2_call_cb(s514r2Instance*i,U32 l0);

void s514r2Instantiate(s514r2Instance* instance, void* resolve(const char* module, const char* name));

void s514r2FreeInstance(s514r2Instance* instance);

#endif /* s514r2_H */

