#ifndef s234retdec_H
#define s234retdec_H

#include "w2c2_base.h"

typedef struct s234retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s234retdecInstance;

void f0(s234retdecInstance*);

void f1(s234retdecInstance*);

U32 f2(s234retdecInstance*);

void f3(s234retdecInstance*,U32);

U32 f4(s234retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s234retdecInstance*,U32,U32,U32,U32,U32);

void f6(s234retdecInstance*,U32);

void f7(s234retdecInstance*,U32,U32,U32);

void f8(s234retdecInstance*,U32,U32,U32);

void s234retdec____wasm_call_ctors(s234retdecInstance*i);

void s234retdec____wasm_apply_data_relocs(s234retdecInstance*i);

U32 s234retdec_func_1(s234retdecInstance*i);

void s234retdec_call_cb(s234retdecInstance*i,U32 l0);

void s234retdecInstantiate(s234retdecInstance* instance, void* resolve(const char* module, const char* name));

void s234retdecFreeInstance(s234retdecInstance* instance);

#endif /* s234retdec_H */

