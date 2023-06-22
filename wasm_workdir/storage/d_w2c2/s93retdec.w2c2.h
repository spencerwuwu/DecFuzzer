#ifndef s93retdec_H
#define s93retdec_H

#include "w2c2_base.h"

typedef struct s93retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s93retdecInstance;

void f0(s93retdecInstance*);

void f1(s93retdecInstance*);

U32 f2(s93retdecInstance*);

void f3(s93retdecInstance*,U32);

U32 f4(s93retdecInstance*,U32,U32,U32,U32);

void f5(s93retdecInstance*,U32,U32,U32,U32,U32);

void f6(s93retdecInstance*,U32);

void f7(s93retdecInstance*,U32,U32,U32);

void f8(s93retdecInstance*,U32,U32,U32);

void s93retdec____wasm_call_ctors(s93retdecInstance*i);

void s93retdec____wasm_apply_data_relocs(s93retdecInstance*i);

U32 s93retdec_func_1(s93retdecInstance*i);

void s93retdec_call_cb(s93retdecInstance*i,U32 l0);

void s93retdecInstantiate(s93retdecInstance* instance, void* resolve(const char* module, const char* name));

void s93retdecFreeInstance(s93retdecInstance* instance);

#endif /* s93retdec_H */

