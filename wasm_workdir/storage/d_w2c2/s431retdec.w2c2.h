#ifndef s431retdec_H
#define s431retdec_H

#include "w2c2_base.h"

typedef struct s431retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s431retdecInstance;

void f0(s431retdecInstance*);

void f1(s431retdecInstance*);

U32 f2(s431retdecInstance*);

void f3(s431retdecInstance*,U32);

U32 f4(s431retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s431retdecInstance*,U32,U32,U32,U32,U32);

void f6(s431retdecInstance*,U32);

void f7(s431retdecInstance*,U32,U32,U32);

void f8(s431retdecInstance*,U32,U32,U32);

void s431retdec____wasm_call_ctors(s431retdecInstance*i);

void s431retdec____wasm_apply_data_relocs(s431retdecInstance*i);

U32 s431retdec_func_1(s431retdecInstance*i);

void s431retdec_call_cb(s431retdecInstance*i,U32 l0);

void s431retdecInstantiate(s431retdecInstance* instance, void* resolve(const char* module, const char* name));

void s431retdecFreeInstance(s431retdecInstance* instance);

#endif /* s431retdec_H */

