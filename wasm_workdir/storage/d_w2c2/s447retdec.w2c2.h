#ifndef s447retdec_H
#define s447retdec_H

#include "w2c2_base.h"

typedef struct s447retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s447retdecInstance;

void f0(s447retdecInstance*);

void f1(s447retdecInstance*);

U32 f2(s447retdecInstance*);

void f3(s447retdecInstance*,U32);

U32 f4(s447retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s447retdecInstance*,U32,U32,U32,U32,U32);

void f6(s447retdecInstance*,U32);

void f7(s447retdecInstance*,U32,U32,U32);

void f8(s447retdecInstance*,U32,U32,U32);

void s447retdec____wasm_call_ctors(s447retdecInstance*i);

void s447retdec____wasm_apply_data_relocs(s447retdecInstance*i);

U32 s447retdec_func_1(s447retdecInstance*i);

void s447retdec_call_cb(s447retdecInstance*i,U32 l0);

void s447retdecInstantiate(s447retdecInstance* instance, void* resolve(const char* module, const char* name));

void s447retdecFreeInstance(s447retdecInstance* instance);

#endif /* s447retdec_H */

