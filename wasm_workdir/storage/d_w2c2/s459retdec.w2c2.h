#ifndef s459retdec_H
#define s459retdec_H

#include "w2c2_base.h"

typedef struct s459retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s459retdecInstance;

void f0(s459retdecInstance*);

void f1(s459retdecInstance*);

U32 f2(s459retdecInstance*);

void f3(s459retdecInstance*,U32);

U32 f4(s459retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s459retdecInstance*,U32,U32,U32,U32,U32);

void f6(s459retdecInstance*,U32);

void f7(s459retdecInstance*,U32,U32,U32);

void f8(s459retdecInstance*,U32,U32,U32);

void s459retdec____wasm_call_ctors(s459retdecInstance*i);

void s459retdec____wasm_apply_data_relocs(s459retdecInstance*i);

U32 s459retdec_func_1(s459retdecInstance*i);

void s459retdec_call_cb(s459retdecInstance*i,U32 l0);

void s459retdecInstantiate(s459retdecInstance* instance, void* resolve(const char* module, const char* name));

void s459retdecFreeInstance(s459retdecInstance* instance);

#endif /* s459retdec_H */

