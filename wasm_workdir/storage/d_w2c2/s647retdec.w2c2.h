#ifndef s647retdec_H
#define s647retdec_H

#include "w2c2_base.h"

typedef struct s647retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s647retdecInstance;

void f0(s647retdecInstance*);

void f1(s647retdecInstance*);

U32 f2(s647retdecInstance*);

void f3(s647retdecInstance*,U32);

U32 f4(s647retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s647retdecInstance*,U32,U32,U32,U32,U32);

void f6(s647retdecInstance*,U32);

void f7(s647retdecInstance*,U32,U32,U32);

void f8(s647retdecInstance*,U32,U32,U32);

void s647retdec____wasm_call_ctors(s647retdecInstance*i);

void s647retdec____wasm_apply_data_relocs(s647retdecInstance*i);

U32 s647retdec_func_1(s647retdecInstance*i);

void s647retdec_call_cb(s647retdecInstance*i,U32 l0);

void s647retdecInstantiate(s647retdecInstance* instance, void* resolve(const char* module, const char* name));

void s647retdecFreeInstance(s647retdecInstance* instance);

#endif /* s647retdec_H */

