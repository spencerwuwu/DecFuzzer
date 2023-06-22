#ifndef s78retdec_H
#define s78retdec_H

#include "w2c2_base.h"

typedef struct s78retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s78retdecInstance;

void f0(s78retdecInstance*);

void f1(s78retdecInstance*);

U32 f2(s78retdecInstance*);

void f3(s78retdecInstance*,U32);

U32 f4(s78retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s78retdecInstance*,U32,U32,U32,U32,U32);

void f6(s78retdecInstance*,U32);

void f7(s78retdecInstance*,U32,U32,U32);

void f8(s78retdecInstance*,U32,U32,U32);

void s78retdec____wasm_call_ctors(s78retdecInstance*i);

void s78retdec____wasm_apply_data_relocs(s78retdecInstance*i);

U32 s78retdec_func_1(s78retdecInstance*i);

void s78retdec_call_cb(s78retdecInstance*i,U32 l0);

void s78retdecInstantiate(s78retdecInstance* instance, void* resolve(const char* module, const char* name));

void s78retdecFreeInstance(s78retdecInstance* instance);

#endif /* s78retdec_H */

