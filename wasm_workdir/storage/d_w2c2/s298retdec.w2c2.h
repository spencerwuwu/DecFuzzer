#ifndef s298retdec_H
#define s298retdec_H

#include "w2c2_base.h"

typedef struct s298retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s298retdecInstance;

void f0(s298retdecInstance*);

void f1(s298retdecInstance*);

U32 f2(s298retdecInstance*);

void f3(s298retdecInstance*,U32);

U32 f4(s298retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s298retdecInstance*,U32,U32,U32,U32,U32);

void f6(s298retdecInstance*,U32);

void f7(s298retdecInstance*,U32,U32,U32);

void f8(s298retdecInstance*,U32,U32,U32);

void s298retdec____wasm_call_ctors(s298retdecInstance*i);

void s298retdec____wasm_apply_data_relocs(s298retdecInstance*i);

U32 s298retdec_func_1(s298retdecInstance*i);

void s298retdec_call_cb(s298retdecInstance*i,U32 l0);

void s298retdecInstantiate(s298retdecInstance* instance, void* resolve(const char* module, const char* name));

void s298retdecFreeInstance(s298retdecInstance* instance);

#endif /* s298retdec_H */

