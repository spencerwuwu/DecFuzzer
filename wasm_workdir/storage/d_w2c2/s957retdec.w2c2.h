#ifndef s957retdec_H
#define s957retdec_H

#include "w2c2_base.h"

typedef struct s957retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s957retdecInstance;

void f0(s957retdecInstance*);

void f1(s957retdecInstance*);

U32 f2(s957retdecInstance*);

void f3(s957retdecInstance*,U32);

U32 f4(s957retdecInstance*,U32,U32,U32);

void f5(s957retdecInstance*,U32,U32,U32,U32,U32);

void f6(s957retdecInstance*,U32);

void f7(s957retdecInstance*,U32,U32,U32);

void f8(s957retdecInstance*,U32,U32,U32);

void s957retdec____wasm_call_ctors(s957retdecInstance*i);

void s957retdec____wasm_apply_data_relocs(s957retdecInstance*i);

U32 s957retdec_func_1(s957retdecInstance*i);

void s957retdec_call_cb(s957retdecInstance*i,U32 l0);

void s957retdecInstantiate(s957retdecInstance* instance, void* resolve(const char* module, const char* name));

void s957retdecFreeInstance(s957retdecInstance* instance);

#endif /* s957retdec_H */

