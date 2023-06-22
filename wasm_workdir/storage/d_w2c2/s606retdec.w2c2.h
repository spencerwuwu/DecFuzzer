#ifndef s606retdec_H
#define s606retdec_H

#include "w2c2_base.h"

typedef struct s606retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s606retdecInstance;

void f0(s606retdecInstance*);

void f1(s606retdecInstance*);

U32 f2(s606retdecInstance*);

void f3(s606retdecInstance*,U32);

U32 f4(s606retdecInstance*,U32,U32,U32,U32,U32);

void f5(s606retdecInstance*,U32,U32,U32,U32,U32);

void f6(s606retdecInstance*,U32);

void f7(s606retdecInstance*,U32,U32,U32);

void f8(s606retdecInstance*,U32,U32,U32);

void s606retdec____wasm_call_ctors(s606retdecInstance*i);

void s606retdec____wasm_apply_data_relocs(s606retdecInstance*i);

U32 s606retdec_func_1(s606retdecInstance*i);

void s606retdec_call_cb(s606retdecInstance*i,U32 l0);

void s606retdecInstantiate(s606retdecInstance* instance, void* resolve(const char* module, const char* name));

void s606retdecFreeInstance(s606retdecInstance* instance);

#endif /* s606retdec_H */

