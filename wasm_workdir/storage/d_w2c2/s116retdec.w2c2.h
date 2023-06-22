#ifndef s116retdec_H
#define s116retdec_H

#include "w2c2_base.h"

typedef struct s116retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s116retdecInstance;

void f0(s116retdecInstance*);

void f1(s116retdecInstance*);

U32 f2(s116retdecInstance*);

void f3(s116retdecInstance*,U32);

U32 f4(s116retdecInstance*,U32,U32,U32,U32,U32);

void f5(s116retdecInstance*,U32,U32,U32,U32,U32);

void f6(s116retdecInstance*,U32);

void f7(s116retdecInstance*,U32,U32,U32);

void f8(s116retdecInstance*,U32,U32,U32);

void s116retdec____wasm_call_ctors(s116retdecInstance*i);

void s116retdec____wasm_apply_data_relocs(s116retdecInstance*i);

U32 s116retdec_func_1(s116retdecInstance*i);

void s116retdec_call_cb(s116retdecInstance*i,U32 l0);

void s116retdecInstantiate(s116retdecInstance* instance, void* resolve(const char* module, const char* name));

void s116retdecFreeInstance(s116retdecInstance* instance);

#endif /* s116retdec_H */

