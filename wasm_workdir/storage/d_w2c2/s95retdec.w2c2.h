#ifndef s95retdec_H
#define s95retdec_H

#include "w2c2_base.h"

typedef struct s95retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s95retdecInstance;

void f0(s95retdecInstance*);

void f1(s95retdecInstance*);

U32 f2(s95retdecInstance*);

void f3(s95retdecInstance*,U32);

U32 f4(s95retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s95retdecInstance*,U32,U32,U32,U32,U32);

void f6(s95retdecInstance*,U32);

void f7(s95retdecInstance*,U32,U32,U32);

void f8(s95retdecInstance*,U32,U32,U32);

void s95retdec____wasm_call_ctors(s95retdecInstance*i);

void s95retdec____wasm_apply_data_relocs(s95retdecInstance*i);

U32 s95retdec_func_1(s95retdecInstance*i);

void s95retdec_call_cb(s95retdecInstance*i,U32 l0);

void s95retdecInstantiate(s95retdecInstance* instance, void* resolve(const char* module, const char* name));

void s95retdecFreeInstance(s95retdecInstance* instance);

#endif /* s95retdec_H */

