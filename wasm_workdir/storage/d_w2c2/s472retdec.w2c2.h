#ifndef s472retdec_H
#define s472retdec_H

#include "w2c2_base.h"

typedef struct s472retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s472retdecInstance;

void f0(s472retdecInstance*);

void f1(s472retdecInstance*);

U32 f2(s472retdecInstance*);

void f3(s472retdecInstance*,U32);

U32 f4(s472retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s472retdecInstance*,U32,U32,U32,U32,U32);

void f6(s472retdecInstance*,U32);

void f7(s472retdecInstance*,U32,U32,U32);

void f8(s472retdecInstance*,U32,U32,U32);

void s472retdec____wasm_call_ctors(s472retdecInstance*i);

void s472retdec____wasm_apply_data_relocs(s472retdecInstance*i);

U32 s472retdec_func_1(s472retdecInstance*i);

void s472retdec_call_cb(s472retdecInstance*i,U32 l0);

void s472retdecInstantiate(s472retdecInstance* instance, void* resolve(const char* module, const char* name));

void s472retdecFreeInstance(s472retdecInstance* instance);

#endif /* s472retdec_H */

