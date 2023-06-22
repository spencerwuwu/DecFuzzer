#ifndef s382r2_H
#define s382r2_H

#include "w2c2_base.h"

typedef struct s382r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s382r2Instance;

void f0(s382r2Instance*);

void f1(s382r2Instance*);

U32 f2(s382r2Instance*);

void f3(s382r2Instance*,U32);

U32 f4(s382r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s382r2Instance*,U32,U32,U32,U32,U32);

void f6(s382r2Instance*,U32);

void f7(s382r2Instance*,U32,U32,U32);

void f8(s382r2Instance*,U32,U32,U32);

void s382r2____wasm_call_ctors(s382r2Instance*i);

void s382r2____wasm_apply_data_relocs(s382r2Instance*i);

U32 s382r2_func_1(s382r2Instance*i);

void s382r2_call_cb(s382r2Instance*i,U32 l0);

void s382r2Instantiate(s382r2Instance* instance, void* resolve(const char* module, const char* name));

void s382r2FreeInstance(s382r2Instance* instance);

#endif /* s382r2_H */

