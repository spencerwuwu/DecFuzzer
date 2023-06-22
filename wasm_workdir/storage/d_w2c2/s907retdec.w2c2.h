#ifndef s907retdec_H
#define s907retdec_H

#include "w2c2_base.h"

typedef struct s907retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s907retdecInstance;

void f0(s907retdecInstance*);

void f1(s907retdecInstance*);

U32 f2(s907retdecInstance*);

void f3(s907retdecInstance*,U32);

U32 f4(s907retdecInstance*,U32,U32,U32,U32,U32);

void f5(s907retdecInstance*,U32,U32,U32,U32,U32);

void f6(s907retdecInstance*,U32);

void f7(s907retdecInstance*,U32,U32,U32);

void f8(s907retdecInstance*,U32,U32,U32);

void s907retdec____wasm_call_ctors(s907retdecInstance*i);

void s907retdec____wasm_apply_data_relocs(s907retdecInstance*i);

U32 s907retdec_func_1(s907retdecInstance*i);

void s907retdec_call_cb(s907retdecInstance*i,U32 l0);

void s907retdecInstantiate(s907retdecInstance* instance, void* resolve(const char* module, const char* name));

void s907retdecFreeInstance(s907retdecInstance* instance);

#endif /* s907retdec_H */

