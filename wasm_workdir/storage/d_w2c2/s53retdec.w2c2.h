#ifndef s53retdec_H
#define s53retdec_H

#include "w2c2_base.h"

typedef struct s53retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s53retdecInstance;

void f0(s53retdecInstance*);

void f1(s53retdecInstance*);

U32 f2(s53retdecInstance*);

void f3(s53retdecInstance*,U32);

U32 f4(s53retdecInstance*,U32,U32,U32,U32,U32);

void f5(s53retdecInstance*,U32,U32,U32,U32,U32);

void f6(s53retdecInstance*,U32);

void f7(s53retdecInstance*,U32,U32,U32);

void f8(s53retdecInstance*,U32,U32,U32);

void s53retdec____wasm_call_ctors(s53retdecInstance*i);

void s53retdec____wasm_apply_data_relocs(s53retdecInstance*i);

U32 s53retdec_func_1(s53retdecInstance*i);

void s53retdec_call_cb(s53retdecInstance*i,U32 l0);

void s53retdecInstantiate(s53retdecInstance* instance, void* resolve(const char* module, const char* name));

void s53retdecFreeInstance(s53retdecInstance* instance);

#endif /* s53retdec_H */

