#ifndef s672retdec_H
#define s672retdec_H

#include "w2c2_base.h"

typedef struct s672retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s672retdecInstance;

void f0(s672retdecInstance*);

void f1(s672retdecInstance*);

U32 f2(s672retdecInstance*);

void f3(s672retdecInstance*,U32);

U32 f4(s672retdecInstance*,U32,U32,U32,U32);

void f5(s672retdecInstance*,U32,U32,U32,U32,U32);

void f6(s672retdecInstance*,U32);

void f7(s672retdecInstance*,U32,U32,U32);

void f8(s672retdecInstance*,U32,U32,U32);

void s672retdec____wasm_call_ctors(s672retdecInstance*i);

void s672retdec____wasm_apply_data_relocs(s672retdecInstance*i);

U32 s672retdec_func_1(s672retdecInstance*i);

void s672retdec_call_cb(s672retdecInstance*i,U32 l0);

void s672retdecInstantiate(s672retdecInstance* instance, void* resolve(const char* module, const char* name));

void s672retdecFreeInstance(s672retdecInstance* instance);

#endif /* s672retdec_H */

