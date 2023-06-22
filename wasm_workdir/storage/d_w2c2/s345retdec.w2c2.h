#ifndef s345retdec_H
#define s345retdec_H

#include "w2c2_base.h"

typedef struct s345retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s345retdecInstance;

void f0(s345retdecInstance*);

void f1(s345retdecInstance*);

U32 f2(s345retdecInstance*);

void f3(s345retdecInstance*,U32);

U32 f4(s345retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s345retdecInstance*,U32,U32,U32,U32,U32);

void f6(s345retdecInstance*,U32);

void f7(s345retdecInstance*,U32,U32,U32);

void f8(s345retdecInstance*,U32,U32,U32);

void s345retdec____wasm_call_ctors(s345retdecInstance*i);

void s345retdec____wasm_apply_data_relocs(s345retdecInstance*i);

U32 s345retdec_func_1(s345retdecInstance*i);

void s345retdec_call_cb(s345retdecInstance*i,U32 l0);

void s345retdecInstantiate(s345retdecInstance* instance, void* resolve(const char* module, const char* name));

void s345retdecFreeInstance(s345retdecInstance* instance);

#endif /* s345retdec_H */

