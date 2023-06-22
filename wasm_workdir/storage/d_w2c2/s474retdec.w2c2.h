#ifndef s474retdec_H
#define s474retdec_H

#include "w2c2_base.h"

typedef struct s474retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s474retdecInstance;

void f0(s474retdecInstance*);

void f1(s474retdecInstance*);

U32 f2(s474retdecInstance*);

void f3(s474retdecInstance*,U32);

U32 f4(s474retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s474retdecInstance*,U32,U32,U32,U32,U32);

void f6(s474retdecInstance*,U32);

void f7(s474retdecInstance*,U32,U32,U32);

void f8(s474retdecInstance*,U32,U32,U32);

void s474retdec____wasm_call_ctors(s474retdecInstance*i);

void s474retdec____wasm_apply_data_relocs(s474retdecInstance*i);

U32 s474retdec_func_1(s474retdecInstance*i);

void s474retdec_call_cb(s474retdecInstance*i,U32 l0);

void s474retdecInstantiate(s474retdecInstance* instance, void* resolve(const char* module, const char* name));

void s474retdecFreeInstance(s474retdecInstance* instance);

#endif /* s474retdec_H */

