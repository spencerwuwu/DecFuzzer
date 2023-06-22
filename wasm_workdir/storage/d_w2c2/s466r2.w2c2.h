#ifndef s466r2_H
#define s466r2_H

#include "w2c2_base.h"

typedef struct s466r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s466r2Instance;

void f0(s466r2Instance*);

void f1(s466r2Instance*);

U32 f2(s466r2Instance*);

void f3(s466r2Instance*,U32);

U32 f4(s466r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s466r2Instance*,U32,U32,U32,U32,U32);

void f6(s466r2Instance*,U32);

void f7(s466r2Instance*,U32,U32,U32);

void f8(s466r2Instance*,U32,U32,U32);

void s466r2____wasm_call_ctors(s466r2Instance*i);

void s466r2____wasm_apply_data_relocs(s466r2Instance*i);

U32 s466r2_func_1(s466r2Instance*i);

void s466r2_call_cb(s466r2Instance*i,U32 l0);

void s466r2Instantiate(s466r2Instance* instance, void* resolve(const char* module, const char* name));

void s466r2FreeInstance(s466r2Instance* instance);

#endif /* s466r2_H */

