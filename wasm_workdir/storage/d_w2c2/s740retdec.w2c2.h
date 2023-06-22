#ifndef s740retdec_H
#define s740retdec_H

#include "w2c2_base.h"

typedef struct s740retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s740retdecInstance;

void f0(s740retdecInstance*);

void f1(s740retdecInstance*);

U32 f2(s740retdecInstance*);

void f3(s740retdecInstance*,U32);

U32 f4(s740retdecInstance*,U32,U32,U32,U32,U32);

void f5(s740retdecInstance*,U32,U32,U32,U32,U32);

void f6(s740retdecInstance*,U32);

void f7(s740retdecInstance*,U32,U32,U32);

void f8(s740retdecInstance*,U32,U32,U32);

void s740retdec____wasm_call_ctors(s740retdecInstance*i);

void s740retdec____wasm_apply_data_relocs(s740retdecInstance*i);

U32 s740retdec_func_1(s740retdecInstance*i);

void s740retdec_call_cb(s740retdecInstance*i,U32 l0);

void s740retdecInstantiate(s740retdecInstance* instance, void* resolve(const char* module, const char* name));

void s740retdecFreeInstance(s740retdecInstance* instance);

#endif /* s740retdec_H */

