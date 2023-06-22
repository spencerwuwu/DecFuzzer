#ifndef s64retdec_H
#define s64retdec_H

#include "w2c2_base.h"

typedef struct s64retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s64retdecInstance;

void f0(s64retdecInstance*);

void f1(s64retdecInstance*);

U32 f2(s64retdecInstance*);

void f3(s64retdecInstance*,U32);

void f4(s64retdecInstance*,U32);

void s64retdec____wasm_call_ctors(s64retdecInstance*i);

void s64retdec____wasm_apply_data_relocs(s64retdecInstance*i);

U32 s64retdec_func_1(s64retdecInstance*i);

void s64retdec_call_cb(s64retdecInstance*i,U32 l0);

void s64retdecInstantiate(s64retdecInstance* instance, void* resolve(const char* module, const char* name));

void s64retdecFreeInstance(s64retdecInstance* instance);

#endif /* s64retdec_H */

