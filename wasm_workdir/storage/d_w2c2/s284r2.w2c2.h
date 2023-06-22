#ifndef s284r2_H
#define s284r2_H

#include "w2c2_base.h"

typedef struct s284r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s284r2Instance;

void f0(s284r2Instance*);

void f1(s284r2Instance*);

U32 f2(s284r2Instance*);

void f3(s284r2Instance*,U32);

U32 f4(s284r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s284r2Instance*,U32,U32,U32,U32,U32);

void f6(s284r2Instance*,U32);

void f7(s284r2Instance*,U32,U32,U32);

void f8(s284r2Instance*,U32,U32,U32);

void s284r2____wasm_call_ctors(s284r2Instance*i);

void s284r2____wasm_apply_data_relocs(s284r2Instance*i);

U32 s284r2_func_1(s284r2Instance*i);

void s284r2_call_cb(s284r2Instance*i,U32 l0);

void s284r2Instantiate(s284r2Instance* instance, void* resolve(const char* module, const char* name));

void s284r2FreeInstance(s284r2Instance* instance);

#endif /* s284r2_H */

