#ifndef s937retdec_H
#define s937retdec_H

#include "w2c2_base.h"

typedef struct s937retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s937retdecInstance;

void f0(s937retdecInstance*);

void f1(s937retdecInstance*);

U32 f2(s937retdecInstance*);

void f3(s937retdecInstance*,U32);

U32 f4(s937retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s937retdecInstance*,U32,U32,U32,U32,U32);

void f6(s937retdecInstance*,U32);

void f7(s937retdecInstance*,U32,U32,U32);

void f8(s937retdecInstance*,U32,U32,U32);

void s937retdec____wasm_call_ctors(s937retdecInstance*i);

void s937retdec____wasm_apply_data_relocs(s937retdecInstance*i);

U32 s937retdec_func_1(s937retdecInstance*i);

void s937retdec_call_cb(s937retdecInstance*i,U32 l0);

void s937retdecInstantiate(s937retdecInstance* instance, void* resolve(const char* module, const char* name));

void s937retdecFreeInstance(s937retdecInstance* instance);

#endif /* s937retdec_H */

