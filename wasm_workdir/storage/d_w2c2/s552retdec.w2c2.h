#ifndef s552retdec_H
#define s552retdec_H

#include "w2c2_base.h"

typedef struct s552retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s552retdecInstance;

void f0(s552retdecInstance*);

void f1(s552retdecInstance*);

U32 f2(s552retdecInstance*);

void f3(s552retdecInstance*,U32);

U32 f4(s552retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s552retdecInstance*,U32,U32,U32,U32,U32);

void f6(s552retdecInstance*,U32);

void f7(s552retdecInstance*,U32,U32,U32);

void f8(s552retdecInstance*,U32,U32,U32);

void s552retdec____wasm_call_ctors(s552retdecInstance*i);

void s552retdec____wasm_apply_data_relocs(s552retdecInstance*i);

U32 s552retdec_func_1(s552retdecInstance*i);

void s552retdec_call_cb(s552retdecInstance*i,U32 l0);

void s552retdecInstantiate(s552retdecInstance* instance, void* resolve(const char* module, const char* name));

void s552retdecFreeInstance(s552retdecInstance* instance);

#endif /* s552retdec_H */

