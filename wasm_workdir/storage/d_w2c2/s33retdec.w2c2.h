#ifndef s33retdec_H
#define s33retdec_H

#include "w2c2_base.h"

typedef struct s33retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s33retdecInstance;

void f0(s33retdecInstance*);

void f1(s33retdecInstance*);

U32 f2(s33retdecInstance*);

void f3(s33retdecInstance*,U32);

U32 f4(s33retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s33retdecInstance*,U32,U32,U32,U32,U32);

void f6(s33retdecInstance*,U32);

void f7(s33retdecInstance*,U32,U32,U32);

void f8(s33retdecInstance*,U32,U32,U32);

void s33retdec____wasm_call_ctors(s33retdecInstance*i);

void s33retdec____wasm_apply_data_relocs(s33retdecInstance*i);

U32 s33retdec_func_1(s33retdecInstance*i);

void s33retdec_call_cb(s33retdecInstance*i,U32 l0);

void s33retdecInstantiate(s33retdecInstance* instance, void* resolve(const char* module, const char* name));

void s33retdecFreeInstance(s33retdecInstance* instance);

#endif /* s33retdec_H */

