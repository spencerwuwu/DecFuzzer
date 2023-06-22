#ifndef s24retdec_H
#define s24retdec_H

#include "w2c2_base.h"

typedef struct s24retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s24retdecInstance;

void f0(s24retdecInstance*);

void f1(s24retdecInstance*);

U32 f2(s24retdecInstance*);

void f3(s24retdecInstance*,U32);

U32 f4(s24retdecInstance*,U32,U32,U32,U32);

void f5(s24retdecInstance*,U32,U32,U32,U32,U32);

void f6(s24retdecInstance*,U32);

void f7(s24retdecInstance*,U32,U32,U32);

void f8(s24retdecInstance*,U32,U32,U32);

void s24retdec____wasm_call_ctors(s24retdecInstance*i);

void s24retdec____wasm_apply_data_relocs(s24retdecInstance*i);

U32 s24retdec_func_1(s24retdecInstance*i);

void s24retdec_call_cb(s24retdecInstance*i,U32 l0);

void s24retdecInstantiate(s24retdecInstance* instance, void* resolve(const char* module, const char* name));

void s24retdecFreeInstance(s24retdecInstance* instance);

#endif /* s24retdec_H */

