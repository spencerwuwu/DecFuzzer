#ifndef s827retdec_H
#define s827retdec_H

#include "w2c2_base.h"

typedef struct s827retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s827retdecInstance;

void f0(s827retdecInstance*);

void f1(s827retdecInstance*);

U32 f2(s827retdecInstance*);

void f3(s827retdecInstance*,U32);

U32 f4(s827retdecInstance*,U32,U32,U32,U32);

void f5(s827retdecInstance*,U32,U32,U32,U32,U32);

void f6(s827retdecInstance*,U32);

void f7(s827retdecInstance*,U32,U32,U32);

void f8(s827retdecInstance*,U32,U32,U32);

void s827retdec____wasm_call_ctors(s827retdecInstance*i);

void s827retdec____wasm_apply_data_relocs(s827retdecInstance*i);

U32 s827retdec_func_1(s827retdecInstance*i);

void s827retdec_call_cb(s827retdecInstance*i,U32 l0);

void s827retdecInstantiate(s827retdecInstance* instance, void* resolve(const char* module, const char* name));

void s827retdecFreeInstance(s827retdecInstance* instance);

#endif /* s827retdec_H */

