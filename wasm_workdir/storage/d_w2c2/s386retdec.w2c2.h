#ifndef s386retdec_H
#define s386retdec_H

#include "w2c2_base.h"

typedef struct s386retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s386retdecInstance;

void f0(s386retdecInstance*);

void f1(s386retdecInstance*);

U32 f2(s386retdecInstance*);

void f3(s386retdecInstance*,U32);

U32 f4(s386retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s386retdecInstance*,U32,U32,U32,U32,U32);

void f6(s386retdecInstance*,U32);

void f7(s386retdecInstance*,U32,U32,U32);

void f8(s386retdecInstance*,U32,U32,U32);

void s386retdec____wasm_call_ctors(s386retdecInstance*i);

void s386retdec____wasm_apply_data_relocs(s386retdecInstance*i);

U32 s386retdec_func_1(s386retdecInstance*i);

void s386retdec_call_cb(s386retdecInstance*i,U32 l0);

void s386retdecInstantiate(s386retdecInstance* instance, void* resolve(const char* module, const char* name));

void s386retdecFreeInstance(s386retdecInstance* instance);

#endif /* s386retdec_H */

