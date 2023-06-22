#ifndef s230retdec_H
#define s230retdec_H

#include "w2c2_base.h"

typedef struct s230retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s230retdecInstance;

void f0(s230retdecInstance*);

void f1(s230retdecInstance*);

U32 f2(s230retdecInstance*);

void f3(s230retdecInstance*,U32);

U32 f4(s230retdecInstance*,U32,U32,U32,U32,U32);

void f5(s230retdecInstance*,U32,U32,U32,U32,U32);

void f6(s230retdecInstance*,U32);

void f7(s230retdecInstance*,U32,U32,U32);

void f8(s230retdecInstance*,U32,U32,U32);

void s230retdec____wasm_call_ctors(s230retdecInstance*i);

void s230retdec____wasm_apply_data_relocs(s230retdecInstance*i);

U32 s230retdec_func_1(s230retdecInstance*i);

void s230retdec_call_cb(s230retdecInstance*i,U32 l0);

void s230retdecInstantiate(s230retdecInstance* instance, void* resolve(const char* module, const char* name));

void s230retdecFreeInstance(s230retdecInstance* instance);

#endif /* s230retdec_H */

