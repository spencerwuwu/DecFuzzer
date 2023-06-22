#ifndef s966retdec_H
#define s966retdec_H

#include "w2c2_base.h"

typedef struct s966retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s966retdecInstance;

void f0(s966retdecInstance*);

void f1(s966retdecInstance*);

U32 f2(s966retdecInstance*);

void f3(s966retdecInstance*,U32);

U32 f4(s966retdecInstance*,U32,U32,U32,U32);

void f5(s966retdecInstance*,U32,U32,U32,U32,U32);

void f6(s966retdecInstance*,U32);

void f7(s966retdecInstance*,U32,U32,U32);

void f8(s966retdecInstance*,U32,U32,U32);

void s966retdec____wasm_call_ctors(s966retdecInstance*i);

void s966retdec____wasm_apply_data_relocs(s966retdecInstance*i);

U32 s966retdec_func_1(s966retdecInstance*i);

void s966retdec_call_cb(s966retdecInstance*i,U32 l0);

void s966retdecInstantiate(s966retdecInstance* instance, void* resolve(const char* module, const char* name));

void s966retdecFreeInstance(s966retdecInstance* instance);

#endif /* s966retdec_H */

