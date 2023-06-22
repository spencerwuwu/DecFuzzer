#ifndef s747retdec_H
#define s747retdec_H

#include "w2c2_base.h"

typedef struct s747retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s747retdecInstance;

void f0(s747retdecInstance*);

void f1(s747retdecInstance*);

U32 f2(s747retdecInstance*);

void f3(s747retdecInstance*,U32);

U32 f4(s747retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s747retdecInstance*,U32,U32,U32,U32,U32);

void f6(s747retdecInstance*,U32);

void f7(s747retdecInstance*,U32,U32,U32);

void f8(s747retdecInstance*,U32,U32,U32);

void s747retdec____wasm_call_ctors(s747retdecInstance*i);

void s747retdec____wasm_apply_data_relocs(s747retdecInstance*i);

U32 s747retdec_func_1(s747retdecInstance*i);

void s747retdec_call_cb(s747retdecInstance*i,U32 l0);

void s747retdecInstantiate(s747retdecInstance* instance, void* resolve(const char* module, const char* name));

void s747retdecFreeInstance(s747retdecInstance* instance);

#endif /* s747retdec_H */

