#ifndef s927retdec_H
#define s927retdec_H

#include "w2c2_base.h"

typedef struct s927retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s927retdecInstance;

void f0(s927retdecInstance*);

void f1(s927retdecInstance*);

U32 f2(s927retdecInstance*);

void f3(s927retdecInstance*,U32);

U32 f4(s927retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s927retdecInstance*,U32,U32,U32,U32,U32);

void f6(s927retdecInstance*,U32);

void f7(s927retdecInstance*,U32,U32,U32);

void f8(s927retdecInstance*,U32,U32,U32);

void s927retdec____wasm_call_ctors(s927retdecInstance*i);

void s927retdec____wasm_apply_data_relocs(s927retdecInstance*i);

U32 s927retdec_func_1(s927retdecInstance*i);

void s927retdec_call_cb(s927retdecInstance*i,U32 l0);

void s927retdecInstantiate(s927retdecInstance* instance, void* resolve(const char* module, const char* name));

void s927retdecFreeInstance(s927retdecInstance* instance);

#endif /* s927retdec_H */

