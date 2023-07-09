#ifndef s332r2_H
#define s332r2_H

#include "w2c2_base.h"

typedef struct s332r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s332r2Instance;

void f0(s332r2Instance*);

void f1(s332r2Instance*);

U32 f2(s332r2Instance*);

void f3(s332r2Instance*,U32);

U32 f4(s332r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s332r2Instance*,U32,U32,U32,U32,U32);

void f6(s332r2Instance*,U32);

void f7(s332r2Instance*,U32,U32,U32);

void f8(s332r2Instance*,U32,U32,U32);

void s332r2____wasm_call_ctors(s332r2Instance*i);

void s332r2____wasm_apply_data_relocs(s332r2Instance*i);

U32 s332r2_func_1(s332r2Instance*i);

void s332r2_call_cb(s332r2Instance*i,U32 l0);

void s332r2Instantiate(s332r2Instance* instance, void* resolve(const char* module, const char* name));

void s332r2FreeInstance(s332r2Instance* instance);

#endif /* s332r2_H */
