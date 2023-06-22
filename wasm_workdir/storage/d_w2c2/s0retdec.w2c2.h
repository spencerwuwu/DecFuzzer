#ifndef s0retdec_H
#define s0retdec_H

#include "w2c2_base.h"

typedef struct s0retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s0retdecInstance;

void f0(s0retdecInstance*);

void f1(s0retdecInstance*);

U32 f2(s0retdecInstance*);

void f3(s0retdecInstance*,U32);

U32 f4(s0retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s0retdecInstance*,U32,U32,U32,U32,U32);

void f6(s0retdecInstance*,U32);

void f7(s0retdecInstance*,U32,U32,U32);

void f8(s0retdecInstance*,U32,U32,U32);

void s0retdec____wasm_call_ctors(s0retdecInstance*i);

void s0retdec____wasm_apply_data_relocs(s0retdecInstance*i);

U32 s0retdec_func_1(s0retdecInstance*i);

void s0retdec_call_cb(s0retdecInstance*i,U32 l0);

void s0retdecInstantiate(s0retdecInstance* instance, void* resolve(const char* module, const char* name));

void s0retdecFreeInstance(s0retdecInstance* instance);

#endif /* s0retdec_H */

