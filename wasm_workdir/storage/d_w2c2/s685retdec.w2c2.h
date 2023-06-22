#ifndef s685retdec_H
#define s685retdec_H

#include "w2c2_base.h"

typedef struct s685retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s685retdecInstance;

void f0(s685retdecInstance*);

void f1(s685retdecInstance*);

U32 f2(s685retdecInstance*);

void f3(s685retdecInstance*,U32);

U32 f4(s685retdecInstance*,U32,U32,U32,U32);

void f5(s685retdecInstance*,U32,U32,U32,U32,U32);

void f6(s685retdecInstance*,U32);

void f7(s685retdecInstance*,U32,U32,U32);

void f8(s685retdecInstance*,U32,U32,U32);

void s685retdec____wasm_call_ctors(s685retdecInstance*i);

void s685retdec____wasm_apply_data_relocs(s685retdecInstance*i);

U32 s685retdec_func_1(s685retdecInstance*i);

void s685retdec_call_cb(s685retdecInstance*i,U32 l0);

void s685retdecInstantiate(s685retdecInstance* instance, void* resolve(const char* module, const char* name));

void s685retdecFreeInstance(s685retdecInstance* instance);

#endif /* s685retdec_H */

