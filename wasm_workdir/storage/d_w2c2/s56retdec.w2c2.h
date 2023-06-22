#ifndef s56retdec_H
#define s56retdec_H

#include "w2c2_base.h"

typedef struct s56retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s56retdecInstance;

void f0(s56retdecInstance*);

void f1(s56retdecInstance*);

U32 f2(s56retdecInstance*);

void f3(s56retdecInstance*,U32);

U32 f4(s56retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s56retdecInstance*,U32,U32,U32,U32,U32);

void f6(s56retdecInstance*,U32);

void f7(s56retdecInstance*,U32,U32,U32);

void f8(s56retdecInstance*,U32,U32,U32);

void s56retdec____wasm_call_ctors(s56retdecInstance*i);

void s56retdec____wasm_apply_data_relocs(s56retdecInstance*i);

U32 s56retdec_func_1(s56retdecInstance*i);

void s56retdec_call_cb(s56retdecInstance*i,U32 l0);

void s56retdecInstantiate(s56retdecInstance* instance, void* resolve(const char* module, const char* name));

void s56retdecFreeInstance(s56retdecInstance* instance);

#endif /* s56retdec_H */

