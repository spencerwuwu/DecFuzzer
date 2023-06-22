#ifndef s506retdec_H
#define s506retdec_H

#include "w2c2_base.h"

typedef struct s506retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s506retdecInstance;

void f0(s506retdecInstance*);

void f1(s506retdecInstance*);

U32 f2(s506retdecInstance*);

void f3(s506retdecInstance*,U32);

U32 f4(s506retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s506retdecInstance*,U32,U32,U32,U32,U32);

void f6(s506retdecInstance*,U32);

void f7(s506retdecInstance*,U32,U32,U32);

void f8(s506retdecInstance*,U32,U32,U32);

void s506retdec____wasm_call_ctors(s506retdecInstance*i);

void s506retdec____wasm_apply_data_relocs(s506retdecInstance*i);

U32 s506retdec_func_1(s506retdecInstance*i);

void s506retdec_call_cb(s506retdecInstance*i,U32 l0);

void s506retdecInstantiate(s506retdecInstance* instance, void* resolve(const char* module, const char* name));

void s506retdecFreeInstance(s506retdecInstance* instance);

#endif /* s506retdec_H */

