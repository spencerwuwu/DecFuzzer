#ifndef s496retdec_H
#define s496retdec_H

#include "w2c2_base.h"

typedef struct s496retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s496retdecInstance;

void f0(s496retdecInstance*);

void f1(s496retdecInstance*);

U32 f2(s496retdecInstance*);

void f3(s496retdecInstance*,U32);

U32 f4(s496retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s496retdecInstance*,U32,U32,U32,U32,U32);

void f6(s496retdecInstance*,U32);

void f7(s496retdecInstance*,U32,U32,U32);

void f8(s496retdecInstance*,U32,U32,U32);

void s496retdec____wasm_call_ctors(s496retdecInstance*i);

void s496retdec____wasm_apply_data_relocs(s496retdecInstance*i);

U32 s496retdec_func_1(s496retdecInstance*i);

void s496retdec_call_cb(s496retdecInstance*i,U32 l0);

void s496retdecInstantiate(s496retdecInstance* instance, void* resolve(const char* module, const char* name));

void s496retdecFreeInstance(s496retdecInstance* instance);

#endif /* s496retdec_H */

