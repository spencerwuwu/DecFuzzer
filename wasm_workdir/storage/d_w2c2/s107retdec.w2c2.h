#ifndef s107retdec_H
#define s107retdec_H

#include "w2c2_base.h"

typedef struct s107retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s107retdecInstance;

void f0(s107retdecInstance*);

void f1(s107retdecInstance*);

U32 f2(s107retdecInstance*);

void f3(s107retdecInstance*,U32);

U32 f4(s107retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s107retdecInstance*,U32,U32,U32,U32,U32);

void f6(s107retdecInstance*,U32);

void f7(s107retdecInstance*,U32,U32,U32);

void f8(s107retdecInstance*,U32,U32,U32);

void s107retdec____wasm_call_ctors(s107retdecInstance*i);

void s107retdec____wasm_apply_data_relocs(s107retdecInstance*i);

U32 s107retdec_func_1(s107retdecInstance*i);

void s107retdec_call_cb(s107retdecInstance*i,U32 l0);

void s107retdecInstantiate(s107retdecInstance* instance, void* resolve(const char* module, const char* name));

void s107retdecFreeInstance(s107retdecInstance* instance);

#endif /* s107retdec_H */

