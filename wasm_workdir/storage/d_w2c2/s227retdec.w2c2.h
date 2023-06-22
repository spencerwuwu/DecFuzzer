#ifndef s227retdec_H
#define s227retdec_H

#include "w2c2_base.h"

typedef struct s227retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s227retdecInstance;

void f0(s227retdecInstance*);

void f1(s227retdecInstance*);

U32 f2(s227retdecInstance*);

void f3(s227retdecInstance*,U32);

U32 f4(s227retdecInstance*,U32,U32,U32,U32,U32);

void f5(s227retdecInstance*,U32,U32,U32,U32,U32);

void f6(s227retdecInstance*,U32);

void f7(s227retdecInstance*,U32,U32,U32);

void f8(s227retdecInstance*,U32,U32,U32);

void s227retdec____wasm_call_ctors(s227retdecInstance*i);

void s227retdec____wasm_apply_data_relocs(s227retdecInstance*i);

U32 s227retdec_func_1(s227retdecInstance*i);

void s227retdec_call_cb(s227retdecInstance*i,U32 l0);

void s227retdecInstantiate(s227retdecInstance* instance, void* resolve(const char* module, const char* name));

void s227retdecFreeInstance(s227retdecInstance* instance);

#endif /* s227retdec_H */

