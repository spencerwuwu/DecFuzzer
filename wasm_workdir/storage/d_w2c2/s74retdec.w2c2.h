#ifndef s74retdec_H
#define s74retdec_H

#include "w2c2_base.h"

typedef struct s74retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s74retdecInstance;

void f0(s74retdecInstance*);

void f1(s74retdecInstance*);

U32 f2(s74retdecInstance*);

void f3(s74retdecInstance*,U32);

U32 f4(s74retdecInstance*,U32,U32,U32,U32,U32);

void f5(s74retdecInstance*,U32,U32,U32,U32,U32);

void f6(s74retdecInstance*,U32);

void f7(s74retdecInstance*,U32,U32,U32);

void f8(s74retdecInstance*,U32,U32,U32);

void s74retdec____wasm_call_ctors(s74retdecInstance*i);

void s74retdec____wasm_apply_data_relocs(s74retdecInstance*i);

U32 s74retdec_func_1(s74retdecInstance*i);

void s74retdec_call_cb(s74retdecInstance*i,U32 l0);

void s74retdecInstantiate(s74retdecInstance* instance, void* resolve(const char* module, const char* name));

void s74retdecFreeInstance(s74retdecInstance* instance);

#endif /* s74retdec_H */

