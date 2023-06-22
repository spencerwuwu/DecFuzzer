#ifndef s999r2_H
#define s999r2_H

#include "w2c2_base.h"

typedef struct s999r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s999r2Instance;

void f0(s999r2Instance*);

void f1(s999r2Instance*);

U32 f2(s999r2Instance*);

void f3(s999r2Instance*,U32);

U32 f4(s999r2Instance*,U32,U32,U32,U32,U32);

void f5(s999r2Instance*,U32,U32,U32,U32,U32);

void f6(s999r2Instance*,U32);

void f7(s999r2Instance*,U32,U32,U32);

void f8(s999r2Instance*,U32,U32,U32);

void s999r2____wasm_call_ctors(s999r2Instance*i);

void s999r2____wasm_apply_data_relocs(s999r2Instance*i);

U32 s999r2_func_1(s999r2Instance*i);

void s999r2_call_cb(s999r2Instance*i,U32 l0);

void s999r2Instantiate(s999r2Instance* instance, void* resolve(const char* module, const char* name));

void s999r2FreeInstance(s999r2Instance* instance);

#endif /* s999r2_H */

