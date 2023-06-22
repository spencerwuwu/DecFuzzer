#ifndef s371retdec_H
#define s371retdec_H

#include "w2c2_base.h"

typedef struct s371retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s371retdecInstance;

void f0(s371retdecInstance*);

void f1(s371retdecInstance*);

U32 f2(s371retdecInstance*);

void f3(s371retdecInstance*,U32);

U32 f4(s371retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s371retdecInstance*,U32,U32,U32,U32,U32);

void f6(s371retdecInstance*,U32);

void f7(s371retdecInstance*,U32,U32,U32);

void f8(s371retdecInstance*,U32,U32,U32);

void s371retdec____wasm_call_ctors(s371retdecInstance*i);

void s371retdec____wasm_apply_data_relocs(s371retdecInstance*i);

U32 s371retdec_func_1(s371retdecInstance*i);

void s371retdec_call_cb(s371retdecInstance*i,U32 l0);

void s371retdecInstantiate(s371retdecInstance* instance, void* resolve(const char* module, const char* name));

void s371retdecFreeInstance(s371retdecInstance* instance);

#endif /* s371retdec_H */

