#ifndef s36retdec_H
#define s36retdec_H

#include "w2c2_base.h"

typedef struct s36retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s36retdecInstance;

void f0(s36retdecInstance*);

void f1(s36retdecInstance*);

U32 f2(s36retdecInstance*);

void f3(s36retdecInstance*,U32);

U32 f4(s36retdecInstance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s36retdecInstance*,U32,U32,U32,U32,U32);

void f6(s36retdecInstance*,U32);

void f7(s36retdecInstance*,U32,U32,U32);

void f8(s36retdecInstance*,U32,U32,U32);

void s36retdec____wasm_call_ctors(s36retdecInstance*i);

void s36retdec____wasm_apply_data_relocs(s36retdecInstance*i);

U32 s36retdec_func_1(s36retdecInstance*i);

void s36retdec_call_cb(s36retdecInstance*i,U32 l0);

void s36retdecInstantiate(s36retdecInstance* instance, void* resolve(const char* module, const char* name));

void s36retdecFreeInstance(s36retdecInstance* instance);

#endif /* s36retdec_H */

