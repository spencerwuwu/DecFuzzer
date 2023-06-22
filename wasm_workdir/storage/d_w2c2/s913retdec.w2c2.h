#ifndef s913retdec_H
#define s913retdec_H

#include "w2c2_base.h"

typedef struct s913retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s913retdecInstance;

void f0(s913retdecInstance*);

void f1(s913retdecInstance*);

U32 f2(s913retdecInstance*);

void f3(s913retdecInstance*,U32);

U32 f4(s913retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s913retdecInstance*,U32,U32,U32,U32,U32);

void f6(s913retdecInstance*,U32);

void f7(s913retdecInstance*,U32,U32,U32);

void f8(s913retdecInstance*,U32,U32,U32);

void s913retdec____wasm_call_ctors(s913retdecInstance*i);

void s913retdec____wasm_apply_data_relocs(s913retdecInstance*i);

U32 s913retdec_func_1(s913retdecInstance*i);

void s913retdec_call_cb(s913retdecInstance*i,U32 l0);

void s913retdecInstantiate(s913retdecInstance* instance, void* resolve(const char* module, const char* name));

void s913retdecFreeInstance(s913retdecInstance* instance);

#endif /* s913retdec_H */

