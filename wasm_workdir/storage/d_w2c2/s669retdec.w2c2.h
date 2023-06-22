#ifndef s669retdec_H
#define s669retdec_H

#include "w2c2_base.h"

typedef struct s669retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s669retdecInstance;

void f0(s669retdecInstance*);

void f1(s669retdecInstance*);

U32 f2(s669retdecInstance*);

void f3(s669retdecInstance*,U32);

U32 f4(s669retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s669retdecInstance*,U32,U32,U32,U32,U32);

void f6(s669retdecInstance*,U32);

void f7(s669retdecInstance*,U32,U32,U32);

void f8(s669retdecInstance*,U32,U32,U32);

void s669retdec____wasm_call_ctors(s669retdecInstance*i);

void s669retdec____wasm_apply_data_relocs(s669retdecInstance*i);

U32 s669retdec_func_1(s669retdecInstance*i);

void s669retdec_call_cb(s669retdecInstance*i,U32 l0);

void s669retdecInstantiate(s669retdecInstance* instance, void* resolve(const char* module, const char* name));

void s669retdecFreeInstance(s669retdecInstance* instance);

#endif /* s669retdec_H */

