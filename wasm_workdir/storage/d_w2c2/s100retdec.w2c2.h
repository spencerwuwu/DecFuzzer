#ifndef s100retdec_H
#define s100retdec_H

#include "w2c2_base.h"

typedef struct s100retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s100retdecInstance;

void f0(s100retdecInstance*);

void f1(s100retdecInstance*);

U32 f2(s100retdecInstance*);

void f3(s100retdecInstance*,U32);

U32 f4(s100retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s100retdecInstance*,U32,U32,U32,U32,U32);

void f6(s100retdecInstance*,U32);

void f7(s100retdecInstance*,U32,U32,U32);

void f8(s100retdecInstance*,U32,U32,U32);

void s100retdec____wasm_call_ctors(s100retdecInstance*i);

void s100retdec____wasm_apply_data_relocs(s100retdecInstance*i);

U32 s100retdec_func_1(s100retdecInstance*i);

void s100retdec_call_cb(s100retdecInstance*i,U32 l0);

void s100retdecInstantiate(s100retdecInstance* instance, void* resolve(const char* module, const char* name));

void s100retdecFreeInstance(s100retdecInstance* instance);

#endif /* s100retdec_H */

