#ifndef s197retdec_H
#define s197retdec_H

#include "w2c2_base.h"

typedef struct s197retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s197retdecInstance;

void f0(s197retdecInstance*);

void f1(s197retdecInstance*);

U32 f2(s197retdecInstance*);

void f3(s197retdecInstance*,U32);

U32 f4(s197retdecInstance*,U32,U32,U32);

void f5(s197retdecInstance*,U32,U32,U32,U32,U32);

void f6(s197retdecInstance*,U32);

void f7(s197retdecInstance*,U32,U32,U32);

void f8(s197retdecInstance*,U32,U32,U32);

void s197retdec____wasm_call_ctors(s197retdecInstance*i);

void s197retdec____wasm_apply_data_relocs(s197retdecInstance*i);

U32 s197retdec_func_1(s197retdecInstance*i);

void s197retdec_call_cb(s197retdecInstance*i,U32 l0);

void s197retdecInstantiate(s197retdecInstance* instance, void* resolve(const char* module, const char* name));

void s197retdecFreeInstance(s197retdecInstance* instance);

#endif /* s197retdec_H */

