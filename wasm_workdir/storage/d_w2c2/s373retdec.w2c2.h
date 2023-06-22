#ifndef s373retdec_H
#define s373retdec_H

#include "w2c2_base.h"

typedef struct s373retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s373retdecInstance;

void f0(s373retdecInstance*);

void f1(s373retdecInstance*);

U32 f2(s373retdecInstance*);

void f3(s373retdecInstance*,U32);

U32 f4(s373retdecInstance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s373retdecInstance*,U32,U32,U32,U32,U32);

void f6(s373retdecInstance*,U32);

void f7(s373retdecInstance*,U32,U32,U32);

void f8(s373retdecInstance*,U32,U32,U32);

void s373retdec____wasm_call_ctors(s373retdecInstance*i);

void s373retdec____wasm_apply_data_relocs(s373retdecInstance*i);

U32 s373retdec_func_1(s373retdecInstance*i);

void s373retdec_call_cb(s373retdecInstance*i,U32 l0);

void s373retdecInstantiate(s373retdecInstance* instance, void* resolve(const char* module, const char* name));

void s373retdecFreeInstance(s373retdecInstance* instance);

#endif /* s373retdec_H */

