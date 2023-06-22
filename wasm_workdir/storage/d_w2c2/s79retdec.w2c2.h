#ifndef s79retdec_H
#define s79retdec_H

#include "w2c2_base.h"

typedef struct s79retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s79retdecInstance;

void f0(s79retdecInstance*);

void f1(s79retdecInstance*);

U32 f2(s79retdecInstance*);

void f3(s79retdecInstance*,U32);

U32 f4(s79retdecInstance*,U32,U32,U32);

void f5(s79retdecInstance*,U32,U32,U32,U32,U32);

void f6(s79retdecInstance*,U32);

void f7(s79retdecInstance*,U32,U32,U32);

void f8(s79retdecInstance*,U32,U32,U32);

void s79retdec____wasm_call_ctors(s79retdecInstance*i);

void s79retdec____wasm_apply_data_relocs(s79retdecInstance*i);

U32 s79retdec_func_1(s79retdecInstance*i);

void s79retdec_call_cb(s79retdecInstance*i,U32 l0);

void s79retdecInstantiate(s79retdecInstance* instance, void* resolve(const char* module, const char* name));

void s79retdecFreeInstance(s79retdecInstance* instance);

#endif /* s79retdec_H */

