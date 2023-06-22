#ifndef s905retdec_H
#define s905retdec_H

#include "w2c2_base.h"

typedef struct s905retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s905retdecInstance;

void f0(s905retdecInstance*);

void f1(s905retdecInstance*);

U32 f2(s905retdecInstance*);

void f3(s905retdecInstance*,U32);

U32 f4(s905retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s905retdecInstance*,U32,U32,U32,U32,U32);

void f6(s905retdecInstance*,U32);

void f7(s905retdecInstance*,U32,U32,U32);

void f8(s905retdecInstance*,U32,U32,U32);

void s905retdec____wasm_call_ctors(s905retdecInstance*i);

void s905retdec____wasm_apply_data_relocs(s905retdecInstance*i);

U32 s905retdec_func_1(s905retdecInstance*i);

void s905retdec_call_cb(s905retdecInstance*i,U32 l0);

void s905retdecInstantiate(s905retdecInstance* instance, void* resolve(const char* module, const char* name));

void s905retdecFreeInstance(s905retdecInstance* instance);

#endif /* s905retdec_H */

