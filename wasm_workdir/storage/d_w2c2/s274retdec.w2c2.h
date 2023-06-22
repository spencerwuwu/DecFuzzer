#ifndef s274retdec_H
#define s274retdec_H

#include "w2c2_base.h"

typedef struct s274retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s274retdecInstance;

void f0(s274retdecInstance*);

void f1(s274retdecInstance*);

U32 f2(s274retdecInstance*);

void f3(s274retdecInstance*,U32);

U32 f4(s274retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s274retdecInstance*,U32,U32,U32,U32,U32);

void f6(s274retdecInstance*,U32);

void f7(s274retdecInstance*,U32,U32,U32);

void f8(s274retdecInstance*,U32,U32,U32);

void s274retdec____wasm_call_ctors(s274retdecInstance*i);

void s274retdec____wasm_apply_data_relocs(s274retdecInstance*i);

U32 s274retdec_func_1(s274retdecInstance*i);

void s274retdec_call_cb(s274retdecInstance*i,U32 l0);

void s274retdecInstantiate(s274retdecInstance* instance, void* resolve(const char* module, const char* name));

void s274retdecFreeInstance(s274retdecInstance* instance);

#endif /* s274retdec_H */

