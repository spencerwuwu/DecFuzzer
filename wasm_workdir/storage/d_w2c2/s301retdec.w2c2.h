#ifndef s301retdec_H
#define s301retdec_H

#include "w2c2_base.h"

typedef struct s301retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s301retdecInstance;

void f0(s301retdecInstance*);

void f1(s301retdecInstance*);

U32 f2(s301retdecInstance*);

void f3(s301retdecInstance*,U32);

U32 f4(s301retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s301retdecInstance*,U32,U32,U32,U32,U32);

void f6(s301retdecInstance*,U32);

void f7(s301retdecInstance*,U32,U32,U32);

void f8(s301retdecInstance*,U32,U32,U32);

void s301retdec____wasm_call_ctors(s301retdecInstance*i);

void s301retdec____wasm_apply_data_relocs(s301retdecInstance*i);

U32 s301retdec_func_1(s301retdecInstance*i);

void s301retdec_call_cb(s301retdecInstance*i,U32 l0);

void s301retdecInstantiate(s301retdecInstance* instance, void* resolve(const char* module, const char* name));

void s301retdecFreeInstance(s301retdecInstance* instance);

#endif /* s301retdec_H */

