#ifndef s903retdec_H
#define s903retdec_H

#include "w2c2_base.h"

typedef struct s903retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s903retdecInstance;

void f0(s903retdecInstance*);

void f1(s903retdecInstance*);

U32 f2(s903retdecInstance*);

void f3(s903retdecInstance*,U32);

U32 f4(s903retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s903retdecInstance*,U32,U32,U32,U32,U32);

void f6(s903retdecInstance*,U32);

void f7(s903retdecInstance*,U32,U32,U32);

void f8(s903retdecInstance*,U32,U32,U32);

void s903retdec____wasm_call_ctors(s903retdecInstance*i);

void s903retdec____wasm_apply_data_relocs(s903retdecInstance*i);

U32 s903retdec_func_1(s903retdecInstance*i);

void s903retdec_call_cb(s903retdecInstance*i,U32 l0);

void s903retdecInstantiate(s903retdecInstance* instance, void* resolve(const char* module, const char* name));

void s903retdecFreeInstance(s903retdecInstance* instance);

#endif /* s903retdec_H */

