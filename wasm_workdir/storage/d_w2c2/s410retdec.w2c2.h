#ifndef s410retdec_H
#define s410retdec_H

#include "w2c2_base.h"

typedef struct s410retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s410retdecInstance;

void f0(s410retdecInstance*);

void f1(s410retdecInstance*);

U32 f2(s410retdecInstance*);

void f3(s410retdecInstance*,U32);

U32 f4(s410retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s410retdecInstance*,U32,U32,U32,U32,U32);

void f6(s410retdecInstance*,U32);

void f7(s410retdecInstance*,U32,U32,U32);

void f8(s410retdecInstance*,U32,U32,U32);

void s410retdec____wasm_call_ctors(s410retdecInstance*i);

void s410retdec____wasm_apply_data_relocs(s410retdecInstance*i);

U32 s410retdec_func_1(s410retdecInstance*i);

void s410retdec_call_cb(s410retdecInstance*i,U32 l0);

void s410retdecInstantiate(s410retdecInstance* instance, void* resolve(const char* module, const char* name));

void s410retdecFreeInstance(s410retdecInstance* instance);

#endif /* s410retdec_H */

