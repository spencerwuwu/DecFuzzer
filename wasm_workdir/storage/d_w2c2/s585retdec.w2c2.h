#ifndef s585retdec_H
#define s585retdec_H

#include "w2c2_base.h"

typedef struct s585retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s585retdecInstance;

void f0(s585retdecInstance*);

void f1(s585retdecInstance*);

U32 f2(s585retdecInstance*);

void f3(s585retdecInstance*,U32);

U32 f4(s585retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s585retdecInstance*,U32,U32,U32,U32,U32);

void f6(s585retdecInstance*,U32);

void f7(s585retdecInstance*,U32,U32,U32);

void f8(s585retdecInstance*,U32,U32,U32);

void s585retdec____wasm_call_ctors(s585retdecInstance*i);

void s585retdec____wasm_apply_data_relocs(s585retdecInstance*i);

U32 s585retdec_func_1(s585retdecInstance*i);

void s585retdec_call_cb(s585retdecInstance*i,U32 l0);

void s585retdecInstantiate(s585retdecInstance* instance, void* resolve(const char* module, const char* name));

void s585retdecFreeInstance(s585retdecInstance* instance);

#endif /* s585retdec_H */

