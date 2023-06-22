#ifndef s726retdec_H
#define s726retdec_H

#include "w2c2_base.h"

typedef struct s726retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s726retdecInstance;

void f0(s726retdecInstance*);

void f1(s726retdecInstance*);

U32 f2(s726retdecInstance*);

void f3(s726retdecInstance*,U32);

U32 f4(s726retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s726retdecInstance*,U32,U32,U32,U32,U32);

void f6(s726retdecInstance*,U32);

void f7(s726retdecInstance*,U32,U32,U32);

void f8(s726retdecInstance*,U32,U32,U32);

void s726retdec____wasm_call_ctors(s726retdecInstance*i);

void s726retdec____wasm_apply_data_relocs(s726retdecInstance*i);

U32 s726retdec_func_1(s726retdecInstance*i);

void s726retdec_call_cb(s726retdecInstance*i,U32 l0);

void s726retdecInstantiate(s726retdecInstance* instance, void* resolve(const char* module, const char* name));

void s726retdecFreeInstance(s726retdecInstance* instance);

#endif /* s726retdec_H */

