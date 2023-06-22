#ifndef s819retdec_H
#define s819retdec_H

#include "w2c2_base.h"

typedef struct s819retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s819retdecInstance;

void f0(s819retdecInstance*);

void f1(s819retdecInstance*);

U32 f2(s819retdecInstance*);

void f3(s819retdecInstance*,U32);

U32 f4(s819retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s819retdecInstance*,U32,U32,U32,U32,U32);

void f6(s819retdecInstance*,U32);

void f7(s819retdecInstance*,U32,U32,U32);

void f8(s819retdecInstance*,U32,U32,U32);

void s819retdec____wasm_call_ctors(s819retdecInstance*i);

void s819retdec____wasm_apply_data_relocs(s819retdecInstance*i);

U32 s819retdec_func_1(s819retdecInstance*i);

void s819retdec_call_cb(s819retdecInstance*i,U32 l0);

void s819retdecInstantiate(s819retdecInstance* instance, void* resolve(const char* module, const char* name));

void s819retdecFreeInstance(s819retdecInstance* instance);

#endif /* s819retdec_H */

