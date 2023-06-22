#ifndef s229retdec_H
#define s229retdec_H

#include "w2c2_base.h"

typedef struct s229retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s229retdecInstance;

void f0(s229retdecInstance*);

void f1(s229retdecInstance*);

U32 f2(s229retdecInstance*);

void f3(s229retdecInstance*,U32);

U32 f4(s229retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s229retdecInstance*,U32,U32,U32,U32,U32);

void f6(s229retdecInstance*,U32);

void f7(s229retdecInstance*,U32,U32,U32);

void f8(s229retdecInstance*,U32,U32,U32);

void s229retdec____wasm_call_ctors(s229retdecInstance*i);

void s229retdec____wasm_apply_data_relocs(s229retdecInstance*i);

U32 s229retdec_func_1(s229retdecInstance*i);

void s229retdec_call_cb(s229retdecInstance*i,U32 l0);

void s229retdecInstantiate(s229retdecInstance* instance, void* resolve(const char* module, const char* name));

void s229retdecFreeInstance(s229retdecInstance* instance);

#endif /* s229retdec_H */

