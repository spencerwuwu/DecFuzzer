#ifndef s681retdec_H
#define s681retdec_H

#include "w2c2_base.h"

typedef struct s681retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s681retdecInstance;

void f0(s681retdecInstance*);

void f1(s681retdecInstance*);

U32 f2(s681retdecInstance*);

void f3(s681retdecInstance*,U32);

U32 f4(s681retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s681retdecInstance*,U32,U32,U32,U32,U32);

void f6(s681retdecInstance*,U32);

void f7(s681retdecInstance*,U32,U32,U32);

void f8(s681retdecInstance*,U32,U32,U32);

void s681retdec____wasm_call_ctors(s681retdecInstance*i);

void s681retdec____wasm_apply_data_relocs(s681retdecInstance*i);

U32 s681retdec_func_1(s681retdecInstance*i);

void s681retdec_call_cb(s681retdecInstance*i,U32 l0);

void s681retdecInstantiate(s681retdecInstance* instance, void* resolve(const char* module, const char* name));

void s681retdecFreeInstance(s681retdecInstance* instance);

#endif /* s681retdec_H */

