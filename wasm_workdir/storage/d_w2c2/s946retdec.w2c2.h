#ifndef s946retdec_H
#define s946retdec_H

#include "w2c2_base.h"

typedef struct s946retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s946retdecInstance;

void f0(s946retdecInstance*);

void f1(s946retdecInstance*);

U32 f2(s946retdecInstance*);

void f3(s946retdecInstance*,U32);

U32 f4(s946retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s946retdecInstance*,U32,U32,U32,U32,U32);

void f6(s946retdecInstance*,U32);

void f7(s946retdecInstance*,U32,U32,U32);

void f8(s946retdecInstance*,U32,U32,U32);

void s946retdec____wasm_call_ctors(s946retdecInstance*i);

void s946retdec____wasm_apply_data_relocs(s946retdecInstance*i);

U32 s946retdec_func_1(s946retdecInstance*i);

void s946retdec_call_cb(s946retdecInstance*i,U32 l0);

void s946retdecInstantiate(s946retdecInstance* instance, void* resolve(const char* module, const char* name));

void s946retdecFreeInstance(s946retdecInstance* instance);

#endif /* s946retdec_H */

