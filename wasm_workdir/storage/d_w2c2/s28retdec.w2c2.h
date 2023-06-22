#ifndef s28retdec_H
#define s28retdec_H

#include "w2c2_base.h"

typedef struct s28retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s28retdecInstance;

void f0(s28retdecInstance*);

void f1(s28retdecInstance*);

U32 f2(s28retdecInstance*);

void f3(s28retdecInstance*,U32);

U32 f4(s28retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s28retdecInstance*,U32,U32,U32,U32,U32);

void f6(s28retdecInstance*,U32);

void f7(s28retdecInstance*,U32,U32,U32);

void f8(s28retdecInstance*,U32,U32,U32);

void s28retdec____wasm_call_ctors(s28retdecInstance*i);

void s28retdec____wasm_apply_data_relocs(s28retdecInstance*i);

U32 s28retdec_func_1(s28retdecInstance*i);

void s28retdec_call_cb(s28retdecInstance*i,U32 l0);

void s28retdecInstantiate(s28retdecInstance* instance, void* resolve(const char* module, const char* name));

void s28retdecFreeInstance(s28retdecInstance* instance);

#endif /* s28retdec_H */

