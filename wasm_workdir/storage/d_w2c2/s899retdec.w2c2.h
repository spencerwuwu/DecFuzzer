#ifndef s899retdec_H
#define s899retdec_H

#include "w2c2_base.h"

typedef struct s899retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s899retdecInstance;

void f0(s899retdecInstance*);

void f1(s899retdecInstance*);

U32 f2(s899retdecInstance*);

void f3(s899retdecInstance*,U32);

U32 f4(s899retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s899retdecInstance*,U32,U32,U32,U32,U32);

void f6(s899retdecInstance*,U32);

void f7(s899retdecInstance*,U32,U32,U32);

void f8(s899retdecInstance*,U32,U32,U32);

void s899retdec____wasm_call_ctors(s899retdecInstance*i);

void s899retdec____wasm_apply_data_relocs(s899retdecInstance*i);

U32 s899retdec_func_1(s899retdecInstance*i);

void s899retdec_call_cb(s899retdecInstance*i,U32 l0);

void s899retdecInstantiate(s899retdecInstance* instance, void* resolve(const char* module, const char* name));

void s899retdecFreeInstance(s899retdecInstance* instance);

#endif /* s899retdec_H */

