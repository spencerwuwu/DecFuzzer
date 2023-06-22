#ifndef s228retdec_H
#define s228retdec_H

#include "w2c2_base.h"

typedef struct s228retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s228retdecInstance;

void f0(s228retdecInstance*);

void f1(s228retdecInstance*);

U32 f2(s228retdecInstance*);

void f3(s228retdecInstance*,U32);

U32 f4(s228retdecInstance*,U32,U32,U32,U32,U32);

void f5(s228retdecInstance*,U32,U32,U32,U32,U32);

void f6(s228retdecInstance*,U32);

void f7(s228retdecInstance*,U32,U32,U32);

void f8(s228retdecInstance*,U32,U32,U32);

void s228retdec____wasm_call_ctors(s228retdecInstance*i);

void s228retdec____wasm_apply_data_relocs(s228retdecInstance*i);

U32 s228retdec_func_1(s228retdecInstance*i);

void s228retdec_call_cb(s228retdecInstance*i,U32 l0);

void s228retdecInstantiate(s228retdecInstance* instance, void* resolve(const char* module, const char* name));

void s228retdecFreeInstance(s228retdecInstance* instance);

#endif /* s228retdec_H */

