#ifndef s243retdec_H
#define s243retdec_H

#include "w2c2_base.h"

typedef struct s243retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s243retdecInstance;

void f0(s243retdecInstance*);

void f1(s243retdecInstance*);

U32 f2(s243retdecInstance*);

void f3(s243retdecInstance*,U32);

U32 f4(s243retdecInstance*,U32,U32,U32);

void f5(s243retdecInstance*,U32,U32,U32,U32,U32);

void f6(s243retdecInstance*,U32);

void f7(s243retdecInstance*,U32,U32,U32);

void f8(s243retdecInstance*,U32,U32,U32);

void s243retdec____wasm_call_ctors(s243retdecInstance*i);

void s243retdec____wasm_apply_data_relocs(s243retdecInstance*i);

U32 s243retdec_func_1(s243retdecInstance*i);

void s243retdec_call_cb(s243retdecInstance*i,U32 l0);

void s243retdecInstantiate(s243retdecInstance* instance, void* resolve(const char* module, const char* name));

void s243retdecFreeInstance(s243retdecInstance* instance);

#endif /* s243retdec_H */

