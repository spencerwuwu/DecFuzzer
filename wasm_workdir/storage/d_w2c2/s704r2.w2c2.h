#ifndef s704r2_H
#define s704r2_H

#include "w2c2_base.h"

typedef struct s704r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s704r2Instance;

void f0(s704r2Instance*);

void f1(s704r2Instance*);

U32 f2(s704r2Instance*);

void f3(s704r2Instance*,U32);

U32 f4(s704r2Instance*,U32,U32,U32,U32,U32,U32);

void f5(s704r2Instance*,U32,U32,U32,U32,U32);

void f6(s704r2Instance*,U32);

void f7(s704r2Instance*,U32,U32,U32);

void f8(s704r2Instance*,U32,U32,U32);

void s704r2____wasm_call_ctors(s704r2Instance*i);

void s704r2____wasm_apply_data_relocs(s704r2Instance*i);

U32 s704r2_func_1(s704r2Instance*i);

void s704r2_call_cb(s704r2Instance*i,U32 l0);

void s704r2Instantiate(s704r2Instance* instance, void* resolve(const char* module, const char* name));

void s704r2FreeInstance(s704r2Instance* instance);

#endif /* s704r2_H */

