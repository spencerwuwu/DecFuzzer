#ifndef s649retdec_H
#define s649retdec_H

#include "w2c2_base.h"

typedef struct s649retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s649retdecInstance;

void f0(s649retdecInstance*);

void f1(s649retdecInstance*);

U32 f2(s649retdecInstance*);

void f3(s649retdecInstance*,U32);

U32 f4(s649retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s649retdecInstance*,U32,U32,U32,U32,U32);

void f6(s649retdecInstance*,U32);

void f7(s649retdecInstance*,U32,U32,U32);

void f8(s649retdecInstance*,U32,U32,U32);

void s649retdec____wasm_call_ctors(s649retdecInstance*i);

void s649retdec____wasm_apply_data_relocs(s649retdecInstance*i);

U32 s649retdec_func_1(s649retdecInstance*i);

void s649retdec_call_cb(s649retdecInstance*i,U32 l0);

void s649retdecInstantiate(s649retdecInstance* instance, void* resolve(const char* module, const char* name));

void s649retdecFreeInstance(s649retdecInstance* instance);

#endif /* s649retdec_H */

