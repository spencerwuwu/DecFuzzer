#ifndef s206retdec_H
#define s206retdec_H

#include "w2c2_base.h"

typedef struct s206retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s206retdecInstance;

void f0(s206retdecInstance*);

void f1(s206retdecInstance*);

U32 f2(s206retdecInstance*);

void f3(s206retdecInstance*,U32);

U32 f4(s206retdecInstance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s206retdecInstance*,U32,U32,U32,U32,U32);

void f6(s206retdecInstance*,U32);

void f7(s206retdecInstance*,U32,U32,U32);

void f8(s206retdecInstance*,U32,U32,U32);

void s206retdec____wasm_call_ctors(s206retdecInstance*i);

void s206retdec____wasm_apply_data_relocs(s206retdecInstance*i);

U32 s206retdec_func_1(s206retdecInstance*i);

void s206retdec_call_cb(s206retdecInstance*i,U32 l0);

void s206retdecInstantiate(s206retdecInstance* instance, void* resolve(const char* module, const char* name));

void s206retdecFreeInstance(s206retdecInstance* instance);

#endif /* s206retdec_H */

