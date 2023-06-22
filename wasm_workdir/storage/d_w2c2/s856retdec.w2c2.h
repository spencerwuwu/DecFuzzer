#ifndef s856retdec_H
#define s856retdec_H

#include "w2c2_base.h"

typedef struct s856retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s856retdecInstance;

void f0(s856retdecInstance*);

void f1(s856retdecInstance*);

U32 f2(s856retdecInstance*);

void f3(s856retdecInstance*,U32);

U32 f4(s856retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s856retdecInstance*,U32,U32,U32,U32,U32);

void f6(s856retdecInstance*,U32);

void f7(s856retdecInstance*,U32,U32,U32);

void f8(s856retdecInstance*,U32,U32,U32);

void s856retdec____wasm_call_ctors(s856retdecInstance*i);

void s856retdec____wasm_apply_data_relocs(s856retdecInstance*i);

U32 s856retdec_func_1(s856retdecInstance*i);

void s856retdec_call_cb(s856retdecInstance*i,U32 l0);

void s856retdecInstantiate(s856retdecInstance* instance, void* resolve(const char* module, const char* name));

void s856retdecFreeInstance(s856retdecInstance* instance);

#endif /* s856retdec_H */

