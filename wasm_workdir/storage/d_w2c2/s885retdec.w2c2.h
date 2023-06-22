#ifndef s885retdec_H
#define s885retdec_H

#include "w2c2_base.h"

typedef struct s885retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s885retdecInstance;

void f0(s885retdecInstance*);

void f1(s885retdecInstance*);

U32 f2(s885retdecInstance*);

void f3(s885retdecInstance*,U32);

U32 f4(s885retdecInstance*,U32,U32,U32,U32);

void f5(s885retdecInstance*,U32,U32,U32,U32,U32);

void f6(s885retdecInstance*,U32);

void f7(s885retdecInstance*,U32,U32,U32);

void f8(s885retdecInstance*,U32,U32,U32);

void s885retdec____wasm_call_ctors(s885retdecInstance*i);

void s885retdec____wasm_apply_data_relocs(s885retdecInstance*i);

U32 s885retdec_func_1(s885retdecInstance*i);

void s885retdec_call_cb(s885retdecInstance*i,U32 l0);

void s885retdecInstantiate(s885retdecInstance* instance, void* resolve(const char* module, const char* name));

void s885retdecFreeInstance(s885retdecInstance* instance);

#endif /* s885retdec_H */

