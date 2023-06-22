#ifndef s212retdec_H
#define s212retdec_H

#include "w2c2_base.h"

typedef struct s212retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s212retdecInstance;

void f0(s212retdecInstance*);

void f1(s212retdecInstance*);

U32 f2(s212retdecInstance*);

void f3(s212retdecInstance*,U32);

U32 f4(s212retdecInstance*,U32,U32,U32);

void f5(s212retdecInstance*,U32,U32,U32,U32,U32);

void f6(s212retdecInstance*,U32);

void f7(s212retdecInstance*,U32,U32,U32);

void f8(s212retdecInstance*,U32,U32,U32);

void s212retdec____wasm_call_ctors(s212retdecInstance*i);

void s212retdec____wasm_apply_data_relocs(s212retdecInstance*i);

U32 s212retdec_func_1(s212retdecInstance*i);

void s212retdec_call_cb(s212retdecInstance*i,U32 l0);

void s212retdecInstantiate(s212retdecInstance* instance, void* resolve(const char* module, const char* name));

void s212retdecFreeInstance(s212retdecInstance* instance);

#endif /* s212retdec_H */

