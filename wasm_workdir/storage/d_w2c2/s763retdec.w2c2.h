#ifndef s763retdec_H
#define s763retdec_H

#include "w2c2_base.h"

typedef struct s763retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s763retdecInstance;

void f0(s763retdecInstance*);

void f1(s763retdecInstance*);

U32 f2(s763retdecInstance*);

void f3(s763retdecInstance*,U32);

U32 f4(s763retdecInstance*,U32,U32,U32,U32);

void f5(s763retdecInstance*,U32,U32,U32,U32,U32);

void f6(s763retdecInstance*,U32);

void f7(s763retdecInstance*,U32,U32,U32);

void f8(s763retdecInstance*,U32,U32,U32);

void s763retdec____wasm_call_ctors(s763retdecInstance*i);

void s763retdec____wasm_apply_data_relocs(s763retdecInstance*i);

U32 s763retdec_func_1(s763retdecInstance*i);

void s763retdec_call_cb(s763retdecInstance*i,U32 l0);

void s763retdecInstantiate(s763retdecInstance* instance, void* resolve(const char* module, const char* name));

void s763retdecFreeInstance(s763retdecInstance* instance);

#endif /* s763retdec_H */

