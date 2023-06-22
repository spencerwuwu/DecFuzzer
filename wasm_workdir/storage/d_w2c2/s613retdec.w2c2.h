#ifndef s613retdec_H
#define s613retdec_H

#include "w2c2_base.h"

typedef struct s613retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s613retdecInstance;

void f0(s613retdecInstance*);

void f1(s613retdecInstance*);

U32 f2(s613retdecInstance*);

void f3(s613retdecInstance*,U32);

U32 f4(s613retdecInstance*,U32,U32,U32);

void f5(s613retdecInstance*,U32,U32,U32,U32,U32);

void f6(s613retdecInstance*,U32);

void f7(s613retdecInstance*,U32,U32,U32);

void f8(s613retdecInstance*,U32,U32,U32);

void s613retdec____wasm_call_ctors(s613retdecInstance*i);

void s613retdec____wasm_apply_data_relocs(s613retdecInstance*i);

U32 s613retdec_func_1(s613retdecInstance*i);

void s613retdec_call_cb(s613retdecInstance*i,U32 l0);

void s613retdecInstantiate(s613retdecInstance* instance, void* resolve(const char* module, const char* name));

void s613retdecFreeInstance(s613retdecInstance* instance);

#endif /* s613retdec_H */

