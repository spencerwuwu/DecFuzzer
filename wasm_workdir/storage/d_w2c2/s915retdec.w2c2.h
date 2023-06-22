#ifndef s915retdec_H
#define s915retdec_H

#include "w2c2_base.h"

typedef struct s915retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s915retdecInstance;

void f0(s915retdecInstance*);

void f1(s915retdecInstance*);

U32 f2(s915retdecInstance*);

void f3(s915retdecInstance*,U32);

U32 f4(s915retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s915retdecInstance*,U32,U32,U32,U32,U32);

void f6(s915retdecInstance*,U32);

void f7(s915retdecInstance*,U32,U32,U32);

void f8(s915retdecInstance*,U32,U32,U32);

void s915retdec____wasm_call_ctors(s915retdecInstance*i);

void s915retdec____wasm_apply_data_relocs(s915retdecInstance*i);

U32 s915retdec_func_1(s915retdecInstance*i);

void s915retdec_call_cb(s915retdecInstance*i,U32 l0);

void s915retdecInstantiate(s915retdecInstance* instance, void* resolve(const char* module, const char* name));

void s915retdecFreeInstance(s915retdecInstance* instance);

#endif /* s915retdec_H */

