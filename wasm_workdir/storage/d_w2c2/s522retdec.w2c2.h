#ifndef s522retdec_H
#define s522retdec_H

#include "w2c2_base.h"

typedef struct s522retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s522retdecInstance;

void f0(s522retdecInstance*);

void f1(s522retdecInstance*);

U32 f2(s522retdecInstance*);

void f3(s522retdecInstance*,U32);

U32 f4(s522retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s522retdecInstance*,U32,U32,U32,U32,U32);

void f6(s522retdecInstance*,U32);

void f7(s522retdecInstance*,U32,U32,U32);

void f8(s522retdecInstance*,U32,U32,U32);

void s522retdec____wasm_call_ctors(s522retdecInstance*i);

void s522retdec____wasm_apply_data_relocs(s522retdecInstance*i);

U32 s522retdec_func_1(s522retdecInstance*i);

void s522retdec_call_cb(s522retdecInstance*i,U32 l0);

void s522retdecInstantiate(s522retdecInstance* instance, void* resolve(const char* module, const char* name));

void s522retdecFreeInstance(s522retdecInstance* instance);

#endif /* s522retdec_H */

