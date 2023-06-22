#ifndef s283retdec_H
#define s283retdec_H

#include "w2c2_base.h"

typedef struct s283retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s283retdecInstance;

void f0(s283retdecInstance*);

void f1(s283retdecInstance*);

U32 f2(s283retdecInstance*);

void f3(s283retdecInstance*,U32);

U32 f4(s283retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s283retdecInstance*,U32,U32,U32,U32,U32);

void f6(s283retdecInstance*,U32);

void f7(s283retdecInstance*,U32,U32,U32);

void f8(s283retdecInstance*,U32,U32,U32);

void s283retdec____wasm_call_ctors(s283retdecInstance*i);

void s283retdec____wasm_apply_data_relocs(s283retdecInstance*i);

U32 s283retdec_func_1(s283retdecInstance*i);

void s283retdec_call_cb(s283retdecInstance*i,U32 l0);

void s283retdecInstantiate(s283retdecInstance* instance, void* resolve(const char* module, const char* name));

void s283retdecFreeInstance(s283retdecInstance* instance);

#endif /* s283retdec_H */

