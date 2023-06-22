#ifndef s706retdec_H
#define s706retdec_H

#include "w2c2_base.h"

typedef struct s706retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s706retdecInstance;

void f0(s706retdecInstance*);

void f1(s706retdecInstance*);

U32 f2(s706retdecInstance*);

void f3(s706retdecInstance*,U32);

U32 f4(s706retdecInstance*,U32,U32,U32,U32);

void f5(s706retdecInstance*,U32,U32,U32,U32,U32);

void f6(s706retdecInstance*,U32);

void f7(s706retdecInstance*,U32,U32,U32);

void f8(s706retdecInstance*,U32,U32,U32);

void s706retdec____wasm_call_ctors(s706retdecInstance*i);

void s706retdec____wasm_apply_data_relocs(s706retdecInstance*i);

U32 s706retdec_func_1(s706retdecInstance*i);

void s706retdec_call_cb(s706retdecInstance*i,U32 l0);

void s706retdecInstantiate(s706retdecInstance* instance, void* resolve(const char* module, const char* name));

void s706retdecFreeInstance(s706retdecInstance* instance);

#endif /* s706retdec_H */

