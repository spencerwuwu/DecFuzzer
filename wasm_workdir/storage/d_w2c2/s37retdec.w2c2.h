#ifndef s37retdec_H
#define s37retdec_H

#include "w2c2_base.h"

typedef struct s37retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s37retdecInstance;

void f0(s37retdecInstance*);

void f1(s37retdecInstance*);

U32 f2(s37retdecInstance*);

void f3(s37retdecInstance*,U32);

U32 f4(s37retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s37retdecInstance*,U32,U32,U32,U32,U32);

void f6(s37retdecInstance*,U32);

void f7(s37retdecInstance*,U32,U32,U32);

void f8(s37retdecInstance*,U32,U32,U32);

void s37retdec____wasm_call_ctors(s37retdecInstance*i);

void s37retdec____wasm_apply_data_relocs(s37retdecInstance*i);

U32 s37retdec_func_1(s37retdecInstance*i);

void s37retdec_call_cb(s37retdecInstance*i,U32 l0);

void s37retdecInstantiate(s37retdecInstance* instance, void* resolve(const char* module, const char* name));

void s37retdecFreeInstance(s37retdecInstance* instance);

#endif /* s37retdec_H */

