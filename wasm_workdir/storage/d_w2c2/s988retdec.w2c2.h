#ifndef s988retdec_H
#define s988retdec_H

#include "w2c2_base.h"

typedef struct s988retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s988retdecInstance;

void f0(s988retdecInstance*);

void f1(s988retdecInstance*);

U32 f2(s988retdecInstance*);

void f3(s988retdecInstance*,U32);

U32 f4(s988retdecInstance*,U32,U32,U32,U32);

void f5(s988retdecInstance*,U32,U32,U32,U32,U32);

void f6(s988retdecInstance*,U32);

void f7(s988retdecInstance*,U32,U32,U32);

void f8(s988retdecInstance*,U32,U32,U32);

void s988retdec____wasm_call_ctors(s988retdecInstance*i);

void s988retdec____wasm_apply_data_relocs(s988retdecInstance*i);

U32 s988retdec_func_1(s988retdecInstance*i);

void s988retdec_call_cb(s988retdecInstance*i,U32 l0);

void s988retdecInstantiate(s988retdecInstance* instance, void* resolve(const char* module, const char* name));

void s988retdecFreeInstance(s988retdecInstance* instance);

#endif /* s988retdec_H */

