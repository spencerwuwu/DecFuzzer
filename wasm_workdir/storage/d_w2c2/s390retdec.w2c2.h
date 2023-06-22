#ifndef s390retdec_H
#define s390retdec_H

#include "w2c2_base.h"

typedef struct s390retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s390retdecInstance;

void f0(s390retdecInstance*);

void f1(s390retdecInstance*);

U32 f2(s390retdecInstance*);

void f3(s390retdecInstance*,U32);

U32 f4(s390retdecInstance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s390retdecInstance*,U32,U32,U32,U32,U32);

void f6(s390retdecInstance*,U32);

void f7(s390retdecInstance*,U32,U32,U32);

void f8(s390retdecInstance*,U32,U32,U32);

void s390retdec____wasm_call_ctors(s390retdecInstance*i);

void s390retdec____wasm_apply_data_relocs(s390retdecInstance*i);

U32 s390retdec_func_1(s390retdecInstance*i);

void s390retdec_call_cb(s390retdecInstance*i,U32 l0);

void s390retdecInstantiate(s390retdecInstance* instance, void* resolve(const char* module, const char* name));

void s390retdecFreeInstance(s390retdecInstance* instance);

#endif /* s390retdec_H */

