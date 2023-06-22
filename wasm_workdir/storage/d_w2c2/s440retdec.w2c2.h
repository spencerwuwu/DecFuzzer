#ifndef s440retdec_H
#define s440retdec_H

#include "w2c2_base.h"

typedef struct s440retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s440retdecInstance;

void f0(s440retdecInstance*);

void f1(s440retdecInstance*);

U32 f2(s440retdecInstance*);

void f3(s440retdecInstance*,U32);

U32 f4(s440retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s440retdecInstance*,U32,U32,U32,U32,U32);

void f6(s440retdecInstance*,U32);

void f7(s440retdecInstance*,U32,U32,U32);

void f8(s440retdecInstance*,U32,U32,U32);

void s440retdec____wasm_call_ctors(s440retdecInstance*i);

void s440retdec____wasm_apply_data_relocs(s440retdecInstance*i);

U32 s440retdec_func_1(s440retdecInstance*i);

void s440retdec_call_cb(s440retdecInstance*i,U32 l0);

void s440retdecInstantiate(s440retdecInstance* instance, void* resolve(const char* module, const char* name));

void s440retdecFreeInstance(s440retdecInstance* instance);

#endif /* s440retdec_H */

