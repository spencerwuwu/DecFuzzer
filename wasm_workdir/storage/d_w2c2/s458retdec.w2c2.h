#ifndef s458retdec_H
#define s458retdec_H

#include "w2c2_base.h"

typedef struct s458retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s458retdecInstance;

void f0(s458retdecInstance*);

void f1(s458retdecInstance*);

U32 f2(s458retdecInstance*);

void f3(s458retdecInstance*,U32);

U32 f4(s458retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s458retdecInstance*,U32,U32,U32,U32,U32);

void f6(s458retdecInstance*,U32);

void f7(s458retdecInstance*,U32,U32,U32);

void f8(s458retdecInstance*,U32,U32,U32);

void s458retdec____wasm_call_ctors(s458retdecInstance*i);

void s458retdec____wasm_apply_data_relocs(s458retdecInstance*i);

U32 s458retdec_func_1(s458retdecInstance*i);

void s458retdec_call_cb(s458retdecInstance*i,U32 l0);

void s458retdecInstantiate(s458retdecInstance* instance, void* resolve(const char* module, const char* name));

void s458retdecFreeInstance(s458retdecInstance* instance);

#endif /* s458retdec_H */

