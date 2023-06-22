#ifndef s626retdec_H
#define s626retdec_H

#include "w2c2_base.h"

typedef struct s626retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s626retdecInstance;

void f0(s626retdecInstance*);

void f1(s626retdecInstance*);

U32 f2(s626retdecInstance*);

void f3(s626retdecInstance*,U32);

U32 f4(s626retdecInstance*,U32,U32,U32);

void f5(s626retdecInstance*,U32,U32,U32,U32,U32);

void f6(s626retdecInstance*,U32);

void f7(s626retdecInstance*,U32,U32,U32);

void f8(s626retdecInstance*,U32,U32,U32);

void s626retdec____wasm_call_ctors(s626retdecInstance*i);

void s626retdec____wasm_apply_data_relocs(s626retdecInstance*i);

U32 s626retdec_func_1(s626retdecInstance*i);

void s626retdec_call_cb(s626retdecInstance*i,U32 l0);

void s626retdecInstantiate(s626retdecInstance* instance, void* resolve(const char* module, const char* name));

void s626retdecFreeInstance(s626retdecInstance* instance);

#endif /* s626retdec_H */

