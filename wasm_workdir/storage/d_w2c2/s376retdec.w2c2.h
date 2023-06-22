#ifndef s376retdec_H
#define s376retdec_H

#include "w2c2_base.h"

typedef struct s376retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s376retdecInstance;

void f0(s376retdecInstance*);

void f1(s376retdecInstance*);

U32 f2(s376retdecInstance*);

void f3(s376retdecInstance*,U32);

U32 f4(s376retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s376retdecInstance*,U32,U32,U32,U32,U32);

void f6(s376retdecInstance*,U32);

void f7(s376retdecInstance*,U32,U32,U32);

void f8(s376retdecInstance*,U32,U32,U32);

void s376retdec____wasm_call_ctors(s376retdecInstance*i);

void s376retdec____wasm_apply_data_relocs(s376retdecInstance*i);

U32 s376retdec_func_1(s376retdecInstance*i);

void s376retdec_call_cb(s376retdecInstance*i,U32 l0);

void s376retdecInstantiate(s376retdecInstance* instance, void* resolve(const char* module, const char* name));

void s376retdecFreeInstance(s376retdecInstance* instance);

#endif /* s376retdec_H */

