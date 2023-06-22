#ifndef s727retdec_H
#define s727retdec_H

#include "w2c2_base.h"

typedef struct s727retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s727retdecInstance;

void f0(s727retdecInstance*);

void f1(s727retdecInstance*);

U32 f2(s727retdecInstance*);

void f3(s727retdecInstance*,U32);

U32 f4(s727retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s727retdecInstance*,U32,U32,U32,U32,U32);

void f6(s727retdecInstance*,U32);

void f7(s727retdecInstance*,U32,U32,U32);

void f8(s727retdecInstance*,U32,U32,U32);

void s727retdec____wasm_call_ctors(s727retdecInstance*i);

void s727retdec____wasm_apply_data_relocs(s727retdecInstance*i);

U32 s727retdec_func_1(s727retdecInstance*i);

void s727retdec_call_cb(s727retdecInstance*i,U32 l0);

void s727retdecInstantiate(s727retdecInstance* instance, void* resolve(const char* module, const char* name));

void s727retdecFreeInstance(s727retdecInstance* instance);

#endif /* s727retdec_H */

