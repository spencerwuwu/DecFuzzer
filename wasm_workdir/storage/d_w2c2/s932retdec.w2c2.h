#ifndef s932retdec_H
#define s932retdec_H

#include "w2c2_base.h"

typedef struct s932retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s932retdecInstance;

void f0(s932retdecInstance*);

void f1(s932retdecInstance*);

U32 f2(s932retdecInstance*);

void f3(s932retdecInstance*,U32);

U32 f4(s932retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s932retdecInstance*,U32,U32,U32,U32,U32);

void f6(s932retdecInstance*,U32);

void f7(s932retdecInstance*,U32,U32,U32);

void f8(s932retdecInstance*,U32,U32,U32);

void s932retdec____wasm_call_ctors(s932retdecInstance*i);

void s932retdec____wasm_apply_data_relocs(s932retdecInstance*i);

U32 s932retdec_func_1(s932retdecInstance*i);

void s932retdec_call_cb(s932retdecInstance*i,U32 l0);

void s932retdecInstantiate(s932retdecInstance* instance, void* resolve(const char* module, const char* name));

void s932retdecFreeInstance(s932retdecInstance* instance);

#endif /* s932retdec_H */

