#ifndef s779retdec_H
#define s779retdec_H

#include "w2c2_base.h"

typedef struct s779retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s779retdecInstance;

void f0(s779retdecInstance*);

void f1(s779retdecInstance*);

U32 f2(s779retdecInstance*);

void f3(s779retdecInstance*,U32);

U32 f4(s779retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s779retdecInstance*,U32,U32,U32,U32,U32);

void f6(s779retdecInstance*,U32);

void f7(s779retdecInstance*,U32,U32,U32);

void f8(s779retdecInstance*,U32,U32,U32);

void s779retdec____wasm_call_ctors(s779retdecInstance*i);

void s779retdec____wasm_apply_data_relocs(s779retdecInstance*i);

U32 s779retdec_func_1(s779retdecInstance*i);

void s779retdec_call_cb(s779retdecInstance*i,U32 l0);

void s779retdecInstantiate(s779retdecInstance* instance, void* resolve(const char* module, const char* name));

void s779retdecFreeInstance(s779retdecInstance* instance);

#endif /* s779retdec_H */

