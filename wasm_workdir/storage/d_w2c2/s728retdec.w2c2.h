#ifndef s728retdec_H
#define s728retdec_H

#include "w2c2_base.h"

typedef struct s728retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s728retdecInstance;

void f0(s728retdecInstance*);

void f1(s728retdecInstance*);

U32 f2(s728retdecInstance*);

void f3(s728retdecInstance*,U32);

U32 f4(s728retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s728retdecInstance*,U32,U32,U32,U32,U32);

void f6(s728retdecInstance*,U32);

void f7(s728retdecInstance*,U32,U32,U32);

void f8(s728retdecInstance*,U32,U32,U32);

void s728retdec____wasm_call_ctors(s728retdecInstance*i);

void s728retdec____wasm_apply_data_relocs(s728retdecInstance*i);

U32 s728retdec_func_1(s728retdecInstance*i);

void s728retdec_call_cb(s728retdecInstance*i,U32 l0);

void s728retdecInstantiate(s728retdecInstance* instance, void* resolve(const char* module, const char* name));

void s728retdecFreeInstance(s728retdecInstance* instance);

#endif /* s728retdec_H */

