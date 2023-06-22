#ifndef s269retdec_H
#define s269retdec_H

#include "w2c2_base.h"

typedef struct s269retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s269retdecInstance;

void f0(s269retdecInstance*);

void f1(s269retdecInstance*);

U32 f2(s269retdecInstance*);

void f3(s269retdecInstance*,U32);

U32 f4(s269retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s269retdecInstance*,U32,U32,U32,U32,U32);

void f6(s269retdecInstance*,U32);

void f7(s269retdecInstance*,U32,U32,U32);

void f8(s269retdecInstance*,U32,U32,U32);

void s269retdec____wasm_call_ctors(s269retdecInstance*i);

void s269retdec____wasm_apply_data_relocs(s269retdecInstance*i);

U32 s269retdec_func_1(s269retdecInstance*i);

void s269retdec_call_cb(s269retdecInstance*i,U32 l0);

void s269retdecInstantiate(s269retdecInstance* instance, void* resolve(const char* module, const char* name));

void s269retdecFreeInstance(s269retdecInstance* instance);

#endif /* s269retdec_H */

