#ifndef s133retdec_H
#define s133retdec_H

#include "w2c2_base.h"

typedef struct s133retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s133retdecInstance;

void f0(s133retdecInstance*);

void f1(s133retdecInstance*);

U32 f2(s133retdecInstance*);

void f3(s133retdecInstance*,U32);

U32 f4(s133retdecInstance*,U32,U32,U32);

void f5(s133retdecInstance*,U32,U32,U32,U32,U32);

void f6(s133retdecInstance*,U32);

void f7(s133retdecInstance*,U32,U32,U32);

void f8(s133retdecInstance*,U32,U32,U32);

void s133retdec____wasm_call_ctors(s133retdecInstance*i);

void s133retdec____wasm_apply_data_relocs(s133retdecInstance*i);

U32 s133retdec_func_1(s133retdecInstance*i);

void s133retdec_call_cb(s133retdecInstance*i,U32 l0);

void s133retdecInstantiate(s133retdecInstance* instance, void* resolve(const char* module, const char* name));

void s133retdecFreeInstance(s133retdecInstance* instance);

#endif /* s133retdec_H */

