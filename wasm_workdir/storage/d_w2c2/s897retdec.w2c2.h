#ifndef s897retdec_H
#define s897retdec_H

#include "w2c2_base.h"

typedef struct s897retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s897retdecInstance;

void f0(s897retdecInstance*);

void f1(s897retdecInstance*);

U32 f2(s897retdecInstance*);

void f3(s897retdecInstance*,U32);

U32 f4(s897retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s897retdecInstance*,U32,U32,U32,U32,U32);

void f6(s897retdecInstance*,U32);

void f7(s897retdecInstance*,U32,U32,U32);

void f8(s897retdecInstance*,U32,U32,U32);

void s897retdec____wasm_call_ctors(s897retdecInstance*i);

void s897retdec____wasm_apply_data_relocs(s897retdecInstance*i);

U32 s897retdec_func_1(s897retdecInstance*i);

void s897retdec_call_cb(s897retdecInstance*i,U32 l0);

void s897retdecInstantiate(s897retdecInstance* instance, void* resolve(const char* module, const char* name));

void s897retdecFreeInstance(s897retdecInstance* instance);

#endif /* s897retdec_H */

