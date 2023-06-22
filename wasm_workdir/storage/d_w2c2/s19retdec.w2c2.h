#ifndef s19retdec_H
#define s19retdec_H

#include "w2c2_base.h"

typedef struct s19retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s19retdecInstance;

void f0(s19retdecInstance*);

void f1(s19retdecInstance*);

U32 f2(s19retdecInstance*);

void f3(s19retdecInstance*,U32);

U32 f4(s19retdecInstance*,U32,U32,U32,U32);

void f5(s19retdecInstance*,U32,U32,U32,U32,U32);

void f6(s19retdecInstance*,U32);

void f7(s19retdecInstance*,U32,U32,U32);

void f8(s19retdecInstance*,U32,U32,U32);

void s19retdec____wasm_call_ctors(s19retdecInstance*i);

void s19retdec____wasm_apply_data_relocs(s19retdecInstance*i);

U32 s19retdec_func_1(s19retdecInstance*i);

void s19retdec_call_cb(s19retdecInstance*i,U32 l0);

void s19retdecInstantiate(s19retdecInstance* instance, void* resolve(const char* module, const char* name));

void s19retdecFreeInstance(s19retdecInstance* instance);

#endif /* s19retdec_H */

