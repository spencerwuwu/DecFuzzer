#ifndef s2retdec_H
#define s2retdec_H

#include "w2c2_base.h"

typedef struct s2retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s2retdecInstance;

void f0(s2retdecInstance*);

void f1(s2retdecInstance*);

U32 f2(s2retdecInstance*);

void f3(s2retdecInstance*,U32);

U32 f4(s2retdecInstance*,U32,U32,U32);

void f5(s2retdecInstance*,U32,U32,U32,U32,U32);

void f6(s2retdecInstance*,U32);

void f7(s2retdecInstance*,U32,U32,U32);

void f8(s2retdecInstance*,U32,U32,U32);

void s2retdec____wasm_call_ctors(s2retdecInstance*i);

void s2retdec____wasm_apply_data_relocs(s2retdecInstance*i);

U32 s2retdec_func_1(s2retdecInstance*i);

void s2retdec_call_cb(s2retdecInstance*i,U32 l0);

void s2retdecInstantiate(s2retdecInstance* instance, void* resolve(const char* module, const char* name));

void s2retdecFreeInstance(s2retdecInstance* instance);

#endif /* s2retdec_H */

