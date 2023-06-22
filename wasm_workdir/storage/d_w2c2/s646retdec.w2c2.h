#ifndef s646retdec_H
#define s646retdec_H

#include "w2c2_base.h"

typedef struct s646retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s646retdecInstance;

void f0(s646retdecInstance*);

void f1(s646retdecInstance*);

U32 f2(s646retdecInstance*);

void f3(s646retdecInstance*,U32);

U32 f4(s646retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s646retdecInstance*,U32,U32,U32,U32,U32);

void f6(s646retdecInstance*,U32);

void f7(s646retdecInstance*,U32,U32,U32);

void f8(s646retdecInstance*,U32,U32,U32);

void s646retdec____wasm_call_ctors(s646retdecInstance*i);

void s646retdec____wasm_apply_data_relocs(s646retdecInstance*i);

U32 s646retdec_func_1(s646retdecInstance*i);

void s646retdec_call_cb(s646retdecInstance*i,U32 l0);

void s646retdecInstantiate(s646retdecInstance* instance, void* resolve(const char* module, const char* name));

void s646retdecFreeInstance(s646retdecInstance* instance);

#endif /* s646retdec_H */

