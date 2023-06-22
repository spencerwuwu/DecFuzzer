#ifndef s544retdec_H
#define s544retdec_H

#include "w2c2_base.h"

typedef struct s544retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s544retdecInstance;

void f0(s544retdecInstance*);

void f1(s544retdecInstance*);

U32 f2(s544retdecInstance*);

void f3(s544retdecInstance*,U32);

U32 f4(s544retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s544retdecInstance*,U32,U32,U32,U32,U32);

void f6(s544retdecInstance*,U32);

void f7(s544retdecInstance*,U32,U32,U32);

void f8(s544retdecInstance*,U32,U32,U32);

void s544retdec____wasm_call_ctors(s544retdecInstance*i);

void s544retdec____wasm_apply_data_relocs(s544retdecInstance*i);

U32 s544retdec_func_1(s544retdecInstance*i);

void s544retdec_call_cb(s544retdecInstance*i,U32 l0);

void s544retdecInstantiate(s544retdecInstance* instance, void* resolve(const char* module, const char* name));

void s544retdecFreeInstance(s544retdecInstance* instance);

#endif /* s544retdec_H */

