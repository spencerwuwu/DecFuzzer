#ifndef s527retdec_H
#define s527retdec_H

#include "w2c2_base.h"

typedef struct s527retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s527retdecInstance;

void f0(s527retdecInstance*);

void f1(s527retdecInstance*);

U32 f2(s527retdecInstance*);

void f3(s527retdecInstance*,U32);

U32 f4(s527retdecInstance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s527retdecInstance*,U32,U32,U32,U32,U32);

void f6(s527retdecInstance*,U32);

void f7(s527retdecInstance*,U32,U32,U32);

void f8(s527retdecInstance*,U32,U32,U32);

void s527retdec____wasm_call_ctors(s527retdecInstance*i);

void s527retdec____wasm_apply_data_relocs(s527retdecInstance*i);

U32 s527retdec_func_1(s527retdecInstance*i);

void s527retdec_call_cb(s527retdecInstance*i,U32 l0);

void s527retdecInstantiate(s527retdecInstance* instance, void* resolve(const char* module, const char* name));

void s527retdecFreeInstance(s527retdecInstance* instance);

#endif /* s527retdec_H */

