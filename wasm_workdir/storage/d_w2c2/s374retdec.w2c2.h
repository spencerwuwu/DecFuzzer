#ifndef s374retdec_H
#define s374retdec_H

#include "w2c2_base.h"

typedef struct s374retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s374retdecInstance;

void f0(s374retdecInstance*);

void f1(s374retdecInstance*);

U32 f2(s374retdecInstance*);

void f3(s374retdecInstance*,U32);

U32 f4(s374retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s374retdecInstance*,U32,U32,U32,U32,U32);

void f6(s374retdecInstance*,U32);

void f7(s374retdecInstance*,U32,U32,U32);

void f8(s374retdecInstance*,U32,U32,U32);

void s374retdec____wasm_call_ctors(s374retdecInstance*i);

void s374retdec____wasm_apply_data_relocs(s374retdecInstance*i);

U32 s374retdec_func_1(s374retdecInstance*i);

void s374retdec_call_cb(s374retdecInstance*i,U32 l0);

void s374retdecInstantiate(s374retdecInstance* instance, void* resolve(const char* module, const char* name));

void s374retdecFreeInstance(s374retdecInstance* instance);

#endif /* s374retdec_H */

