#ifndef s23retdec_H
#define s23retdec_H

#include "w2c2_base.h"

typedef struct s23retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s23retdecInstance;

void f0(s23retdecInstance*);

void f1(s23retdecInstance*);

U32 f2(s23retdecInstance*);

void f3(s23retdecInstance*,U32);

U32 f4(s23retdecInstance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s23retdecInstance*,U32,U32,U32,U32,U32);

void f6(s23retdecInstance*,U32);

void f7(s23retdecInstance*,U32,U32,U32);

void f8(s23retdecInstance*,U32,U32,U32);

void s23retdec____wasm_call_ctors(s23retdecInstance*i);

void s23retdec____wasm_apply_data_relocs(s23retdecInstance*i);

U32 s23retdec_func_1(s23retdecInstance*i);

void s23retdec_call_cb(s23retdecInstance*i,U32 l0);

void s23retdecInstantiate(s23retdecInstance* instance, void* resolve(const char* module, const char* name));

void s23retdecFreeInstance(s23retdecInstance* instance);

#endif /* s23retdec_H */

