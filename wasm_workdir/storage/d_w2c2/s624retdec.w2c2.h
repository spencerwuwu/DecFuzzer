#ifndef s624retdec_H
#define s624retdec_H

#include "w2c2_base.h"

typedef struct s624retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s624retdecInstance;

void f0(s624retdecInstance*);

void f1(s624retdecInstance*);

U32 f2(s624retdecInstance*);

void f3(s624retdecInstance*,U32);

U32 f4(s624retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s624retdecInstance*,U32,U32,U32,U32,U32);

void f6(s624retdecInstance*,U32);

void f7(s624retdecInstance*,U32,U32,U32);

void f8(s624retdecInstance*,U32,U32,U32);

void s624retdec____wasm_call_ctors(s624retdecInstance*i);

void s624retdec____wasm_apply_data_relocs(s624retdecInstance*i);

U32 s624retdec_func_1(s624retdecInstance*i);

void s624retdec_call_cb(s624retdecInstance*i,U32 l0);

void s624retdecInstantiate(s624retdecInstance* instance, void* resolve(const char* module, const char* name));

void s624retdecFreeInstance(s624retdecInstance* instance);

#endif /* s624retdec_H */

