#ifndef s904retdec_H
#define s904retdec_H

#include "w2c2_base.h"

typedef struct s904retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s904retdecInstance;

void f0(s904retdecInstance*);

void f1(s904retdecInstance*);

U32 f2(s904retdecInstance*);

void f3(s904retdecInstance*,U32);

U32 f4(s904retdecInstance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s904retdecInstance*,U32,U32,U32,U32,U32);

void f6(s904retdecInstance*,U32);

void f7(s904retdecInstance*,U32,U32,U32);

void f8(s904retdecInstance*,U32,U32,U32);

void s904retdec____wasm_call_ctors(s904retdecInstance*i);

void s904retdec____wasm_apply_data_relocs(s904retdecInstance*i);

U32 s904retdec_func_1(s904retdecInstance*i);

void s904retdec_call_cb(s904retdecInstance*i,U32 l0);

void s904retdecInstantiate(s904retdecInstance* instance, void* resolve(const char* module, const char* name));

void s904retdecFreeInstance(s904retdecInstance* instance);

#endif /* s904retdec_H */

