#ifndef s619retdec_H
#define s619retdec_H

#include "w2c2_base.h"

typedef struct s619retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s619retdecInstance;

void f0(s619retdecInstance*);

void f1(s619retdecInstance*);

U32 f2(s619retdecInstance*);

void f3(s619retdecInstance*,U32);

U32 f4(s619retdecInstance*,U32,U32,U32);

void f5(s619retdecInstance*,U32,U32,U32,U32,U32);

void f6(s619retdecInstance*,U32);

void f7(s619retdecInstance*,U32,U32,U32);

void f8(s619retdecInstance*,U32,U32,U32);

void s619retdec____wasm_call_ctors(s619retdecInstance*i);

void s619retdec____wasm_apply_data_relocs(s619retdecInstance*i);

U32 s619retdec_func_1(s619retdecInstance*i);

void s619retdec_call_cb(s619retdecInstance*i,U32 l0);

void s619retdecInstantiate(s619retdecInstance* instance, void* resolve(const char* module, const char* name));

void s619retdecFreeInstance(s619retdecInstance* instance);

#endif /* s619retdec_H */

