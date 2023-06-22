#ifndef s535retdec_H
#define s535retdec_H

#include "w2c2_base.h"

typedef struct s535retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s535retdecInstance;

void f0(s535retdecInstance*);

void f1(s535retdecInstance*);

U32 f2(s535retdecInstance*);

void f3(s535retdecInstance*,U32);

U32 f4(s535retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s535retdecInstance*,U32,U32,U32,U32,U32);

void f6(s535retdecInstance*,U32);

void f7(s535retdecInstance*,U32,U32,U32);

void f8(s535retdecInstance*,U32,U32,U32);

void s535retdec____wasm_call_ctors(s535retdecInstance*i);

void s535retdec____wasm_apply_data_relocs(s535retdecInstance*i);

U32 s535retdec_func_1(s535retdecInstance*i);

void s535retdec_call_cb(s535retdecInstance*i,U32 l0);

void s535retdecInstantiate(s535retdecInstance* instance, void* resolve(const char* module, const char* name));

void s535retdecFreeInstance(s535retdecInstance* instance);

#endif /* s535retdec_H */

