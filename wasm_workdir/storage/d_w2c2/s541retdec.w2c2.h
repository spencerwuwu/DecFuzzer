#ifndef s541retdec_H
#define s541retdec_H

#include "w2c2_base.h"

typedef struct s541retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s541retdecInstance;

void f0(s541retdecInstance*);

void f1(s541retdecInstance*);

U32 f2(s541retdecInstance*);

void f3(s541retdecInstance*,U32);

U32 f4(s541retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s541retdecInstance*,U32,U32,U32,U32,U32);

void f6(s541retdecInstance*,U32);

void f7(s541retdecInstance*,U32,U32,U32);

void f8(s541retdecInstance*,U32,U32,U32);

void s541retdec____wasm_call_ctors(s541retdecInstance*i);

void s541retdec____wasm_apply_data_relocs(s541retdecInstance*i);

U32 s541retdec_func_1(s541retdecInstance*i);

void s541retdec_call_cb(s541retdecInstance*i,U32 l0);

void s541retdecInstantiate(s541retdecInstance* instance, void* resolve(const char* module, const char* name));

void s541retdecFreeInstance(s541retdecInstance* instance);

#endif /* s541retdec_H */

