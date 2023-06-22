#ifndef s979retdec_H
#define s979retdec_H

#include "w2c2_base.h"

typedef struct s979retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s979retdecInstance;

void f0(s979retdecInstance*);

void f1(s979retdecInstance*);

U32 f2(s979retdecInstance*);

void f3(s979retdecInstance*,U32);

U32 f4(s979retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s979retdecInstance*,U32,U32,U32,U32,U32);

void f6(s979retdecInstance*,U32);

void f7(s979retdecInstance*,U32,U32,U32);

void f8(s979retdecInstance*,U32,U32,U32);

void s979retdec____wasm_call_ctors(s979retdecInstance*i);

void s979retdec____wasm_apply_data_relocs(s979retdecInstance*i);

U32 s979retdec_func_1(s979retdecInstance*i);

void s979retdec_call_cb(s979retdecInstance*i,U32 l0);

void s979retdecInstantiate(s979retdecInstance* instance, void* resolve(const char* module, const char* name));

void s979retdecFreeInstance(s979retdecInstance* instance);

#endif /* s979retdec_H */

