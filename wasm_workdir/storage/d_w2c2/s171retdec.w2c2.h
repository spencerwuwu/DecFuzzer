#ifndef s171retdec_H
#define s171retdec_H

#include "w2c2_base.h"

typedef struct s171retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s171retdecInstance;

void f0(s171retdecInstance*);

void f1(s171retdecInstance*);

U32 f2(s171retdecInstance*);

void f3(s171retdecInstance*,U32);

U32 f4(s171retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s171retdecInstance*,U32,U32,U32,U32,U32);

void f6(s171retdecInstance*,U32);

void f7(s171retdecInstance*,U32,U32,U32);

void f8(s171retdecInstance*,U32,U32,U32);

void s171retdec____wasm_call_ctors(s171retdecInstance*i);

void s171retdec____wasm_apply_data_relocs(s171retdecInstance*i);

U32 s171retdec_func_1(s171retdecInstance*i);

void s171retdec_call_cb(s171retdecInstance*i,U32 l0);

void s171retdecInstantiate(s171retdecInstance* instance, void* resolve(const char* module, const char* name));

void s171retdecFreeInstance(s171retdecInstance* instance);

#endif /* s171retdec_H */

