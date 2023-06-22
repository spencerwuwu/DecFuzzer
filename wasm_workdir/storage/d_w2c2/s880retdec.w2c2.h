#ifndef s880retdec_H
#define s880retdec_H

#include "w2c2_base.h"

typedef struct s880retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s880retdecInstance;

void f0(s880retdecInstance*);

void f1(s880retdecInstance*);

U32 f2(s880retdecInstance*);

void f3(s880retdecInstance*,U32);

U32 f4(s880retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s880retdecInstance*,U32,U32,U32,U32,U32);

void f6(s880retdecInstance*,U32);

void f7(s880retdecInstance*,U32,U32,U32);

void f8(s880retdecInstance*,U32,U32,U32);

void s880retdec____wasm_call_ctors(s880retdecInstance*i);

void s880retdec____wasm_apply_data_relocs(s880retdecInstance*i);

U32 s880retdec_func_1(s880retdecInstance*i);

void s880retdec_call_cb(s880retdecInstance*i,U32 l0);

void s880retdecInstantiate(s880retdecInstance* instance, void* resolve(const char* module, const char* name));

void s880retdecFreeInstance(s880retdecInstance* instance);

#endif /* s880retdec_H */

