#ifndef s493retdec_H
#define s493retdec_H

#include "w2c2_base.h"

typedef struct s493retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s493retdecInstance;

void f0(s493retdecInstance*);

void f1(s493retdecInstance*);

U32 f2(s493retdecInstance*);

void f3(s493retdecInstance*,U32);

U32 f4(s493retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s493retdecInstance*,U32,U32,U32,U32,U32);

void f6(s493retdecInstance*,U32);

void f7(s493retdecInstance*,U32,U32,U32);

void f8(s493retdecInstance*,U32,U32,U32);

void s493retdec____wasm_call_ctors(s493retdecInstance*i);

void s493retdec____wasm_apply_data_relocs(s493retdecInstance*i);

U32 s493retdec_func_1(s493retdecInstance*i);

void s493retdec_call_cb(s493retdecInstance*i,U32 l0);

void s493retdecInstantiate(s493retdecInstance* instance, void* resolve(const char* module, const char* name));

void s493retdecFreeInstance(s493retdecInstance* instance);

#endif /* s493retdec_H */

