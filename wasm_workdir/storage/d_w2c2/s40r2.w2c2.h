#ifndef s40r2_H
#define s40r2_H

#include "w2c2_base.h"

typedef struct s40r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s40r2Instance;

void f0(s40r2Instance*);

void f1(s40r2Instance*);

U32 f2(s40r2Instance*);

void f3(s40r2Instance*,U32);

U32 f4(s40r2Instance*,U32,U32,U32,U32,U32);

void f5(s40r2Instance*,U32,U32,U32,U32,U32);

void f6(s40r2Instance*,U32);

void f7(s40r2Instance*,U32,U32,U32);

void f8(s40r2Instance*,U32,U32,U32);

void s40r2____wasm_call_ctors(s40r2Instance*i);

void s40r2____wasm_apply_data_relocs(s40r2Instance*i);

U32 s40r2_func_1(s40r2Instance*i);

void s40r2_call_cb(s40r2Instance*i,U32 l0);

void s40r2Instantiate(s40r2Instance* instance, void* resolve(const char* module, const char* name));

void s40r2FreeInstance(s40r2Instance* instance);

#endif /* s40r2_H */

