#ifndef s780retdec_H
#define s780retdec_H

#include "w2c2_base.h"

typedef struct s780retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s780retdecInstance;

void f0(s780retdecInstance*);

void f1(s780retdecInstance*);

U32 f2(s780retdecInstance*);

void f3(s780retdecInstance*,U32);

U32 f4(s780retdecInstance*,U32,U32,U32,U32,U32);

void f5(s780retdecInstance*,U32,U32,U32,U32,U32);

void f6(s780retdecInstance*,U32);

void f7(s780retdecInstance*,U32,U32,U32);

void f8(s780retdecInstance*,U32,U32,U32);

void s780retdec____wasm_call_ctors(s780retdecInstance*i);

void s780retdec____wasm_apply_data_relocs(s780retdecInstance*i);

U32 s780retdec_func_1(s780retdecInstance*i);

void s780retdec_call_cb(s780retdecInstance*i,U32 l0);

void s780retdecInstantiate(s780retdecInstance* instance, void* resolve(const char* module, const char* name));

void s780retdecFreeInstance(s780retdecInstance* instance);

#endif /* s780retdec_H */

