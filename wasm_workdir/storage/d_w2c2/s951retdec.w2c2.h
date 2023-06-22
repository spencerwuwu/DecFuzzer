#ifndef s951retdec_H
#define s951retdec_H

#include "w2c2_base.h"

typedef struct s951retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s951retdecInstance;

void f0(s951retdecInstance*);

void f1(s951retdecInstance*);

U32 f2(s951retdecInstance*);

void f3(s951retdecInstance*,U32);

U32 f4(s951retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s951retdecInstance*,U32,U32,U32,U32,U32);

void f6(s951retdecInstance*,U32);

void f7(s951retdecInstance*,U32,U32,U32);

void f8(s951retdecInstance*,U32,U32,U32);

void s951retdec____wasm_call_ctors(s951retdecInstance*i);

void s951retdec____wasm_apply_data_relocs(s951retdecInstance*i);

U32 s951retdec_func_1(s951retdecInstance*i);

void s951retdec_call_cb(s951retdecInstance*i,U32 l0);

void s951retdecInstantiate(s951retdecInstance* instance, void* resolve(const char* module, const char* name));

void s951retdecFreeInstance(s951retdecInstance* instance);

#endif /* s951retdec_H */

