#ifndef s110retdec_H
#define s110retdec_H

#include "w2c2_base.h"

typedef struct s110retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s110retdecInstance;

void f0(s110retdecInstance*);

void f1(s110retdecInstance*);

U32 f2(s110retdecInstance*);

void f3(s110retdecInstance*,U32);

U32 f4(s110retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s110retdecInstance*,U32,U32,U32,U32,U32);

void f6(s110retdecInstance*,U32);

void f7(s110retdecInstance*,U32,U32,U32);

void f8(s110retdecInstance*,U32,U32,U32);

void s110retdec____wasm_call_ctors(s110retdecInstance*i);

void s110retdec____wasm_apply_data_relocs(s110retdecInstance*i);

U32 s110retdec_func_1(s110retdecInstance*i);

void s110retdec_call_cb(s110retdecInstance*i,U32 l0);

void s110retdecInstantiate(s110retdecInstance* instance, void* resolve(const char* module, const char* name));

void s110retdecFreeInstance(s110retdecInstance* instance);

#endif /* s110retdec_H */

