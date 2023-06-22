#ifndef s923retdec_H
#define s923retdec_H

#include "w2c2_base.h"

typedef struct s923retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s923retdecInstance;

void f0(s923retdecInstance*);

void f1(s923retdecInstance*);

U32 f2(s923retdecInstance*);

void f3(s923retdecInstance*,U32);

U32 f4(s923retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s923retdecInstance*,U32,U32,U32,U32,U32);

void f6(s923retdecInstance*,U32);

void f7(s923retdecInstance*,U32,U32,U32);

void f8(s923retdecInstance*,U32,U32,U32);

void s923retdec____wasm_call_ctors(s923retdecInstance*i);

void s923retdec____wasm_apply_data_relocs(s923retdecInstance*i);

U32 s923retdec_func_1(s923retdecInstance*i);

void s923retdec_call_cb(s923retdecInstance*i,U32 l0);

void s923retdecInstantiate(s923retdecInstance* instance, void* resolve(const char* module, const char* name));

void s923retdecFreeInstance(s923retdecInstance* instance);

#endif /* s923retdec_H */

