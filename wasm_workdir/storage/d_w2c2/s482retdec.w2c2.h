#ifndef s482retdec_H
#define s482retdec_H

#include "w2c2_base.h"

typedef struct s482retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s482retdecInstance;

void f0(s482retdecInstance*);

void f1(s482retdecInstance*);

U32 f2(s482retdecInstance*);

void f3(s482retdecInstance*,U32);

U32 f4(s482retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s482retdecInstance*,U32,U32,U32,U32,U32);

void f6(s482retdecInstance*,U32);

void f7(s482retdecInstance*,U32,U32,U32);

void f8(s482retdecInstance*,U32,U32,U32);

void s482retdec____wasm_call_ctors(s482retdecInstance*i);

void s482retdec____wasm_apply_data_relocs(s482retdecInstance*i);

U32 s482retdec_func_1(s482retdecInstance*i);

void s482retdec_call_cb(s482retdecInstance*i,U32 l0);

void s482retdecInstantiate(s482retdecInstance* instance, void* resolve(const char* module, const char* name));

void s482retdecFreeInstance(s482retdecInstance* instance);

#endif /* s482retdec_H */

