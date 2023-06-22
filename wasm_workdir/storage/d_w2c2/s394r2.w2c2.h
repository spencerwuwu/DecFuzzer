#ifndef s394r2_H
#define s394r2_H

#include "w2c2_base.h"

typedef struct s394r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s394r2Instance;

void f0(s394r2Instance*);

void f1(s394r2Instance*);

U32 f2(s394r2Instance*);

void f3(s394r2Instance*,U32);

U32 f4(s394r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s394r2Instance*,U32,U32,U32,U32,U32);

void f6(s394r2Instance*,U32);

void f7(s394r2Instance*,U32,U32,U32);

void f8(s394r2Instance*,U32,U32,U32);

void s394r2____wasm_call_ctors(s394r2Instance*i);

void s394r2____wasm_apply_data_relocs(s394r2Instance*i);

U32 s394r2_func_1(s394r2Instance*i);

void s394r2_call_cb(s394r2Instance*i,U32 l0);

void s394r2Instantiate(s394r2Instance* instance, void* resolve(const char* module, const char* name));

void s394r2FreeInstance(s394r2Instance* instance);

#endif /* s394r2_H */

