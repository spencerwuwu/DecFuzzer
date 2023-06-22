#ifndef s31r2_H
#define s31r2_H

#include "w2c2_base.h"

typedef struct s31r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s31r2Instance;

void f0(s31r2Instance*);

void f1(s31r2Instance*);

U32 f2(s31r2Instance*);

void f3(s31r2Instance*,U32);

U32 f4(s31r2Instance*,U32,U32,U32);

void f5(s31r2Instance*,U32,U32,U32,U32,U32);

void f6(s31r2Instance*,U32);

void f7(s31r2Instance*,U32,U32,U32);

void f8(s31r2Instance*,U32,U32,U32);

void s31r2____wasm_call_ctors(s31r2Instance*i);

void s31r2____wasm_apply_data_relocs(s31r2Instance*i);

U32 s31r2_func_1(s31r2Instance*i);

void s31r2_call_cb(s31r2Instance*i,U32 l0);

void s31r2Instantiate(s31r2Instance* instance, void* resolve(const char* module, const char* name));

void s31r2FreeInstance(s31r2Instance* instance);

#endif /* s31r2_H */

