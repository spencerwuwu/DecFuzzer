#ifndef s251retdec_H
#define s251retdec_H

#include "w2c2_base.h"

typedef struct s251retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s251retdecInstance;

void f0(s251retdecInstance*);

void f1(s251retdecInstance*);

U32 f2(s251retdecInstance*);

void f3(s251retdecInstance*,U32);

U32 f4(s251retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s251retdecInstance*,U32,U32,U32,U32,U32);

void f6(s251retdecInstance*,U32);

void f7(s251retdecInstance*,U32,U32,U32);

void f8(s251retdecInstance*,U32,U32,U32);

void s251retdec____wasm_call_ctors(s251retdecInstance*i);

void s251retdec____wasm_apply_data_relocs(s251retdecInstance*i);

U32 s251retdec_func_1(s251retdecInstance*i);

void s251retdec_call_cb(s251retdecInstance*i,U32 l0);

void s251retdecInstantiate(s251retdecInstance* instance, void* resolve(const char* module, const char* name));

void s251retdecFreeInstance(s251retdecInstance* instance);

#endif /* s251retdec_H */

