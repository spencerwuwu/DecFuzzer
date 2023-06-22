#ifndef s343retdec_H
#define s343retdec_H

#include "w2c2_base.h"

typedef struct s343retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s343retdecInstance;

void f0(s343retdecInstance*);

void f1(s343retdecInstance*);

U32 f2(s343retdecInstance*);

void f3(s343retdecInstance*,U32);

U32 f4(s343retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s343retdecInstance*,U32,U32,U32,U32,U32);

void f6(s343retdecInstance*,U32);

void f7(s343retdecInstance*,U32,U32,U32);

void f8(s343retdecInstance*,U32,U32,U32);

void s343retdec____wasm_call_ctors(s343retdecInstance*i);

void s343retdec____wasm_apply_data_relocs(s343retdecInstance*i);

U32 s343retdec_func_1(s343retdecInstance*i);

void s343retdec_call_cb(s343retdecInstance*i,U32 l0);

void s343retdecInstantiate(s343retdecInstance* instance, void* resolve(const char* module, const char* name));

void s343retdecFreeInstance(s343retdecInstance* instance);

#endif /* s343retdec_H */

