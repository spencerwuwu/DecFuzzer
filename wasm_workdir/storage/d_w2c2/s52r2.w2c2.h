#ifndef s52r2_H
#define s52r2_H

#include "w2c2_base.h"

typedef struct s52r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s52r2Instance;

void f0(s52r2Instance*);

void f1(s52r2Instance*);

U32 f2(s52r2Instance*);

void f3(s52r2Instance*,U32);

U32 f4(s52r2Instance*,U32,U32,U32);

void f5(s52r2Instance*,U32,U32,U32,U32,U32);

void f6(s52r2Instance*,U32);

void f7(s52r2Instance*,U32,U32,U32);

void f8(s52r2Instance*,U32,U32,U32);

void s52r2____wasm_call_ctors(s52r2Instance*i);

void s52r2____wasm_apply_data_relocs(s52r2Instance*i);

U32 s52r2_func_1(s52r2Instance*i);

void s52r2_call_cb(s52r2Instance*i,U32 l0);

void s52r2Instantiate(s52r2Instance* instance, void* resolve(const char* module, const char* name));

void s52r2FreeInstance(s52r2Instance* instance);

#endif /* s52r2_H */

