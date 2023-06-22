#ifndef s98retdec_H
#define s98retdec_H

#include "w2c2_base.h"

typedef struct s98retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s98retdecInstance;

void f0(s98retdecInstance*);

void f1(s98retdecInstance*);

U32 f2(s98retdecInstance*);

void f3(s98retdecInstance*,U32);

U32 f4(s98retdecInstance*,U32,U32,U32,U32,U32);

void f5(s98retdecInstance*,U32,U32,U32,U32,U32);

void f6(s98retdecInstance*,U32);

void f7(s98retdecInstance*,U32,U32,U32);

void f8(s98retdecInstance*,U32,U32,U32);

void s98retdec____wasm_call_ctors(s98retdecInstance*i);

void s98retdec____wasm_apply_data_relocs(s98retdecInstance*i);

U32 s98retdec_func_1(s98retdecInstance*i);

void s98retdec_call_cb(s98retdecInstance*i,U32 l0);

void s98retdecInstantiate(s98retdecInstance* instance, void* resolve(const char* module, const char* name));

void s98retdecFreeInstance(s98retdecInstance* instance);

#endif /* s98retdec_H */

