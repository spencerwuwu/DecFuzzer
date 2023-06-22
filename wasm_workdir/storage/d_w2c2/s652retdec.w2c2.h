#ifndef s652retdec_H
#define s652retdec_H

#include "w2c2_base.h"

typedef struct s652retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s652retdecInstance;

void f0(s652retdecInstance*);

void f1(s652retdecInstance*);

U32 f2(s652retdecInstance*);

void f3(s652retdecInstance*,U32);

U32 f4(s652retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s652retdecInstance*,U32,U32,U32,U32,U32);

void f6(s652retdecInstance*,U32);

void f7(s652retdecInstance*,U32,U32,U32);

void f8(s652retdecInstance*,U32,U32,U32);

void s652retdec____wasm_call_ctors(s652retdecInstance*i);

void s652retdec____wasm_apply_data_relocs(s652retdecInstance*i);

U32 s652retdec_func_1(s652retdecInstance*i);

void s652retdec_call_cb(s652retdecInstance*i,U32 l0);

void s652retdecInstantiate(s652retdecInstance* instance, void* resolve(const char* module, const char* name));

void s652retdecFreeInstance(s652retdecInstance* instance);

#endif /* s652retdec_H */

