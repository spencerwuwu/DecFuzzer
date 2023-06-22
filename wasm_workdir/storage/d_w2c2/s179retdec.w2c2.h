#ifndef s179retdec_H
#define s179retdec_H

#include "w2c2_base.h"

typedef struct s179retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s179retdecInstance;

void f0(s179retdecInstance*);

void f1(s179retdecInstance*);

U32 f2(s179retdecInstance*);

void f3(s179retdecInstance*,U32);

U32 f4(s179retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s179retdecInstance*,U32,U32,U32,U32,U32);

void f6(s179retdecInstance*,U32);

void f7(s179retdecInstance*,U32,U32,U32);

void f8(s179retdecInstance*,U32,U32,U32);

void s179retdec____wasm_call_ctors(s179retdecInstance*i);

void s179retdec____wasm_apply_data_relocs(s179retdecInstance*i);

U32 s179retdec_func_1(s179retdecInstance*i);

void s179retdec_call_cb(s179retdecInstance*i,U32 l0);

void s179retdecInstantiate(s179retdecInstance* instance, void* resolve(const char* module, const char* name));

void s179retdecFreeInstance(s179retdecInstance* instance);

#endif /* s179retdec_H */

