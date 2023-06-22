#ifndef s387retdec_H
#define s387retdec_H

#include "w2c2_base.h"

typedef struct s387retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s387retdecInstance;

void f0(s387retdecInstance*);

void f1(s387retdecInstance*);

U32 f2(s387retdecInstance*);

void f3(s387retdecInstance*,U32);

U32 f4(s387retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s387retdecInstance*,U32,U32,U32,U32,U32);

void f6(s387retdecInstance*,U32);

void f7(s387retdecInstance*,U32,U32,U32);

void f8(s387retdecInstance*,U32,U32,U32);

void s387retdec____wasm_call_ctors(s387retdecInstance*i);

void s387retdec____wasm_apply_data_relocs(s387retdecInstance*i);

U32 s387retdec_func_1(s387retdecInstance*i);

void s387retdec_call_cb(s387retdecInstance*i,U32 l0);

void s387retdecInstantiate(s387retdecInstance* instance, void* resolve(const char* module, const char* name));

void s387retdecFreeInstance(s387retdecInstance* instance);

#endif /* s387retdec_H */

