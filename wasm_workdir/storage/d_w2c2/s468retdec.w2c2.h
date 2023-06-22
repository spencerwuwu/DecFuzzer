#ifndef s468retdec_H
#define s468retdec_H

#include "w2c2_base.h"

typedef struct s468retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s468retdecInstance;

void f0(s468retdecInstance*);

void f1(s468retdecInstance*);

U32 f2(s468retdecInstance*);

void f3(s468retdecInstance*,U32);

U32 f4(s468retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s468retdecInstance*,U32,U32,U32,U32,U32);

void f6(s468retdecInstance*,U32);

void f7(s468retdecInstance*,U32,U32,U32);

void f8(s468retdecInstance*,U32,U32,U32);

void s468retdec____wasm_call_ctors(s468retdecInstance*i);

void s468retdec____wasm_apply_data_relocs(s468retdecInstance*i);

U32 s468retdec_func_1(s468retdecInstance*i);

void s468retdec_call_cb(s468retdecInstance*i,U32 l0);

void s468retdecInstantiate(s468retdecInstance* instance, void* resolve(const char* module, const char* name));

void s468retdecFreeInstance(s468retdecInstance* instance);

#endif /* s468retdec_H */

