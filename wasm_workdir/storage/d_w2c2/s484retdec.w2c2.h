#ifndef s484retdec_H
#define s484retdec_H

#include "w2c2_base.h"

typedef struct s484retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s484retdecInstance;

void f0(s484retdecInstance*);

void f1(s484retdecInstance*);

U32 f2(s484retdecInstance*);

void f3(s484retdecInstance*,U32);

U32 f4(s484retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s484retdecInstance*,U32,U32,U32,U32,U32);

void f6(s484retdecInstance*,U32);

void f7(s484retdecInstance*,U32,U32,U32);

void f8(s484retdecInstance*,U32,U32,U32);

void s484retdec____wasm_call_ctors(s484retdecInstance*i);

void s484retdec____wasm_apply_data_relocs(s484retdecInstance*i);

U32 s484retdec_func_1(s484retdecInstance*i);

void s484retdec_call_cb(s484retdecInstance*i,U32 l0);

void s484retdecInstantiate(s484retdecInstance* instance, void* resolve(const char* module, const char* name));

void s484retdecFreeInstance(s484retdecInstance* instance);

#endif /* s484retdec_H */

