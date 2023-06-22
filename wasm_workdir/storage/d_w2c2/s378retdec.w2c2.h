#ifndef s378retdec_H
#define s378retdec_H

#include "w2c2_base.h"

typedef struct s378retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s378retdecInstance;

void f0(s378retdecInstance*);

void f1(s378retdecInstance*);

U32 f2(s378retdecInstance*);

void f3(s378retdecInstance*,U32);

U32 f4(s378retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s378retdecInstance*,U32,U32,U32,U32,U32);

void f6(s378retdecInstance*,U32);

void f7(s378retdecInstance*,U32,U32,U32);

void f8(s378retdecInstance*,U32,U32,U32);

void s378retdec____wasm_call_ctors(s378retdecInstance*i);

void s378retdec____wasm_apply_data_relocs(s378retdecInstance*i);

U32 s378retdec_func_1(s378retdecInstance*i);

void s378retdec_call_cb(s378retdecInstance*i,U32 l0);

void s378retdecInstantiate(s378retdecInstance* instance, void* resolve(const char* module, const char* name));

void s378retdecFreeInstance(s378retdecInstance* instance);

#endif /* s378retdec_H */

