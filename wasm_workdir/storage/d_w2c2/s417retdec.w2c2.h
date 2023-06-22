#ifndef s417retdec_H
#define s417retdec_H

#include "w2c2_base.h"

typedef struct s417retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s417retdecInstance;

void f0(s417retdecInstance*);

void f1(s417retdecInstance*);

U32 f2(s417retdecInstance*);

void f3(s417retdecInstance*,U32);

U32 f4(s417retdecInstance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s417retdecInstance*,U32,U32,U32,U32,U32);

void f6(s417retdecInstance*,U32);

void f7(s417retdecInstance*,U32,U32,U32);

void f8(s417retdecInstance*,U32,U32,U32);

void s417retdec____wasm_call_ctors(s417retdecInstance*i);

void s417retdec____wasm_apply_data_relocs(s417retdecInstance*i);

U32 s417retdec_func_1(s417retdecInstance*i);

void s417retdec_call_cb(s417retdecInstance*i,U32 l0);

void s417retdecInstantiate(s417retdecInstance* instance, void* resolve(const char* module, const char* name));

void s417retdecFreeInstance(s417retdecInstance* instance);

#endif /* s417retdec_H */

