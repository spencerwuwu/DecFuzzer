#ifndef s438retdec_H
#define s438retdec_H

#include "w2c2_base.h"

typedef struct s438retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s438retdecInstance;

void f0(s438retdecInstance*);

void f1(s438retdecInstance*);

U32 f2(s438retdecInstance*);

void f3(s438retdecInstance*,U32);

U32 f4(s438retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s438retdecInstance*,U32,U32,U32,U32,U32);

void f6(s438retdecInstance*,U32);

void f7(s438retdecInstance*,U32,U32,U32);

void f8(s438retdecInstance*,U32,U32,U32);

void s438retdec____wasm_call_ctors(s438retdecInstance*i);

void s438retdec____wasm_apply_data_relocs(s438retdecInstance*i);

U32 s438retdec_func_1(s438retdecInstance*i);

void s438retdec_call_cb(s438retdecInstance*i,U32 l0);

void s438retdecInstantiate(s438retdecInstance* instance, void* resolve(const char* module, const char* name));

void s438retdecFreeInstance(s438retdecInstance* instance);

#endif /* s438retdec_H */

