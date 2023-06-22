#ifndef s256r2_H
#define s256r2_H

#include "w2c2_base.h"

typedef struct s256r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s256r2Instance;

void f0(s256r2Instance*);

void f1(s256r2Instance*);

U32 f2(s256r2Instance*);

void f3(s256r2Instance*,U32);

U32 f4(s256r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s256r2Instance*,U32,U32,U32,U32,U32);

void f6(s256r2Instance*,U32);

void f7(s256r2Instance*,U32,U32,U32);

void f8(s256r2Instance*,U32,U32,U32);

void s256r2____wasm_call_ctors(s256r2Instance*i);

void s256r2____wasm_apply_data_relocs(s256r2Instance*i);

U32 s256r2_func_1(s256r2Instance*i);

void s256r2_call_cb(s256r2Instance*i,U32 l0);

void s256r2Instantiate(s256r2Instance* instance, void* resolve(const char* module, const char* name));

void s256r2FreeInstance(s256r2Instance* instance);

#endif /* s256r2_H */

