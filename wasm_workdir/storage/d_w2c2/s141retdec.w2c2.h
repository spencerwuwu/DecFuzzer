#ifndef s141retdec_H
#define s141retdec_H

#include "w2c2_base.h"

typedef struct s141retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s141retdecInstance;

void f0(s141retdecInstance*);

void f1(s141retdecInstance*);

U32 f2(s141retdecInstance*);

void f3(s141retdecInstance*,U32);

U32 f4(s141retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s141retdecInstance*,U32,U32,U32,U32,U32);

void f6(s141retdecInstance*,U32);

void f7(s141retdecInstance*,U32,U32,U32);

void f8(s141retdecInstance*,U32,U32,U32);

void s141retdec____wasm_call_ctors(s141retdecInstance*i);

void s141retdec____wasm_apply_data_relocs(s141retdecInstance*i);

U32 s141retdec_func_1(s141retdecInstance*i);

void s141retdec_call_cb(s141retdecInstance*i,U32 l0);

void s141retdecInstantiate(s141retdecInstance* instance, void* resolve(const char* module, const char* name));

void s141retdecFreeInstance(s141retdecInstance* instance);

#endif /* s141retdec_H */

