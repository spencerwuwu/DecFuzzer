#ifndef s135retdec_H
#define s135retdec_H

#include "w2c2_base.h"

typedef struct s135retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s135retdecInstance;

void f0(s135retdecInstance*);

void f1(s135retdecInstance*);

U32 f2(s135retdecInstance*);

void f3(s135retdecInstance*,U32);

U32 f4(s135retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s135retdecInstance*,U32,U32,U32,U32,U32);

void f6(s135retdecInstance*,U32);

void f7(s135retdecInstance*,U32,U32,U32);

void f8(s135retdecInstance*,U32,U32,U32);

void s135retdec____wasm_call_ctors(s135retdecInstance*i);

void s135retdec____wasm_apply_data_relocs(s135retdecInstance*i);

U32 s135retdec_func_1(s135retdecInstance*i);

void s135retdec_call_cb(s135retdecInstance*i,U32 l0);

void s135retdecInstantiate(s135retdecInstance* instance, void* resolve(const char* module, const char* name));

void s135retdecFreeInstance(s135retdecInstance* instance);

#endif /* s135retdec_H */

