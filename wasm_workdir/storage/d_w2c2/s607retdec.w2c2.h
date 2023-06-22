#ifndef s607retdec_H
#define s607retdec_H

#include "w2c2_base.h"

typedef struct s607retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s607retdecInstance;

void f0(s607retdecInstance*);

void f1(s607retdecInstance*);

U32 f2(s607retdecInstance*);

void f3(s607retdecInstance*,U32);

U32 f4(s607retdecInstance*,U32,U32,U32,U32,U32);

void f5(s607retdecInstance*,U32,U32,U32,U32,U32);

void f6(s607retdecInstance*,U32);

void f7(s607retdecInstance*,U32,U32,U32);

void f8(s607retdecInstance*,U32,U32,U32);

void s607retdec____wasm_call_ctors(s607retdecInstance*i);

void s607retdec____wasm_apply_data_relocs(s607retdecInstance*i);

U32 s607retdec_func_1(s607retdecInstance*i);

void s607retdec_call_cb(s607retdecInstance*i,U32 l0);

void s607retdecInstantiate(s607retdecInstance* instance, void* resolve(const char* module, const char* name));

void s607retdecFreeInstance(s607retdecInstance* instance);

#endif /* s607retdec_H */

