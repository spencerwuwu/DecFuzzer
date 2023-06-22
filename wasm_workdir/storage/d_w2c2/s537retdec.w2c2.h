#ifndef s537retdec_H
#define s537retdec_H

#include "w2c2_base.h"

typedef struct s537retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s537retdecInstance;

void f0(s537retdecInstance*);

void f1(s537retdecInstance*);

U32 f2(s537retdecInstance*);

void f3(s537retdecInstance*,U32);

U32 f4(s537retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s537retdecInstance*,U32,U32,U32,U32,U32);

void f6(s537retdecInstance*,U32);

void f7(s537retdecInstance*,U32,U32,U32);

void f8(s537retdecInstance*,U32,U32,U32);

void s537retdec____wasm_call_ctors(s537retdecInstance*i);

void s537retdec____wasm_apply_data_relocs(s537retdecInstance*i);

U32 s537retdec_func_1(s537retdecInstance*i);

void s537retdec_call_cb(s537retdecInstance*i,U32 l0);

void s537retdecInstantiate(s537retdecInstance* instance, void* resolve(const char* module, const char* name));

void s537retdecFreeInstance(s537retdecInstance* instance);

#endif /* s537retdec_H */

