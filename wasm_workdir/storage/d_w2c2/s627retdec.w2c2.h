#ifndef s627retdec_H
#define s627retdec_H

#include "w2c2_base.h"

typedef struct s627retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s627retdecInstance;

void f0(s627retdecInstance*);

void f1(s627retdecInstance*);

U32 f2(s627retdecInstance*);

void f3(s627retdecInstance*,U32);

U32 f4(s627retdecInstance*,U32,U32,U32,U32);

void f5(s627retdecInstance*,U32,U32,U32,U32,U32);

void f6(s627retdecInstance*,U32);

void f7(s627retdecInstance*,U32,U32,U32);

void f8(s627retdecInstance*,U32,U32,U32);

void s627retdec____wasm_call_ctors(s627retdecInstance*i);

void s627retdec____wasm_apply_data_relocs(s627retdecInstance*i);

U32 s627retdec_func_1(s627retdecInstance*i);

void s627retdec_call_cb(s627retdecInstance*i,U32 l0);

void s627retdecInstantiate(s627retdecInstance* instance, void* resolve(const char* module, const char* name));

void s627retdecFreeInstance(s627retdecInstance* instance);

#endif /* s627retdec_H */

