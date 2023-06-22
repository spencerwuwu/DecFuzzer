#ifndef s65retdec_H
#define s65retdec_H

#include "w2c2_base.h"

typedef struct s65retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s65retdecInstance;

void f0(s65retdecInstance*);

void f1(s65retdecInstance*);

U32 f2(s65retdecInstance*);

void f3(s65retdecInstance*,U32);

U32 f4(s65retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s65retdecInstance*,U32,U32,U32,U32,U32);

void f6(s65retdecInstance*,U32);

void f7(s65retdecInstance*,U32,U32,U32);

void f8(s65retdecInstance*,U32,U32,U32);

void s65retdec____wasm_call_ctors(s65retdecInstance*i);

void s65retdec____wasm_apply_data_relocs(s65retdecInstance*i);

U32 s65retdec_func_1(s65retdecInstance*i);

void s65retdec_call_cb(s65retdecInstance*i,U32 l0);

void s65retdecInstantiate(s65retdecInstance* instance, void* resolve(const char* module, const char* name));

void s65retdecFreeInstance(s65retdecInstance* instance);

#endif /* s65retdec_H */

