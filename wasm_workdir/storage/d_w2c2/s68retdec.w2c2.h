#ifndef s68retdec_H
#define s68retdec_H

#include "w2c2_base.h"

typedef struct s68retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s68retdecInstance;

void f0(s68retdecInstance*);

void f1(s68retdecInstance*);

U32 f2(s68retdecInstance*);

void f3(s68retdecInstance*,U32);

U32 f4(s68retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s68retdecInstance*,U32,U32,U32,U32,U32);

void f6(s68retdecInstance*,U32);

void f7(s68retdecInstance*,U32,U32,U32);

void f8(s68retdecInstance*,U32,U32,U32);

void s68retdec____wasm_call_ctors(s68retdecInstance*i);

void s68retdec____wasm_apply_data_relocs(s68retdecInstance*i);

U32 s68retdec_func_1(s68retdecInstance*i);

void s68retdec_call_cb(s68retdecInstance*i,U32 l0);

void s68retdecInstantiate(s68retdecInstance* instance, void* resolve(const char* module, const char* name));

void s68retdecFreeInstance(s68retdecInstance* instance);

#endif /* s68retdec_H */

