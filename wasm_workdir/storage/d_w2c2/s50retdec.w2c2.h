#ifndef s50retdec_H
#define s50retdec_H

#include "w2c2_base.h"

typedef struct s50retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s50retdecInstance;

void f0(s50retdecInstance*);

void f1(s50retdecInstance*);

U32 f2(s50retdecInstance*);

void f3(s50retdecInstance*,U32);

U32 f4(s50retdecInstance*,U32,U32,U32,U32,U32);

void f5(s50retdecInstance*,U32,U32,U32,U32,U32);

void f6(s50retdecInstance*,U32);

void f7(s50retdecInstance*,U32,U32,U32);

void f8(s50retdecInstance*,U32,U32,U32);

void s50retdec____wasm_call_ctors(s50retdecInstance*i);

void s50retdec____wasm_apply_data_relocs(s50retdecInstance*i);

U32 s50retdec_func_1(s50retdecInstance*i);

void s50retdec_call_cb(s50retdecInstance*i,U32 l0);

void s50retdecInstantiate(s50retdecInstance* instance, void* resolve(const char* module, const char* name));

void s50retdecFreeInstance(s50retdecInstance* instance);

#endif /* s50retdec_H */

