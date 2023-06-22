#ifndef s182retdec_H
#define s182retdec_H

#include "w2c2_base.h"

typedef struct s182retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s182retdecInstance;

void f0(s182retdecInstance*);

void f1(s182retdecInstance*);

U32 f2(s182retdecInstance*);

void f3(s182retdecInstance*,U32);

U32 f4(s182retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s182retdecInstance*,U32,U32,U32,U32,U32);

void f6(s182retdecInstance*,U32);

void f7(s182retdecInstance*,U32,U32,U32);

void f8(s182retdecInstance*,U32,U32,U32);

void s182retdec____wasm_call_ctors(s182retdecInstance*i);

void s182retdec____wasm_apply_data_relocs(s182retdecInstance*i);

U32 s182retdec_func_1(s182retdecInstance*i);

void s182retdec_call_cb(s182retdecInstance*i,U32 l0);

void s182retdecInstantiate(s182retdecInstance* instance, void* resolve(const char* module, const char* name));

void s182retdecFreeInstance(s182retdecInstance* instance);

#endif /* s182retdec_H */

