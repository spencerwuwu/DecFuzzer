#ifndef s918retdec_H
#define s918retdec_H

#include "w2c2_base.h"

typedef struct s918retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s918retdecInstance;

void f0(s918retdecInstance*);

void f1(s918retdecInstance*);

U32 f2(s918retdecInstance*);

void f3(s918retdecInstance*,U32);

U32 f4(s918retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s918retdecInstance*,U32,U32,U32,U32,U32);

void f6(s918retdecInstance*,U32);

void f7(s918retdecInstance*,U32,U32,U32);

void f8(s918retdecInstance*,U32,U32,U32);

void s918retdec____wasm_call_ctors(s918retdecInstance*i);

void s918retdec____wasm_apply_data_relocs(s918retdecInstance*i);

U32 s918retdec_func_1(s918retdecInstance*i);

void s918retdec_call_cb(s918retdecInstance*i,U32 l0);

void s918retdecInstantiate(s918retdecInstance* instance, void* resolve(const char* module, const char* name));

void s918retdecFreeInstance(s918retdecInstance* instance);

#endif /* s918retdec_H */

