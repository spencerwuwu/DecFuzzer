#ifndef s528retdec_H
#define s528retdec_H

#include "w2c2_base.h"

typedef struct s528retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s528retdecInstance;

void f0(s528retdecInstance*);

void f1(s528retdecInstance*);

U32 f2(s528retdecInstance*);

void f3(s528retdecInstance*,U32);

U32 f4(s528retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s528retdecInstance*,U32,U32,U32,U32,U32);

void f6(s528retdecInstance*,U32);

void f7(s528retdecInstance*,U32,U32,U32);

void f8(s528retdecInstance*,U32,U32,U32);

void s528retdec____wasm_call_ctors(s528retdecInstance*i);

void s528retdec____wasm_apply_data_relocs(s528retdecInstance*i);

U32 s528retdec_func_1(s528retdecInstance*i);

void s528retdec_call_cb(s528retdecInstance*i,U32 l0);

void s528retdecInstantiate(s528retdecInstance* instance, void* resolve(const char* module, const char* name));

void s528retdecFreeInstance(s528retdecInstance* instance);

#endif /* s528retdec_H */

