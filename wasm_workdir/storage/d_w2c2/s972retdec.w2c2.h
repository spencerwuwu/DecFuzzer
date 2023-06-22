#ifndef s972retdec_H
#define s972retdec_H

#include "w2c2_base.h"

typedef struct s972retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s972retdecInstance;

void f0(s972retdecInstance*);

void f1(s972retdecInstance*);

U32 f2(s972retdecInstance*);

void f3(s972retdecInstance*,U32);

U32 f4(s972retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s972retdecInstance*,U32,U32,U32,U32,U32);

void f6(s972retdecInstance*,U32);

void f7(s972retdecInstance*,U32,U32,U32);

void f8(s972retdecInstance*,U32,U32,U32);

void s972retdec____wasm_call_ctors(s972retdecInstance*i);

void s972retdec____wasm_apply_data_relocs(s972retdecInstance*i);

U32 s972retdec_func_1(s972retdecInstance*i);

void s972retdec_call_cb(s972retdecInstance*i,U32 l0);

void s972retdecInstantiate(s972retdecInstance* instance, void* resolve(const char* module, const char* name));

void s972retdecFreeInstance(s972retdecInstance* instance);

#endif /* s972retdec_H */

