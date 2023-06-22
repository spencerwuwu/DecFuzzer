#ifndef s895retdec_H
#define s895retdec_H

#include "w2c2_base.h"

typedef struct s895retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s895retdecInstance;

void f0(s895retdecInstance*);

void f1(s895retdecInstance*);

U32 f2(s895retdecInstance*);

void f3(s895retdecInstance*,U32);

U32 f4(s895retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s895retdecInstance*,U32,U32,U32,U32,U32);

void f6(s895retdecInstance*,U32);

void f7(s895retdecInstance*,U32,U32,U32);

void f8(s895retdecInstance*,U32,U32,U32);

void s895retdec____wasm_call_ctors(s895retdecInstance*i);

void s895retdec____wasm_apply_data_relocs(s895retdecInstance*i);

U32 s895retdec_func_1(s895retdecInstance*i);

void s895retdec_call_cb(s895retdecInstance*i,U32 l0);

void s895retdecInstantiate(s895retdecInstance* instance, void* resolve(const char* module, const char* name));

void s895retdecFreeInstance(s895retdecInstance* instance);

#endif /* s895retdec_H */

