#ifndef s986retdec_H
#define s986retdec_H

#include "w2c2_base.h"

typedef struct s986retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s986retdecInstance;

void f0(s986retdecInstance*);

void f1(s986retdecInstance*);

U32 f2(s986retdecInstance*);

void f3(s986retdecInstance*,U32);

U32 f4(s986retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s986retdecInstance*,U32,U32,U32,U32,U32);

void f6(s986retdecInstance*,U32);

void f7(s986retdecInstance*,U32,U32,U32);

void f8(s986retdecInstance*,U32,U32,U32);

void s986retdec____wasm_call_ctors(s986retdecInstance*i);

void s986retdec____wasm_apply_data_relocs(s986retdecInstance*i);

U32 s986retdec_func_1(s986retdecInstance*i);

void s986retdec_call_cb(s986retdecInstance*i,U32 l0);

void s986retdecInstantiate(s986retdecInstance* instance, void* resolve(const char* module, const char* name));

void s986retdecFreeInstance(s986retdecInstance* instance);

#endif /* s986retdec_H */

