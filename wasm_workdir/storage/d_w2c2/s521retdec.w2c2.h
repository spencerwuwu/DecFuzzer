#ifndef s521retdec_H
#define s521retdec_H

#include "w2c2_base.h"

typedef struct s521retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s521retdecInstance;

void f0(s521retdecInstance*);

void f1(s521retdecInstance*);

U32 f2(s521retdecInstance*);

void f3(s521retdecInstance*,U32);

U32 f4(s521retdecInstance*,U32,U32,U32,U32,U32);

void f5(s521retdecInstance*,U32,U32,U32,U32,U32);

void f6(s521retdecInstance*,U32);

void f7(s521retdecInstance*,U32,U32,U32);

void f8(s521retdecInstance*,U32,U32,U32);

void s521retdec____wasm_call_ctors(s521retdecInstance*i);

void s521retdec____wasm_apply_data_relocs(s521retdecInstance*i);

U32 s521retdec_func_1(s521retdecInstance*i);

void s521retdec_call_cb(s521retdecInstance*i,U32 l0);

void s521retdecInstantiate(s521retdecInstance* instance, void* resolve(const char* module, const char* name));

void s521retdecFreeInstance(s521retdecInstance* instance);

#endif /* s521retdec_H */

