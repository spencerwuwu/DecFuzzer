#ifndef s126retdec_H
#define s126retdec_H

#include "w2c2_base.h"

typedef struct s126retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s126retdecInstance;

void f0(s126retdecInstance*);

void f1(s126retdecInstance*);

U32 f2(s126retdecInstance*);

void f3(s126retdecInstance*,U32);

U32 f4(s126retdecInstance*,U32,U32,U32,U32,U32);

void f5(s126retdecInstance*,U32,U32,U32,U32,U32);

void f6(s126retdecInstance*,U32);

void f7(s126retdecInstance*,U32,U32,U32);

void f8(s126retdecInstance*,U32,U32,U32);

void s126retdec____wasm_call_ctors(s126retdecInstance*i);

void s126retdec____wasm_apply_data_relocs(s126retdecInstance*i);

U32 s126retdec_func_1(s126retdecInstance*i);

void s126retdec_call_cb(s126retdecInstance*i,U32 l0);

void s126retdecInstantiate(s126retdecInstance* instance, void* resolve(const char* module, const char* name));

void s126retdecFreeInstance(s126retdecInstance* instance);

#endif /* s126retdec_H */

