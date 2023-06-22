#ifndef s350retdec_H
#define s350retdec_H

#include "w2c2_base.h"

typedef struct s350retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s350retdecInstance;

void f0(s350retdecInstance*);

void f1(s350retdecInstance*);

U32 f2(s350retdecInstance*);

void f3(s350retdecInstance*,U32);

U32 f4(s350retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s350retdecInstance*,U32,U32,U32,U32,U32);

void f6(s350retdecInstance*,U32);

void f7(s350retdecInstance*,U32,U32,U32);

void f8(s350retdecInstance*,U32,U32,U32);

void s350retdec____wasm_call_ctors(s350retdecInstance*i);

void s350retdec____wasm_apply_data_relocs(s350retdecInstance*i);

U32 s350retdec_func_1(s350retdecInstance*i);

void s350retdec_call_cb(s350retdecInstance*i,U32 l0);

void s350retdecInstantiate(s350retdecInstance* instance, void* resolve(const char* module, const char* name));

void s350retdecFreeInstance(s350retdecInstance* instance);

#endif /* s350retdec_H */

