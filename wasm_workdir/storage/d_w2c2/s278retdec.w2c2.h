#ifndef s278retdec_H
#define s278retdec_H

#include "w2c2_base.h"

typedef struct s278retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s278retdecInstance;

void f0(s278retdecInstance*);

void f1(s278retdecInstance*);

U32 f2(s278retdecInstance*);

void f3(s278retdecInstance*,U32);

U32 f4(s278retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s278retdecInstance*,U32,U32,U32,U32,U32);

void f6(s278retdecInstance*,U32);

void f7(s278retdecInstance*,U32,U32,U32);

void f8(s278retdecInstance*,U32,U32,U32);

void s278retdec____wasm_call_ctors(s278retdecInstance*i);

void s278retdec____wasm_apply_data_relocs(s278retdecInstance*i);

U32 s278retdec_func_1(s278retdecInstance*i);

void s278retdec_call_cb(s278retdecInstance*i,U32 l0);

void s278retdecInstantiate(s278retdecInstance* instance, void* resolve(const char* module, const char* name));

void s278retdecFreeInstance(s278retdecInstance* instance);

#endif /* s278retdec_H */

