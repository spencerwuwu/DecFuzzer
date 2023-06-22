#ifndef s531retdec_H
#define s531retdec_H

#include "w2c2_base.h"

typedef struct s531retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s531retdecInstance;

void f0(s531retdecInstance*);

void f1(s531retdecInstance*);

U32 f2(s531retdecInstance*);

void f3(s531retdecInstance*,U32);

U32 f4(s531retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s531retdecInstance*,U32,U32,U32,U32,U32);

void f6(s531retdecInstance*,U32);

void f7(s531retdecInstance*,U32,U32,U32);

void f8(s531retdecInstance*,U32,U32,U32);

void s531retdec____wasm_call_ctors(s531retdecInstance*i);

void s531retdec____wasm_apply_data_relocs(s531retdecInstance*i);

U32 s531retdec_func_1(s531retdecInstance*i);

void s531retdec_call_cb(s531retdecInstance*i,U32 l0);

void s531retdecInstantiate(s531retdecInstance* instance, void* resolve(const char* module, const char* name));

void s531retdecFreeInstance(s531retdecInstance* instance);

#endif /* s531retdec_H */

