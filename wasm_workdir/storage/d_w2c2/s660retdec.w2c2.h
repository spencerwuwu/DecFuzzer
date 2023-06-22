#ifndef s660retdec_H
#define s660retdec_H

#include "w2c2_base.h"

typedef struct s660retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s660retdecInstance;

void f0(s660retdecInstance*);

void f1(s660retdecInstance*);

U32 f2(s660retdecInstance*);

void f3(s660retdecInstance*,U32);

U32 f4(s660retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s660retdecInstance*,U32,U32,U32,U32,U32);

void f6(s660retdecInstance*,U32);

void f7(s660retdecInstance*,U32,U32,U32);

void f8(s660retdecInstance*,U32,U32,U32);

void s660retdec____wasm_call_ctors(s660retdecInstance*i);

void s660retdec____wasm_apply_data_relocs(s660retdecInstance*i);

U32 s660retdec_func_1(s660retdecInstance*i);

void s660retdec_call_cb(s660retdecInstance*i,U32 l0);

void s660retdecInstantiate(s660retdecInstance* instance, void* resolve(const char* module, const char* name));

void s660retdecFreeInstance(s660retdecInstance* instance);

#endif /* s660retdec_H */

