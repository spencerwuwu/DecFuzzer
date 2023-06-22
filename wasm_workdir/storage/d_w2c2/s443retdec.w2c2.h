#ifndef s443retdec_H
#define s443retdec_H

#include "w2c2_base.h"

typedef struct s443retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s443retdecInstance;

void f0(s443retdecInstance*);

void f1(s443retdecInstance*);

U32 f2(s443retdecInstance*);

void f3(s443retdecInstance*,U32);

U32 f4(s443retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s443retdecInstance*,U32,U32,U32,U32,U32);

void f6(s443retdecInstance*,U32);

void f7(s443retdecInstance*,U32,U32,U32);

void f8(s443retdecInstance*,U32,U32,U32);

void s443retdec____wasm_call_ctors(s443retdecInstance*i);

void s443retdec____wasm_apply_data_relocs(s443retdecInstance*i);

U32 s443retdec_func_1(s443retdecInstance*i);

void s443retdec_call_cb(s443retdecInstance*i,U32 l0);

void s443retdecInstantiate(s443retdecInstance* instance, void* resolve(const char* module, const char* name));

void s443retdecFreeInstance(s443retdecInstance* instance);

#endif /* s443retdec_H */

