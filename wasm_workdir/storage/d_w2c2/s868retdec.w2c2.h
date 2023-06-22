#ifndef s868retdec_H
#define s868retdec_H

#include "w2c2_base.h"

typedef struct s868retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s868retdecInstance;

void f0(s868retdecInstance*);

void f1(s868retdecInstance*);

U32 f2(s868retdecInstance*);

void f3(s868retdecInstance*,U32);

U32 f4(s868retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s868retdecInstance*,U32,U32,U32,U32,U32);

void f6(s868retdecInstance*,U32);

void f7(s868retdecInstance*,U32,U32,U32);

void f8(s868retdecInstance*,U32,U32,U32);

void s868retdec____wasm_call_ctors(s868retdecInstance*i);

void s868retdec____wasm_apply_data_relocs(s868retdecInstance*i);

U32 s868retdec_func_1(s868retdecInstance*i);

void s868retdec_call_cb(s868retdecInstance*i,U32 l0);

void s868retdecInstantiate(s868retdecInstance* instance, void* resolve(const char* module, const char* name));

void s868retdecFreeInstance(s868retdecInstance* instance);

#endif /* s868retdec_H */

