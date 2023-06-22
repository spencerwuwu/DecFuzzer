#ifndef s31retdec_H
#define s31retdec_H

#include "w2c2_base.h"

typedef struct s31retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s31retdecInstance;

void f0(s31retdecInstance*);

void f1(s31retdecInstance*);

U32 f2(s31retdecInstance*);

void f3(s31retdecInstance*,U32);

U32 f4(s31retdecInstance*,U32,U32,U32);

void f5(s31retdecInstance*,U32,U32,U32,U32,U32);

void f6(s31retdecInstance*,U32);

void f7(s31retdecInstance*,U32,U32,U32);

void f8(s31retdecInstance*,U32,U32,U32);

void s31retdec____wasm_call_ctors(s31retdecInstance*i);

void s31retdec____wasm_apply_data_relocs(s31retdecInstance*i);

U32 s31retdec_func_1(s31retdecInstance*i);

void s31retdec_call_cb(s31retdecInstance*i,U32 l0);

void s31retdecInstantiate(s31retdecInstance* instance, void* resolve(const char* module, const char* name));

void s31retdecFreeInstance(s31retdecInstance* instance);

#endif /* s31retdec_H */

