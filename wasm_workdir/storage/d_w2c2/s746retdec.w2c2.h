#ifndef s746retdec_H
#define s746retdec_H

#include "w2c2_base.h"

typedef struct s746retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s746retdecInstance;

void f0(s746retdecInstance*);

void f1(s746retdecInstance*);

U32 f2(s746retdecInstance*);

void f3(s746retdecInstance*,U32);

U32 f4(s746retdecInstance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s746retdecInstance*,U32,U32,U32,U32,U32);

void f6(s746retdecInstance*,U32);

void f7(s746retdecInstance*,U32,U32,U32);

void f8(s746retdecInstance*,U32,U32,U32);

void s746retdec____wasm_call_ctors(s746retdecInstance*i);

void s746retdec____wasm_apply_data_relocs(s746retdecInstance*i);

U32 s746retdec_func_1(s746retdecInstance*i);

void s746retdec_call_cb(s746retdecInstance*i,U32 l0);

void s746retdecInstantiate(s746retdecInstance* instance, void* resolve(const char* module, const char* name));

void s746retdecFreeInstance(s746retdecInstance* instance);

#endif /* s746retdec_H */

