#ifndef s176retdec_H
#define s176retdec_H

#include "w2c2_base.h"

typedef struct s176retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s176retdecInstance;

void f0(s176retdecInstance*);

void f1(s176retdecInstance*);

U32 f2(s176retdecInstance*);

void f3(s176retdecInstance*,U32);

U32 f4(s176retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s176retdecInstance*,U32,U32,U32,U32,U32);

void f6(s176retdecInstance*,U32);

void f7(s176retdecInstance*,U32,U32,U32);

void f8(s176retdecInstance*,U32,U32,U32);

void s176retdec____wasm_call_ctors(s176retdecInstance*i);

void s176retdec____wasm_apply_data_relocs(s176retdecInstance*i);

U32 s176retdec_func_1(s176retdecInstance*i);

void s176retdec_call_cb(s176retdecInstance*i,U32 l0);

void s176retdecInstantiate(s176retdecInstance* instance, void* resolve(const char* module, const char* name));

void s176retdecFreeInstance(s176retdecInstance* instance);

#endif /* s176retdec_H */

