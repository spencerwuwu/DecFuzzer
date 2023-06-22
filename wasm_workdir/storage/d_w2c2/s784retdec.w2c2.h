#ifndef s784retdec_H
#define s784retdec_H

#include "w2c2_base.h"

typedef struct s784retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s784retdecInstance;

void f0(s784retdecInstance*);

void f1(s784retdecInstance*);

U32 f2(s784retdecInstance*);

void f3(s784retdecInstance*,U32);

U32 f4(s784retdecInstance*,U32,U32,U32);

void f5(s784retdecInstance*,U32,U32,U32,U32,U32);

void f6(s784retdecInstance*,U32);

void f7(s784retdecInstance*,U32,U32,U32);

void f8(s784retdecInstance*,U32,U32,U32);

void s784retdec____wasm_call_ctors(s784retdecInstance*i);

void s784retdec____wasm_apply_data_relocs(s784retdecInstance*i);

U32 s784retdec_func_1(s784retdecInstance*i);

void s784retdec_call_cb(s784retdecInstance*i,U32 l0);

void s784retdecInstantiate(s784retdecInstance* instance, void* resolve(const char* module, const char* name));

void s784retdecFreeInstance(s784retdecInstance* instance);

#endif /* s784retdec_H */

