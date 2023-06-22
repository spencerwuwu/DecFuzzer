#ifndef s220retdec_H
#define s220retdec_H

#include "w2c2_base.h"

typedef struct s220retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s220retdecInstance;

void f0(s220retdecInstance*);

void f1(s220retdecInstance*);

U32 f2(s220retdecInstance*);

void f3(s220retdecInstance*,U32);

U32 f4(s220retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s220retdecInstance*,U32,U32,U32,U32,U32);

void f6(s220retdecInstance*,U32);

void f7(s220retdecInstance*,U32,U32,U32);

void f8(s220retdecInstance*,U32,U32,U32);

void s220retdec____wasm_call_ctors(s220retdecInstance*i);

void s220retdec____wasm_apply_data_relocs(s220retdecInstance*i);

U32 s220retdec_func_1(s220retdecInstance*i);

void s220retdec_call_cb(s220retdecInstance*i,U32 l0);

void s220retdecInstantiate(s220retdecInstance* instance, void* resolve(const char* module, const char* name));

void s220retdecFreeInstance(s220retdecInstance* instance);

#endif /* s220retdec_H */

