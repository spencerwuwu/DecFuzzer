#ifndef s665retdec_H
#define s665retdec_H

#include "w2c2_base.h"

typedef struct s665retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s665retdecInstance;

void f0(s665retdecInstance*);

void f1(s665retdecInstance*);

U32 f2(s665retdecInstance*);

void f3(s665retdecInstance*,U32);

U32 f4(s665retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s665retdecInstance*,U32,U32,U32,U32,U32);

void f6(s665retdecInstance*,U32);

void f7(s665retdecInstance*,U32,U32,U32);

void f8(s665retdecInstance*,U32,U32,U32);

void s665retdec____wasm_call_ctors(s665retdecInstance*i);

void s665retdec____wasm_apply_data_relocs(s665retdecInstance*i);

U32 s665retdec_func_1(s665retdecInstance*i);

void s665retdec_call_cb(s665retdecInstance*i,U32 l0);

void s665retdecInstantiate(s665retdecInstance* instance, void* resolve(const char* module, const char* name));

void s665retdecFreeInstance(s665retdecInstance* instance);

#endif /* s665retdec_H */

