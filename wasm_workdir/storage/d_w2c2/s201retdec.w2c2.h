#ifndef s201retdec_H
#define s201retdec_H

#include "w2c2_base.h"

typedef struct s201retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s201retdecInstance;

void f0(s201retdecInstance*);

void f1(s201retdecInstance*);

U32 f2(s201retdecInstance*);

void f3(s201retdecInstance*,U32);

U32 f4(s201retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s201retdecInstance*,U32,U32,U32,U32,U32);

void f6(s201retdecInstance*,U32);

void f7(s201retdecInstance*,U32,U32,U32);

void f8(s201retdecInstance*,U32,U32,U32);

void s201retdec____wasm_call_ctors(s201retdecInstance*i);

void s201retdec____wasm_apply_data_relocs(s201retdecInstance*i);

U32 s201retdec_func_1(s201retdecInstance*i);

void s201retdec_call_cb(s201retdecInstance*i,U32 l0);

void s201retdecInstantiate(s201retdecInstance* instance, void* resolve(const char* module, const char* name));

void s201retdecFreeInstance(s201retdecInstance* instance);

#endif /* s201retdec_H */

