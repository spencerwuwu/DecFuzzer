#ifndef s398retdec_H
#define s398retdec_H

#include "w2c2_base.h"

typedef struct s398retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s398retdecInstance;

void f0(s398retdecInstance*);

void f1(s398retdecInstance*);

U32 f2(s398retdecInstance*);

void f3(s398retdecInstance*,U32);

U32 f4(s398retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s398retdecInstance*,U32,U32,U32,U32,U32);

void f6(s398retdecInstance*,U32);

void f7(s398retdecInstance*,U32,U32,U32);

void f8(s398retdecInstance*,U32,U32,U32);

void s398retdec____wasm_call_ctors(s398retdecInstance*i);

void s398retdec____wasm_apply_data_relocs(s398retdecInstance*i);

U32 s398retdec_func_1(s398retdecInstance*i);

void s398retdec_call_cb(s398retdecInstance*i,U32 l0);

void s398retdecInstantiate(s398retdecInstance* instance, void* resolve(const char* module, const char* name));

void s398retdecFreeInstance(s398retdecInstance* instance);

#endif /* s398retdec_H */

