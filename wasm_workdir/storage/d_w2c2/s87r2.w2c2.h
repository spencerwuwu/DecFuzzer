#ifndef s87r2_H
#define s87r2_H

#include "w2c2_base.h"

typedef struct s87r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s87r2Instance;

void f0(s87r2Instance*);

void f1(s87r2Instance*);

U32 f2(s87r2Instance*);

void f3(s87r2Instance*,U32);

U32 f4(s87r2Instance*,U32,U32,U32);

void f5(s87r2Instance*,U32,U32,U32,U32,U32);

void f6(s87r2Instance*,U32);

void f7(s87r2Instance*,U32,U32,U32);

void f8(s87r2Instance*,U32,U32,U32);

void s87r2____wasm_call_ctors(s87r2Instance*i);

void s87r2____wasm_apply_data_relocs(s87r2Instance*i);

U32 s87r2_func_1(s87r2Instance*i);

void s87r2_call_cb(s87r2Instance*i,U32 l0);

void s87r2Instantiate(s87r2Instance* instance, void* resolve(const char* module, const char* name));

void s87r2FreeInstance(s87r2Instance* instance);

#endif /* s87r2_H */

