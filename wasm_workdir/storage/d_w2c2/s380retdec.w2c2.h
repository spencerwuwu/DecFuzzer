#ifndef s380retdec_H
#define s380retdec_H

#include "w2c2_base.h"

typedef struct s380retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s380retdecInstance;

void f0(s380retdecInstance*);

void f1(s380retdecInstance*);

U32 f2(s380retdecInstance*);

void f3(s380retdecInstance*,U32);

U32 f4(s380retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s380retdecInstance*,U32,U32,U32,U32,U32);

void f6(s380retdecInstance*,U32);

void f7(s380retdecInstance*,U32,U32,U32);

void f8(s380retdecInstance*,U32,U32,U32);

void s380retdec____wasm_call_ctors(s380retdecInstance*i);

void s380retdec____wasm_apply_data_relocs(s380retdecInstance*i);

U32 s380retdec_func_1(s380retdecInstance*i);

void s380retdec_call_cb(s380retdecInstance*i,U32 l0);

void s380retdecInstantiate(s380retdecInstance* instance, void* resolve(const char* module, const char* name));

void s380retdecFreeInstance(s380retdecInstance* instance);

#endif /* s380retdec_H */
