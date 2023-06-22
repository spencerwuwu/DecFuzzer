#ifndef s621retdec_H
#define s621retdec_H

#include "w2c2_base.h"

typedef struct s621retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s621retdecInstance;

void f0(s621retdecInstance*);

void f1(s621retdecInstance*);

U32 f2(s621retdecInstance*);

void f3(s621retdecInstance*,U32);

U32 f4(s621retdecInstance*,U32,U32,U32);

void f5(s621retdecInstance*,U32,U32,U32,U32,U32);

void f6(s621retdecInstance*,U32);

void f7(s621retdecInstance*,U32,U32,U32);

void f8(s621retdecInstance*,U32,U32,U32);

void s621retdec____wasm_call_ctors(s621retdecInstance*i);

void s621retdec____wasm_apply_data_relocs(s621retdecInstance*i);

U32 s621retdec_func_1(s621retdecInstance*i);

void s621retdec_call_cb(s621retdecInstance*i,U32 l0);

void s621retdecInstantiate(s621retdecInstance* instance, void* resolve(const char* module, const char* name));

void s621retdecFreeInstance(s621retdecInstance* instance);

#endif /* s621retdec_H */

