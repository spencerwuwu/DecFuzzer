#ifndef s582retdec_H
#define s582retdec_H

#include "w2c2_base.h"

typedef struct s582retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s582retdecInstance;

void f0(s582retdecInstance*);

void f1(s582retdecInstance*);

U32 f2(s582retdecInstance*);

void f3(s582retdecInstance*,U32);

U32 f4(s582retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s582retdecInstance*,U32,U32,U32,U32,U32);

void f6(s582retdecInstance*,U32);

void f7(s582retdecInstance*,U32,U32,U32);

void f8(s582retdecInstance*,U32,U32,U32);

void s582retdec____wasm_call_ctors(s582retdecInstance*i);

void s582retdec____wasm_apply_data_relocs(s582retdecInstance*i);

U32 s582retdec_func_1(s582retdecInstance*i);

void s582retdec_call_cb(s582retdecInstance*i,U32 l0);

void s582retdecInstantiate(s582retdecInstance* instance, void* resolve(const char* module, const char* name));

void s582retdecFreeInstance(s582retdecInstance* instance);

#endif /* s582retdec_H */

