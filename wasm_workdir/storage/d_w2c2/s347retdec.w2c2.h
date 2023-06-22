#ifndef s347retdec_H
#define s347retdec_H

#include "w2c2_base.h"

typedef struct s347retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s347retdecInstance;

void f0(s347retdecInstance*);

void f1(s347retdecInstance*);

U32 f2(s347retdecInstance*);

void f3(s347retdecInstance*,U32);

U32 f4(s347retdecInstance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s347retdecInstance*,U32,U32,U32,U32,U32);

void f6(s347retdecInstance*,U32);

void f7(s347retdecInstance*,U32,U32,U32);

void f8(s347retdecInstance*,U32,U32,U32);

void s347retdec____wasm_call_ctors(s347retdecInstance*i);

void s347retdec____wasm_apply_data_relocs(s347retdecInstance*i);

U32 s347retdec_func_1(s347retdecInstance*i);

void s347retdec_call_cb(s347retdecInstance*i,U32 l0);

void s347retdecInstantiate(s347retdecInstance* instance, void* resolve(const char* module, const char* name));

void s347retdecFreeInstance(s347retdecInstance* instance);

#endif /* s347retdec_H */

