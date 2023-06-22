#ifndef s295retdec_H
#define s295retdec_H

#include "w2c2_base.h"

typedef struct s295retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s295retdecInstance;

void f0(s295retdecInstance*);

void f1(s295retdecInstance*);

U32 f2(s295retdecInstance*);

void f3(s295retdecInstance*,U32);

U32 f4(s295retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s295retdecInstance*,U32,U32,U32,U32,U32);

void f6(s295retdecInstance*,U32);

void f7(s295retdecInstance*,U32,U32,U32);

void f8(s295retdecInstance*,U32,U32,U32);

void s295retdec____wasm_call_ctors(s295retdecInstance*i);

void s295retdec____wasm_apply_data_relocs(s295retdecInstance*i);

U32 s295retdec_func_1(s295retdecInstance*i);

void s295retdec_call_cb(s295retdecInstance*i,U32 l0);

void s295retdecInstantiate(s295retdecInstance* instance, void* resolve(const char* module, const char* name));

void s295retdecFreeInstance(s295retdecInstance* instance);

#endif /* s295retdec_H */

