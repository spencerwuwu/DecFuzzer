#ifndef s507retdec_H
#define s507retdec_H

#include "w2c2_base.h"

typedef struct s507retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s507retdecInstance;

void f0(s507retdecInstance*);

void f1(s507retdecInstance*);

U32 f2(s507retdecInstance*);

void f3(s507retdecInstance*,U32);

U32 f4(s507retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s507retdecInstance*,U32,U32,U32,U32,U32);

void f6(s507retdecInstance*,U32);

void f7(s507retdecInstance*,U32,U32,U32);

void f8(s507retdecInstance*,U32,U32,U32);

void s507retdec____wasm_call_ctors(s507retdecInstance*i);

void s507retdec____wasm_apply_data_relocs(s507retdecInstance*i);

U32 s507retdec_func_1(s507retdecInstance*i);

void s507retdec_call_cb(s507retdecInstance*i,U32 l0);

void s507retdecInstantiate(s507retdecInstance* instance, void* resolve(const char* module, const char* name));

void s507retdecFreeInstance(s507retdecInstance* instance);

#endif /* s507retdec_H */

