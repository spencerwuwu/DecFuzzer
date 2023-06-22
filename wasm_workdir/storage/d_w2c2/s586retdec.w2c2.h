#ifndef s586retdec_H
#define s586retdec_H

#include "w2c2_base.h"

typedef struct s586retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s586retdecInstance;

void f0(s586retdecInstance*);

void f1(s586retdecInstance*);

U32 f2(s586retdecInstance*);

void f3(s586retdecInstance*,U32);

U32 f4(s586retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s586retdecInstance*,U32,U32,U32,U32,U32);

void f6(s586retdecInstance*,U32);

void f7(s586retdecInstance*,U32,U32,U32);

void f8(s586retdecInstance*,U32,U32,U32);

void s586retdec____wasm_call_ctors(s586retdecInstance*i);

void s586retdec____wasm_apply_data_relocs(s586retdecInstance*i);

U32 s586retdec_func_1(s586retdecInstance*i);

void s586retdec_call_cb(s586retdecInstance*i,U32 l0);

void s586retdecInstantiate(s586retdecInstance* instance, void* resolve(const char* module, const char* name));

void s586retdecFreeInstance(s586retdecInstance* instance);

#endif /* s586retdec_H */

