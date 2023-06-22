#ifndef s413retdec_H
#define s413retdec_H

#include "w2c2_base.h"

typedef struct s413retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s413retdecInstance;

void f0(s413retdecInstance*);

void f1(s413retdecInstance*);

U32 f2(s413retdecInstance*);

void f3(s413retdecInstance*,U32);

U32 f4(s413retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s413retdecInstance*,U32,U32,U32,U32,U32);

void f6(s413retdecInstance*,U32);

void f7(s413retdecInstance*,U32,U32,U32);

void f8(s413retdecInstance*,U32,U32,U32);

void s413retdec____wasm_call_ctors(s413retdecInstance*i);

void s413retdec____wasm_apply_data_relocs(s413retdecInstance*i);

U32 s413retdec_func_1(s413retdecInstance*i);

void s413retdec_call_cb(s413retdecInstance*i,U32 l0);

void s413retdecInstantiate(s413retdecInstance* instance, void* resolve(const char* module, const char* name));

void s413retdecFreeInstance(s413retdecInstance* instance);

#endif /* s413retdec_H */

