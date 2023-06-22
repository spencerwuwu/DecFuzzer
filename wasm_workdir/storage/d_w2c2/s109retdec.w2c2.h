#ifndef s109retdec_H
#define s109retdec_H

#include "w2c2_base.h"

typedef struct s109retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s109retdecInstance;

void f0(s109retdecInstance*);

void f1(s109retdecInstance*);

U32 f2(s109retdecInstance*);

void f3(s109retdecInstance*,U32);

U32 f4(s109retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s109retdecInstance*,U32,U32,U32,U32,U32);

void f6(s109retdecInstance*,U32);

void f7(s109retdecInstance*,U32,U32,U32);

void f8(s109retdecInstance*,U32,U32,U32);

void s109retdec____wasm_call_ctors(s109retdecInstance*i);

void s109retdec____wasm_apply_data_relocs(s109retdecInstance*i);

U32 s109retdec_func_1(s109retdecInstance*i);

void s109retdec_call_cb(s109retdecInstance*i,U32 l0);

void s109retdecInstantiate(s109retdecInstance* instance, void* resolve(const char* module, const char* name));

void s109retdecFreeInstance(s109retdecInstance* instance);

#endif /* s109retdec_H */

