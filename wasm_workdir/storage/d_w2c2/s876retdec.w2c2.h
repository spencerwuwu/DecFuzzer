#ifndef s876retdec_H
#define s876retdec_H

#include "w2c2_base.h"

typedef struct s876retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s876retdecInstance;

void f0(s876retdecInstance*);

void f1(s876retdecInstance*);

U32 f2(s876retdecInstance*);

void f3(s876retdecInstance*,U32);

U32 f4(s876retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s876retdecInstance*,U32,U32,U32,U32,U32);

void f6(s876retdecInstance*,U32);

void f7(s876retdecInstance*,U32,U32,U32);

void f8(s876retdecInstance*,U32,U32,U32);

void s876retdec____wasm_call_ctors(s876retdecInstance*i);

void s876retdec____wasm_apply_data_relocs(s876retdecInstance*i);

U32 s876retdec_func_1(s876retdecInstance*i);

void s876retdec_call_cb(s876retdecInstance*i,U32 l0);

void s876retdecInstantiate(s876retdecInstance* instance, void* resolve(const char* module, const char* name));

void s876retdecFreeInstance(s876retdecInstance* instance);

#endif /* s876retdec_H */

