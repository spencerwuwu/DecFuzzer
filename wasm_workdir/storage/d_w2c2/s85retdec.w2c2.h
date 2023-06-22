#ifndef s85retdec_H
#define s85retdec_H

#include "w2c2_base.h"

typedef struct s85retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s85retdecInstance;

void f0(s85retdecInstance*);

void f1(s85retdecInstance*);

U32 f2(s85retdecInstance*);

void f3(s85retdecInstance*,U32);

U32 f4(s85retdecInstance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s85retdecInstance*,U32,U32,U32,U32,U32);

void f6(s85retdecInstance*,U32);

void f7(s85retdecInstance*,U32,U32,U32);

void f8(s85retdecInstance*,U32,U32,U32);

void s85retdec____wasm_call_ctors(s85retdecInstance*i);

void s85retdec____wasm_apply_data_relocs(s85retdecInstance*i);

U32 s85retdec_func_1(s85retdecInstance*i);

void s85retdec_call_cb(s85retdecInstance*i,U32 l0);

void s85retdecInstantiate(s85retdecInstance* instance, void* resolve(const char* module, const char* name));

void s85retdecFreeInstance(s85retdecInstance* instance);

#endif /* s85retdec_H */

