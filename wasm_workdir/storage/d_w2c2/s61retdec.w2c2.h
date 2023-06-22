#ifndef s61retdec_H
#define s61retdec_H

#include "w2c2_base.h"

typedef struct s61retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s61retdecInstance;

void f0(s61retdecInstance*);

void f1(s61retdecInstance*);

U32 f2(s61retdecInstance*);

void f3(s61retdecInstance*,U32);

U32 f4(s61retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s61retdecInstance*,U32,U32,U32,U32,U32);

void f6(s61retdecInstance*,U32);

void f7(s61retdecInstance*,U32,U32,U32);

void f8(s61retdecInstance*,U32,U32,U32);

void s61retdec____wasm_call_ctors(s61retdecInstance*i);

void s61retdec____wasm_apply_data_relocs(s61retdecInstance*i);

U32 s61retdec_func_1(s61retdecInstance*i);

void s61retdec_call_cb(s61retdecInstance*i,U32 l0);

void s61retdecInstantiate(s61retdecInstance* instance, void* resolve(const char* module, const char* name));

void s61retdecFreeInstance(s61retdecInstance* instance);

#endif /* s61retdec_H */

