#ifndef s943retdec_H
#define s943retdec_H

#include "w2c2_base.h"

typedef struct s943retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s943retdecInstance;

void f0(s943retdecInstance*);

void f1(s943retdecInstance*);

U32 f2(s943retdecInstance*);

void f3(s943retdecInstance*,U32);

U32 f4(s943retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s943retdecInstance*,U32,U32,U32,U32,U32);

void f6(s943retdecInstance*,U32);

void f7(s943retdecInstance*,U32,U32,U32);

void f8(s943retdecInstance*,U32,U32,U32);

void s943retdec____wasm_call_ctors(s943retdecInstance*i);

void s943retdec____wasm_apply_data_relocs(s943retdecInstance*i);

U32 s943retdec_func_1(s943retdecInstance*i);

void s943retdec_call_cb(s943retdecInstance*i,U32 l0);

void s943retdecInstantiate(s943retdecInstance* instance, void* resolve(const char* module, const char* name));

void s943retdecFreeInstance(s943retdecInstance* instance);

#endif /* s943retdec_H */

