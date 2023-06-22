#ifndef s877retdec_H
#define s877retdec_H

#include "w2c2_base.h"

typedef struct s877retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s877retdecInstance;

void f0(s877retdecInstance*);

void f1(s877retdecInstance*);

U32 f2(s877retdecInstance*);

void f3(s877retdecInstance*,U32);

U32 f4(s877retdecInstance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s877retdecInstance*,U32,U32,U32,U32,U32);

void f6(s877retdecInstance*,U32);

void f7(s877retdecInstance*,U32,U32,U32);

void f8(s877retdecInstance*,U32,U32,U32);

void s877retdec____wasm_call_ctors(s877retdecInstance*i);

void s877retdec____wasm_apply_data_relocs(s877retdecInstance*i);

U32 s877retdec_func_1(s877retdecInstance*i);

void s877retdec_call_cb(s877retdecInstance*i,U32 l0);

void s877retdecInstantiate(s877retdecInstance* instance, void* resolve(const char* module, const char* name));

void s877retdecFreeInstance(s877retdecInstance* instance);

#endif /* s877retdec_H */

