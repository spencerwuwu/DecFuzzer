#ifndef s426retdec_H
#define s426retdec_H

#include "w2c2_base.h"

typedef struct s426retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s426retdecInstance;

void f0(s426retdecInstance*);

void f1(s426retdecInstance*);

U32 f2(s426retdecInstance*);

void f3(s426retdecInstance*,U32);

U32 f4(s426retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s426retdecInstance*,U32,U32,U32,U32,U32);

void f6(s426retdecInstance*,U32);

void f7(s426retdecInstance*,U32,U32,U32);

void f8(s426retdecInstance*,U32,U32,U32);

void s426retdec____wasm_call_ctors(s426retdecInstance*i);

void s426retdec____wasm_apply_data_relocs(s426retdecInstance*i);

U32 s426retdec_func_1(s426retdecInstance*i);

void s426retdec_call_cb(s426retdecInstance*i,U32 l0);

void s426retdecInstantiate(s426retdecInstance* instance, void* resolve(const char* module, const char* name));

void s426retdecFreeInstance(s426retdecInstance* instance);

#endif /* s426retdec_H */

