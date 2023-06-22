#ifndef s255retdec_H
#define s255retdec_H

#include "w2c2_base.h"

typedef struct s255retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s255retdecInstance;

void f0(s255retdecInstance*);

void f1(s255retdecInstance*);

U32 f2(s255retdecInstance*);

void f3(s255retdecInstance*,U32);

U32 f4(s255retdecInstance*,U32,U32,U32);

void f5(s255retdecInstance*,U32,U32,U32,U32,U32);

void f6(s255retdecInstance*,U32);

void f7(s255retdecInstance*,U32,U32,U32);

void f8(s255retdecInstance*,U32,U32,U32);

void s255retdec____wasm_call_ctors(s255retdecInstance*i);

void s255retdec____wasm_apply_data_relocs(s255retdecInstance*i);

U32 s255retdec_func_1(s255retdecInstance*i);

void s255retdec_call_cb(s255retdecInstance*i,U32 l0);

void s255retdecInstantiate(s255retdecInstance* instance, void* resolve(const char* module, const char* name));

void s255retdecFreeInstance(s255retdecInstance* instance);

#endif /* s255retdec_H */

