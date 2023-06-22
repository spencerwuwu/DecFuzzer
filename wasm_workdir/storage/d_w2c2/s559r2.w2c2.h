#ifndef s559r2_H
#define s559r2_H

#include "w2c2_base.h"

typedef struct s559r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s559r2Instance;

void f0(s559r2Instance*);

void f1(s559r2Instance*);

U32 f2(s559r2Instance*);

void f3(s559r2Instance*,U32);

U32 f4(s559r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s559r2Instance*,U32,U32,U32,U32,U32);

void f6(s559r2Instance*,U32);

void f7(s559r2Instance*,U32,U32,U32);

void f8(s559r2Instance*,U32,U32,U32);

void s559r2____wasm_call_ctors(s559r2Instance*i);

void s559r2____wasm_apply_data_relocs(s559r2Instance*i);

U32 s559r2_func_1(s559r2Instance*i);

void s559r2_call_cb(s559r2Instance*i,U32 l0);

void s559r2Instantiate(s559r2Instance* instance, void* resolve(const char* module, const char* name));

void s559r2FreeInstance(s559r2Instance* instance);

#endif /* s559r2_H */

