#ifndef s812r2_H
#define s812r2_H

#include "w2c2_base.h"

typedef struct s812r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s812r2Instance;

void f0(s812r2Instance*);

void f1(s812r2Instance*);

U32 f2(s812r2Instance*);

void f3(s812r2Instance*,U32);

U32 f4(s812r2Instance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s812r2Instance*,U32,U32,U32,U32,U32);

void f6(s812r2Instance*,U32);

void f7(s812r2Instance*,U32,U32,U32);

void f8(s812r2Instance*,U32,U32,U32);

void s812r2____wasm_call_ctors(s812r2Instance*i);

void s812r2____wasm_apply_data_relocs(s812r2Instance*i);

U32 s812r2_func_1(s812r2Instance*i);

void s812r2_call_cb(s812r2Instance*i,U32 l0);

void s812r2Instantiate(s812r2Instance* instance, void* resolve(const char* module, const char* name));

void s812r2FreeInstance(s812r2Instance* instance);

#endif /* s812r2_H */

