#ifndef s900retdec_H
#define s900retdec_H

#include "w2c2_base.h"

typedef struct s900retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s900retdecInstance;

void f0(s900retdecInstance*);

void f1(s900retdecInstance*);

U32 f2(s900retdecInstance*);

void f3(s900retdecInstance*,U32);

U32 f4(s900retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s900retdecInstance*,U32,U32,U32,U32,U32);

void f6(s900retdecInstance*,U32);

void f7(s900retdecInstance*,U32,U32,U32);

void f8(s900retdecInstance*,U32,U32,U32);

void s900retdec____wasm_call_ctors(s900retdecInstance*i);

void s900retdec____wasm_apply_data_relocs(s900retdecInstance*i);

U32 s900retdec_func_1(s900retdecInstance*i);

void s900retdec_call_cb(s900retdecInstance*i,U32 l0);

void s900retdecInstantiate(s900retdecInstance* instance, void* resolve(const char* module, const char* name));

void s900retdecFreeInstance(s900retdecInstance* instance);

#endif /* s900retdec_H */

