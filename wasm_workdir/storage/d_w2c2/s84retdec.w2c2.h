#ifndef s84retdec_H
#define s84retdec_H

#include "w2c2_base.h"

typedef struct s84retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s84retdecInstance;

void f0(s84retdecInstance*);

void f1(s84retdecInstance*);

U32 f2(s84retdecInstance*);

void f3(s84retdecInstance*,U32);

U32 f4(s84retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s84retdecInstance*,U32,U32,U32,U32,U32);

void f6(s84retdecInstance*,U32);

void f7(s84retdecInstance*,U32,U32,U32);

void f8(s84retdecInstance*,U32,U32,U32);

void s84retdec____wasm_call_ctors(s84retdecInstance*i);

void s84retdec____wasm_apply_data_relocs(s84retdecInstance*i);

U32 s84retdec_func_1(s84retdecInstance*i);

void s84retdec_call_cb(s84retdecInstance*i,U32 l0);

void s84retdecInstantiate(s84retdecInstance* instance, void* resolve(const char* module, const char* name));

void s84retdecFreeInstance(s84retdecInstance* instance);

#endif /* s84retdec_H */

