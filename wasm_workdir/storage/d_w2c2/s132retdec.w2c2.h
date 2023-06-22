#ifndef s132retdec_H
#define s132retdec_H

#include "w2c2_base.h"

typedef struct s132retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s132retdecInstance;

void f0(s132retdecInstance*);

void f1(s132retdecInstance*);

U32 f2(s132retdecInstance*);

void f3(s132retdecInstance*,U32);

U32 f4(s132retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s132retdecInstance*,U32,U32,U32,U32,U32);

void f6(s132retdecInstance*,U32);

void f7(s132retdecInstance*,U32,U32,U32);

void f8(s132retdecInstance*,U32,U32,U32);

void s132retdec____wasm_call_ctors(s132retdecInstance*i);

void s132retdec____wasm_apply_data_relocs(s132retdecInstance*i);

U32 s132retdec_func_1(s132retdecInstance*i);

void s132retdec_call_cb(s132retdecInstance*i,U32 l0);

void s132retdecInstantiate(s132retdecInstance* instance, void* resolve(const char* module, const char* name));

void s132retdecFreeInstance(s132retdecInstance* instance);

#endif /* s132retdec_H */

