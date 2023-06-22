#ifndef s730retdec_H
#define s730retdec_H

#include "w2c2_base.h"

typedef struct s730retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s730retdecInstance;

void f0(s730retdecInstance*);

void f1(s730retdecInstance*);

U32 f2(s730retdecInstance*);

void f3(s730retdecInstance*,U32);

U32 f4(s730retdecInstance*,U32,U32,U32,U32,U32);

void f5(s730retdecInstance*,U32,U32,U32,U32,U32);

void f6(s730retdecInstance*,U32);

void f7(s730retdecInstance*,U32,U32,U32);

void f8(s730retdecInstance*,U32,U32,U32);

void s730retdec____wasm_call_ctors(s730retdecInstance*i);

void s730retdec____wasm_apply_data_relocs(s730retdecInstance*i);

U32 s730retdec_func_1(s730retdecInstance*i);

void s730retdec_call_cb(s730retdecInstance*i,U32 l0);

void s730retdecInstantiate(s730retdecInstance* instance, void* resolve(const char* module, const char* name));

void s730retdecFreeInstance(s730retdecInstance* instance);

#endif /* s730retdec_H */

