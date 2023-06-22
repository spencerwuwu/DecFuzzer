#ifndef s145retdec_H
#define s145retdec_H

#include "w2c2_base.h"

typedef struct s145retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s145retdecInstance;

void f0(s145retdecInstance*);

void f1(s145retdecInstance*);

U32 f2(s145retdecInstance*);

void f3(s145retdecInstance*,U32);

U32 f4(s145retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s145retdecInstance*,U32,U32,U32,U32,U32);

void f6(s145retdecInstance*,U32);

void f7(s145retdecInstance*,U32,U32,U32);

void f8(s145retdecInstance*,U32,U32,U32);

void s145retdec____wasm_call_ctors(s145retdecInstance*i);

void s145retdec____wasm_apply_data_relocs(s145retdecInstance*i);

U32 s145retdec_func_1(s145retdecInstance*i);

void s145retdec_call_cb(s145retdecInstance*i,U32 l0);

void s145retdecInstantiate(s145retdecInstance* instance, void* resolve(const char* module, const char* name));

void s145retdecFreeInstance(s145retdecInstance* instance);

#endif /* s145retdec_H */

