#ifndef s340retdec_H
#define s340retdec_H

#include "w2c2_base.h"

typedef struct s340retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s340retdecInstance;

void f0(s340retdecInstance*);

void f1(s340retdecInstance*);

U32 f2(s340retdecInstance*);

void f3(s340retdecInstance*,U32);

U32 f4(s340retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s340retdecInstance*,U32,U32,U32,U32,U32);

void f6(s340retdecInstance*,U32);

void f7(s340retdecInstance*,U32,U32,U32);

void f8(s340retdecInstance*,U32,U32,U32);

void s340retdec____wasm_call_ctors(s340retdecInstance*i);

void s340retdec____wasm_apply_data_relocs(s340retdecInstance*i);

U32 s340retdec_func_1(s340retdecInstance*i);

void s340retdec_call_cb(s340retdecInstance*i,U32 l0);

void s340retdecInstantiate(s340retdecInstance* instance, void* resolve(const char* module, const char* name));

void s340retdecFreeInstance(s340retdecInstance* instance);

#endif /* s340retdec_H */

