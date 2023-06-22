#ifndef s550retdec_H
#define s550retdec_H

#include "w2c2_base.h"

typedef struct s550retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s550retdecInstance;

void f0(s550retdecInstance*);

void f1(s550retdecInstance*);

U32 f2(s550retdecInstance*);

void f3(s550retdecInstance*,U32);

U32 f4(s550retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s550retdecInstance*,U32,U32,U32,U32,U32);

void f6(s550retdecInstance*,U32);

void f7(s550retdecInstance*,U32,U32,U32);

void f8(s550retdecInstance*,U32,U32,U32);

void s550retdec____wasm_call_ctors(s550retdecInstance*i);

void s550retdec____wasm_apply_data_relocs(s550retdecInstance*i);

U32 s550retdec_func_1(s550retdecInstance*i);

void s550retdec_call_cb(s550retdecInstance*i,U32 l0);

void s550retdecInstantiate(s550retdecInstance* instance, void* resolve(const char* module, const char* name));

void s550retdecFreeInstance(s550retdecInstance* instance);

#endif /* s550retdec_H */

