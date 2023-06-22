#ifndef s651retdec_H
#define s651retdec_H

#include "w2c2_base.h"

typedef struct s651retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s651retdecInstance;

void f0(s651retdecInstance*);

void f1(s651retdecInstance*);

U32 f2(s651retdecInstance*);

void f3(s651retdecInstance*,U32);

U32 f4(s651retdecInstance*,U32,U32,U32);

void f5(s651retdecInstance*,U32,U32,U32,U32,U32);

void f6(s651retdecInstance*,U32);

void f7(s651retdecInstance*,U32,U32,U32);

void f8(s651retdecInstance*,U32,U32,U32);

void s651retdec____wasm_call_ctors(s651retdecInstance*i);

void s651retdec____wasm_apply_data_relocs(s651retdecInstance*i);

U32 s651retdec_func_1(s651retdecInstance*i);

void s651retdec_call_cb(s651retdecInstance*i,U32 l0);

void s651retdecInstantiate(s651retdecInstance* instance, void* resolve(const char* module, const char* name));

void s651retdecFreeInstance(s651retdecInstance* instance);

#endif /* s651retdec_H */

