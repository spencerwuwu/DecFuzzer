#ifndef s397retdec_H
#define s397retdec_H

#include "w2c2_base.h"

typedef struct s397retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s397retdecInstance;

void f0(s397retdecInstance*);

void f1(s397retdecInstance*);

U32 f2(s397retdecInstance*);

void f3(s397retdecInstance*,U32);

U32 f4(s397retdecInstance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s397retdecInstance*,U32,U32,U32,U32,U32);

void f6(s397retdecInstance*,U32);

void f7(s397retdecInstance*,U32,U32,U32);

void f8(s397retdecInstance*,U32,U32,U32);

void s397retdec____wasm_call_ctors(s397retdecInstance*i);

void s397retdec____wasm_apply_data_relocs(s397retdecInstance*i);

U32 s397retdec_func_1(s397retdecInstance*i);

void s397retdec_call_cb(s397retdecInstance*i,U32 l0);

void s397retdecInstantiate(s397retdecInstance* instance, void* resolve(const char* module, const char* name));

void s397retdecFreeInstance(s397retdecInstance* instance);

#endif /* s397retdec_H */

