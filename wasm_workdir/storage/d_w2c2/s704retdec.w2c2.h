#ifndef s704retdec_H
#define s704retdec_H

#include "w2c2_base.h"

typedef struct s704retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s704retdecInstance;

void f0(s704retdecInstance*);

void f1(s704retdecInstance*);

U32 f2(s704retdecInstance*);

void f3(s704retdecInstance*,U32);

U32 f4(s704retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s704retdecInstance*,U32,U32,U32,U32,U32);

void f6(s704retdecInstance*,U32);

void f7(s704retdecInstance*,U32,U32,U32);

void f8(s704retdecInstance*,U32,U32,U32);

void s704retdec____wasm_call_ctors(s704retdecInstance*i);

void s704retdec____wasm_apply_data_relocs(s704retdecInstance*i);

U32 s704retdec_func_1(s704retdecInstance*i);

void s704retdec_call_cb(s704retdecInstance*i,U32 l0);

void s704retdecInstantiate(s704retdecInstance* instance, void* resolve(const char* module, const char* name));

void s704retdecFreeInstance(s704retdecInstance* instance);

#endif /* s704retdec_H */

