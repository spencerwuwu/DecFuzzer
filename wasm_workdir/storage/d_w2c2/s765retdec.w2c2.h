#ifndef s765retdec_H
#define s765retdec_H

#include "w2c2_base.h"

typedef struct s765retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s765retdecInstance;

void f0(s765retdecInstance*);

void f1(s765retdecInstance*);

U32 f2(s765retdecInstance*);

void f3(s765retdecInstance*,U32);

U32 f4(s765retdecInstance*,U32,U32,U32,U32,U32);

void f5(s765retdecInstance*,U32,U32,U32,U32,U32);

void f6(s765retdecInstance*,U32);

void f7(s765retdecInstance*,U32,U32,U32);

void f8(s765retdecInstance*,U32,U32,U32);

void s765retdec____wasm_call_ctors(s765retdecInstance*i);

void s765retdec____wasm_apply_data_relocs(s765retdecInstance*i);

U32 s765retdec_func_1(s765retdecInstance*i);

void s765retdec_call_cb(s765retdecInstance*i,U32 l0);

void s765retdecInstantiate(s765retdecInstance* instance, void* resolve(const char* module, const char* name));

void s765retdecFreeInstance(s765retdecInstance* instance);

#endif /* s765retdec_H */

