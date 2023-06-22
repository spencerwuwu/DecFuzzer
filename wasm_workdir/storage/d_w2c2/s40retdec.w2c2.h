#ifndef s40retdec_H
#define s40retdec_H

#include "w2c2_base.h"

typedef struct s40retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s40retdecInstance;

void f0(s40retdecInstance*);

void f1(s40retdecInstance*);

U32 f2(s40retdecInstance*);

void f3(s40retdecInstance*,U32);

U32 f4(s40retdecInstance*,U32,U32,U32,U32,U32);

void f5(s40retdecInstance*,U32,U32,U32,U32,U32);

void f6(s40retdecInstance*,U32);

void f7(s40retdecInstance*,U32,U32,U32);

void f8(s40retdecInstance*,U32,U32,U32);

void s40retdec____wasm_call_ctors(s40retdecInstance*i);

void s40retdec____wasm_apply_data_relocs(s40retdecInstance*i);

U32 s40retdec_func_1(s40retdecInstance*i);

void s40retdec_call_cb(s40retdecInstance*i,U32 l0);

void s40retdecInstantiate(s40retdecInstance* instance, void* resolve(const char* module, const char* name));

void s40retdecFreeInstance(s40retdecInstance* instance);

#endif /* s40retdec_H */

