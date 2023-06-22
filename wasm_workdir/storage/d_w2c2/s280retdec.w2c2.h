#ifndef s280retdec_H
#define s280retdec_H

#include "w2c2_base.h"

typedef struct s280retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s280retdecInstance;

void f0(s280retdecInstance*);

void f1(s280retdecInstance*);

U32 f2(s280retdecInstance*);

void f3(s280retdecInstance*,U32);

U32 f4(s280retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s280retdecInstance*,U32,U32,U32,U32,U32);

void f6(s280retdecInstance*,U32);

void f7(s280retdecInstance*,U32,U32,U32);

void f8(s280retdecInstance*,U32,U32,U32);

void s280retdec____wasm_call_ctors(s280retdecInstance*i);

void s280retdec____wasm_apply_data_relocs(s280retdecInstance*i);

U32 s280retdec_func_1(s280retdecInstance*i);

void s280retdec_call_cb(s280retdecInstance*i,U32 l0);

void s280retdecInstantiate(s280retdecInstance* instance, void* resolve(const char* module, const char* name));

void s280retdecFreeInstance(s280retdecInstance* instance);

#endif /* s280retdec_H */

