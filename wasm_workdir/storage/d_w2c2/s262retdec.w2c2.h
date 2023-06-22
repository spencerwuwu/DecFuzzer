#ifndef s262retdec_H
#define s262retdec_H

#include "w2c2_base.h"

typedef struct s262retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s262retdecInstance;

void f0(s262retdecInstance*);

void f1(s262retdecInstance*);

U32 f2(s262retdecInstance*);

void f3(s262retdecInstance*,U32);

U32 f4(s262retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s262retdecInstance*,U32,U32,U32,U32,U32);

void f6(s262retdecInstance*,U32);

void f7(s262retdecInstance*,U32,U32,U32);

void f8(s262retdecInstance*,U32,U32,U32);

void s262retdec____wasm_call_ctors(s262retdecInstance*i);

void s262retdec____wasm_apply_data_relocs(s262retdecInstance*i);

U32 s262retdec_func_1(s262retdecInstance*i);

void s262retdec_call_cb(s262retdecInstance*i,U32 l0);

void s262retdecInstantiate(s262retdecInstance* instance, void* resolve(const char* module, const char* name));

void s262retdecFreeInstance(s262retdecInstance* instance);

#endif /* s262retdec_H */

