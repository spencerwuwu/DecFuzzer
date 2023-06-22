#ifndef s446retdec_H
#define s446retdec_H

#include "w2c2_base.h"

typedef struct s446retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s446retdecInstance;

void f0(s446retdecInstance*);

void f1(s446retdecInstance*);

U32 f2(s446retdecInstance*);

void f3(s446retdecInstance*,U32);

U32 f4(s446retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s446retdecInstance*,U32,U32,U32,U32,U32);

void f6(s446retdecInstance*,U32);

void f7(s446retdecInstance*,U32,U32,U32);

void f8(s446retdecInstance*,U32,U32,U32);

void s446retdec____wasm_call_ctors(s446retdecInstance*i);

void s446retdec____wasm_apply_data_relocs(s446retdecInstance*i);

U32 s446retdec_func_1(s446retdecInstance*i);

void s446retdec_call_cb(s446retdecInstance*i,U32 l0);

void s446retdecInstantiate(s446retdecInstance* instance, void* resolve(const char* module, const char* name));

void s446retdecFreeInstance(s446retdecInstance* instance);

#endif /* s446retdec_H */

