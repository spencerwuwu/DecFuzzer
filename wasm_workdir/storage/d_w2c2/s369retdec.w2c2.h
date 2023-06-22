#ifndef s369retdec_H
#define s369retdec_H

#include "w2c2_base.h"

typedef struct s369retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s369retdecInstance;

void f0(s369retdecInstance*);

void f1(s369retdecInstance*);

U32 f2(s369retdecInstance*);

void f3(s369retdecInstance*,U32);

U32 f4(s369retdecInstance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s369retdecInstance*,U32,U32,U32,U32,U32);

void f6(s369retdecInstance*,U32);

void f7(s369retdecInstance*,U32,U32,U32);

void f8(s369retdecInstance*,U32,U32,U32);

void s369retdec____wasm_call_ctors(s369retdecInstance*i);

void s369retdec____wasm_apply_data_relocs(s369retdecInstance*i);

U32 s369retdec_func_1(s369retdecInstance*i);

void s369retdec_call_cb(s369retdecInstance*i,U32 l0);

void s369retdecInstantiate(s369retdecInstance* instance, void* resolve(const char* module, const char* name));

void s369retdecFreeInstance(s369retdecInstance* instance);

#endif /* s369retdec_H */

