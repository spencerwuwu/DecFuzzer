#ifndef s120retdec_H
#define s120retdec_H

#include "w2c2_base.h"

typedef struct s120retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s120retdecInstance;

void f0(s120retdecInstance*);

void f1(s120retdecInstance*);

U32 f2(s120retdecInstance*);

void f3(s120retdecInstance*,U32);

U32 f4(s120retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s120retdecInstance*,U32,U32,U32,U32,U32);

void f6(s120retdecInstance*,U32);

void f7(s120retdecInstance*,U32,U32,U32);

void f8(s120retdecInstance*,U32,U32,U32);

void s120retdec____wasm_call_ctors(s120retdecInstance*i);

void s120retdec____wasm_apply_data_relocs(s120retdecInstance*i);

U32 s120retdec_func_1(s120retdecInstance*i);

void s120retdec_call_cb(s120retdecInstance*i,U32 l0);

void s120retdecInstantiate(s120retdecInstance* instance, void* resolve(const char* module, const char* name));

void s120retdecFreeInstance(s120retdecInstance* instance);

#endif /* s120retdec_H */

