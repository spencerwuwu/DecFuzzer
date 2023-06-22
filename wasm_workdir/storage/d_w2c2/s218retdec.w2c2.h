#ifndef s218retdec_H
#define s218retdec_H

#include "w2c2_base.h"

typedef struct s218retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s218retdecInstance;

void f0(s218retdecInstance*);

void f1(s218retdecInstance*);

U32 f2(s218retdecInstance*);

void f3(s218retdecInstance*,U32);

U32 f4(s218retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s218retdecInstance*,U32,U32,U32,U32,U32);

void f6(s218retdecInstance*,U32);

void f7(s218retdecInstance*,U32,U32,U32);

void f8(s218retdecInstance*,U32,U32,U32);

void s218retdec____wasm_call_ctors(s218retdecInstance*i);

void s218retdec____wasm_apply_data_relocs(s218retdecInstance*i);

U32 s218retdec_func_1(s218retdecInstance*i);

void s218retdec_call_cb(s218retdecInstance*i,U32 l0);

void s218retdecInstantiate(s218retdecInstance* instance, void* resolve(const char* module, const char* name));

void s218retdecFreeInstance(s218retdecInstance* instance);

#endif /* s218retdec_H */

