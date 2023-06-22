#ifndef s444retdec_H
#define s444retdec_H

#include "w2c2_base.h"

typedef struct s444retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s444retdecInstance;

void f0(s444retdecInstance*);

void f1(s444retdecInstance*);

U32 f2(s444retdecInstance*);

void f3(s444retdecInstance*,U32);

U32 f4(s444retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s444retdecInstance*,U32,U32,U32,U32,U32);

void f6(s444retdecInstance*,U32);

void f7(s444retdecInstance*,U32,U32,U32);

void f8(s444retdecInstance*,U32,U32,U32);

void s444retdec____wasm_call_ctors(s444retdecInstance*i);

void s444retdec____wasm_apply_data_relocs(s444retdecInstance*i);

U32 s444retdec_func_1(s444retdecInstance*i);

void s444retdec_call_cb(s444retdecInstance*i,U32 l0);

void s444retdecInstantiate(s444retdecInstance* instance, void* resolve(const char* module, const char* name));

void s444retdecFreeInstance(s444retdecInstance* instance);

#endif /* s444retdec_H */

