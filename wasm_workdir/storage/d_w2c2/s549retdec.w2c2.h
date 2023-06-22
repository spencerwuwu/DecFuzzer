#ifndef s549retdec_H
#define s549retdec_H

#include "w2c2_base.h"

typedef struct s549retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s549retdecInstance;

void f0(s549retdecInstance*);

void f1(s549retdecInstance*);

U32 f2(s549retdecInstance*);

void f3(s549retdecInstance*,U32);

U32 f4(s549retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s549retdecInstance*,U32,U32,U32,U32,U32);

void f6(s549retdecInstance*,U32);

void f7(s549retdecInstance*,U32,U32,U32);

void f8(s549retdecInstance*,U32,U32,U32);

void s549retdec____wasm_call_ctors(s549retdecInstance*i);

void s549retdec____wasm_apply_data_relocs(s549retdecInstance*i);

U32 s549retdec_func_1(s549retdecInstance*i);

void s549retdec_call_cb(s549retdecInstance*i,U32 l0);

void s549retdecInstantiate(s549retdecInstance* instance, void* resolve(const char* module, const char* name));

void s549retdecFreeInstance(s549retdecInstance* instance);

#endif /* s549retdec_H */

