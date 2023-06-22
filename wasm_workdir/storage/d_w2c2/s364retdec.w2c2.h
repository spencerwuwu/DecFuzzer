#ifndef s364retdec_H
#define s364retdec_H

#include "w2c2_base.h"

typedef struct s364retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s364retdecInstance;

void f0(s364retdecInstance*);

void f1(s364retdecInstance*);

U32 f2(s364retdecInstance*);

void f3(s364retdecInstance*,U32);

U32 f4(s364retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s364retdecInstance*,U32,U32,U32,U32,U32);

void f6(s364retdecInstance*,U32);

void f7(s364retdecInstance*,U32,U32,U32);

void f8(s364retdecInstance*,U32,U32,U32);

void s364retdec____wasm_call_ctors(s364retdecInstance*i);

void s364retdec____wasm_apply_data_relocs(s364retdecInstance*i);

U32 s364retdec_func_1(s364retdecInstance*i);

void s364retdec_call_cb(s364retdecInstance*i,U32 l0);

void s364retdecInstantiate(s364retdecInstance* instance, void* resolve(const char* module, const char* name));

void s364retdecFreeInstance(s364retdecInstance* instance);

#endif /* s364retdec_H */

