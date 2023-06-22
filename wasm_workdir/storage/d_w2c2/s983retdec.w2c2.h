#ifndef s983retdec_H
#define s983retdec_H

#include "w2c2_base.h"

typedef struct s983retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s983retdecInstance;

void f0(s983retdecInstance*);

void f1(s983retdecInstance*);

U32 f2(s983retdecInstance*);

void f3(s983retdecInstance*,U32);

U32 f4(s983retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s983retdecInstance*,U32,U32,U32,U32,U32);

void f6(s983retdecInstance*,U32);

void f7(s983retdecInstance*,U32,U32,U32);

void f8(s983retdecInstance*,U32,U32,U32);

void s983retdec____wasm_call_ctors(s983retdecInstance*i);

void s983retdec____wasm_apply_data_relocs(s983retdecInstance*i);

U32 s983retdec_func_1(s983retdecInstance*i);

void s983retdec_call_cb(s983retdecInstance*i,U32 l0);

void s983retdecInstantiate(s983retdecInstance* instance, void* resolve(const char* module, const char* name));

void s983retdecFreeInstance(s983retdecInstance* instance);

#endif /* s983retdec_H */

