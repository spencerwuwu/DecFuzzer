#ifndef s655retdec_H
#define s655retdec_H

#include "w2c2_base.h"

typedef struct s655retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s655retdecInstance;

void f0(s655retdecInstance*);

void f1(s655retdecInstance*);

U32 f2(s655retdecInstance*);

void f3(s655retdecInstance*,U32);

U32 f4(s655retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s655retdecInstance*,U32,U32,U32,U32,U32);

void f6(s655retdecInstance*,U32);

void f7(s655retdecInstance*,U32,U32,U32);

void f8(s655retdecInstance*,U32,U32,U32);

void s655retdec____wasm_call_ctors(s655retdecInstance*i);

void s655retdec____wasm_apply_data_relocs(s655retdecInstance*i);

U32 s655retdec_func_1(s655retdecInstance*i);

void s655retdec_call_cb(s655retdecInstance*i,U32 l0);

void s655retdecInstantiate(s655retdecInstance* instance, void* resolve(const char* module, const char* name));

void s655retdecFreeInstance(s655retdecInstance* instance);

#endif /* s655retdec_H */

