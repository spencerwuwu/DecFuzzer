#ifndef s773retdec_H
#define s773retdec_H

#include "w2c2_base.h"

typedef struct s773retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s773retdecInstance;

void f0(s773retdecInstance*);

void f1(s773retdecInstance*);

U32 f2(s773retdecInstance*);

void f3(s773retdecInstance*,U32);

U32 f4(s773retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s773retdecInstance*,U32,U32,U32,U32,U32);

void f6(s773retdecInstance*,U32);

void f7(s773retdecInstance*,U32,U32,U32);

void f8(s773retdecInstance*,U32,U32,U32);

void s773retdec____wasm_call_ctors(s773retdecInstance*i);

void s773retdec____wasm_apply_data_relocs(s773retdecInstance*i);

U32 s773retdec_func_1(s773retdecInstance*i);

void s773retdec_call_cb(s773retdecInstance*i,U32 l0);

void s773retdecInstantiate(s773retdecInstance* instance, void* resolve(const char* module, const char* name));

void s773retdecFreeInstance(s773retdecInstance* instance);

#endif /* s773retdec_H */

