#ifndef s615retdec_H
#define s615retdec_H

#include "w2c2_base.h"

typedef struct s615retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s615retdecInstance;

void f0(s615retdecInstance*);

void f1(s615retdecInstance*);

U32 f2(s615retdecInstance*);

void f3(s615retdecInstance*,U32);

U32 f4(s615retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s615retdecInstance*,U32,U32,U32,U32,U32);

void f6(s615retdecInstance*,U32);

void f7(s615retdecInstance*,U32,U32,U32);

void f8(s615retdecInstance*,U32,U32,U32);

void s615retdec____wasm_call_ctors(s615retdecInstance*i);

void s615retdec____wasm_apply_data_relocs(s615retdecInstance*i);

U32 s615retdec_func_1(s615retdecInstance*i);

void s615retdec_call_cb(s615retdecInstance*i,U32 l0);

void s615retdecInstantiate(s615retdecInstance* instance, void* resolve(const char* module, const char* name));

void s615retdecFreeInstance(s615retdecInstance* instance);

#endif /* s615retdec_H */

