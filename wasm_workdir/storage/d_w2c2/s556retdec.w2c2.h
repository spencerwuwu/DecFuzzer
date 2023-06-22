#ifndef s556retdec_H
#define s556retdec_H

#include "w2c2_base.h"

typedef struct s556retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s556retdecInstance;

void f0(s556retdecInstance*);

void f1(s556retdecInstance*);

U32 f2(s556retdecInstance*);

void f3(s556retdecInstance*,U32);

U32 f4(s556retdecInstance*,U32,U32,U32,U32,U32);

void f5(s556retdecInstance*,U32,U32,U32,U32,U32);

void f6(s556retdecInstance*,U32);

void f7(s556retdecInstance*,U32,U32,U32);

void f8(s556retdecInstance*,U32,U32,U32);

void s556retdec____wasm_call_ctors(s556retdecInstance*i);

void s556retdec____wasm_apply_data_relocs(s556retdecInstance*i);

U32 s556retdec_func_1(s556retdecInstance*i);

void s556retdec_call_cb(s556retdecInstance*i,U32 l0);

void s556retdecInstantiate(s556retdecInstance* instance, void* resolve(const char* module, const char* name));

void s556retdecFreeInstance(s556retdecInstance* instance);

#endif /* s556retdec_H */

