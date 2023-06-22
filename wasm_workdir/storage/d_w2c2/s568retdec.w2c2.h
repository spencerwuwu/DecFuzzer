#ifndef s568retdec_H
#define s568retdec_H

#include "w2c2_base.h"

typedef struct s568retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s568retdecInstance;

void f0(s568retdecInstance*);

void f1(s568retdecInstance*);

U32 f2(s568retdecInstance*);

void f3(s568retdecInstance*,U32);

U32 f4(s568retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s568retdecInstance*,U32,U32,U32,U32,U32);

void f6(s568retdecInstance*,U32);

void f7(s568retdecInstance*,U32,U32,U32);

void f8(s568retdecInstance*,U32,U32,U32);

void s568retdec____wasm_call_ctors(s568retdecInstance*i);

void s568retdec____wasm_apply_data_relocs(s568retdecInstance*i);

U32 s568retdec_func_1(s568retdecInstance*i);

void s568retdec_call_cb(s568retdecInstance*i,U32 l0);

void s568retdecInstantiate(s568retdecInstance* instance, void* resolve(const char* module, const char* name));

void s568retdecFreeInstance(s568retdecInstance* instance);

#endif /* s568retdec_H */

