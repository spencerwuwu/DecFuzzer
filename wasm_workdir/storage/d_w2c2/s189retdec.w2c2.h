#ifndef s189retdec_H
#define s189retdec_H

#include "w2c2_base.h"

typedef struct s189retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s189retdecInstance;

void f0(s189retdecInstance*);

void f1(s189retdecInstance*);

U32 f2(s189retdecInstance*);

void f3(s189retdecInstance*,U32);

U32 f4(s189retdecInstance*,U32,U32,U32);

void f5(s189retdecInstance*,U32,U32,U32,U32,U32);

void f6(s189retdecInstance*,U32);

void f7(s189retdecInstance*,U32,U32,U32);

void f8(s189retdecInstance*,U32,U32,U32);

void s189retdec____wasm_call_ctors(s189retdecInstance*i);

void s189retdec____wasm_apply_data_relocs(s189retdecInstance*i);

U32 s189retdec_func_1(s189retdecInstance*i);

void s189retdec_call_cb(s189retdecInstance*i,U32 l0);

void s189retdecInstantiate(s189retdecInstance* instance, void* resolve(const char* module, const char* name));

void s189retdecFreeInstance(s189retdecInstance* instance);

#endif /* s189retdec_H */

