#ifndef s315retdec_H
#define s315retdec_H

#include "w2c2_base.h"

typedef struct s315retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s315retdecInstance;

void f0(s315retdecInstance*);

void f1(s315retdecInstance*);

U32 f2(s315retdecInstance*);

void f3(s315retdecInstance*,U32);

U32 f4(s315retdecInstance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s315retdecInstance*,U32,U32,U32,U32,U32);

void f6(s315retdecInstance*,U32);

void f7(s315retdecInstance*,U32,U32,U32);

void f8(s315retdecInstance*,U32,U32,U32);

void s315retdec____wasm_call_ctors(s315retdecInstance*i);

void s315retdec____wasm_apply_data_relocs(s315retdecInstance*i);

U32 s315retdec_func_1(s315retdecInstance*i);

void s315retdec_call_cb(s315retdecInstance*i,U32 l0);

void s315retdecInstantiate(s315retdecInstance* instance, void* resolve(const char* module, const char* name));

void s315retdecFreeInstance(s315retdecInstance* instance);

#endif /* s315retdec_H */

