#ifndef s769retdec_H
#define s769retdec_H

#include "w2c2_base.h"

typedef struct s769retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s769retdecInstance;

void f0(s769retdecInstance*);

void f1(s769retdecInstance*);

U32 f2(s769retdecInstance*);

void f3(s769retdecInstance*,U32);

U32 f4(s769retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s769retdecInstance*,U32,U32,U32,U32,U32);

void f6(s769retdecInstance*,U32);

void f7(s769retdecInstance*,U32,U32,U32);

void f8(s769retdecInstance*,U32,U32,U32);

void s769retdec____wasm_call_ctors(s769retdecInstance*i);

void s769retdec____wasm_apply_data_relocs(s769retdecInstance*i);

U32 s769retdec_func_1(s769retdecInstance*i);

void s769retdec_call_cb(s769retdecInstance*i,U32 l0);

void s769retdecInstantiate(s769retdecInstance* instance, void* resolve(const char* module, const char* name));

void s769retdecFreeInstance(s769retdecInstance* instance);

#endif /* s769retdec_H */

