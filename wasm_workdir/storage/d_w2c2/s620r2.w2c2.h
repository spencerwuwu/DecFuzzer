#ifndef s620r2_H
#define s620r2_H

#include "w2c2_base.h"

typedef struct s620r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s620r2Instance;

void f0(s620r2Instance*);

void f1(s620r2Instance*);

U32 f2(s620r2Instance*);

void f3(s620r2Instance*,U32);

U32 f4(s620r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s620r2Instance*,U32,U32,U32,U32,U32);

void f6(s620r2Instance*,U32);

void f7(s620r2Instance*,U32,U32,U32);

void f8(s620r2Instance*,U32,U32,U32);

void s620r2____wasm_call_ctors(s620r2Instance*i);

void s620r2____wasm_apply_data_relocs(s620r2Instance*i);

U32 s620r2_func_1(s620r2Instance*i);

void s620r2_call_cb(s620r2Instance*i,U32 l0);

void s620r2Instantiate(s620r2Instance* instance, void* resolve(const char* module, const char* name));

void s620r2FreeInstance(s620r2Instance* instance);

#endif /* s620r2_H */

