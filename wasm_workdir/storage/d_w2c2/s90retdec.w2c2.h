#ifndef s90retdec_H
#define s90retdec_H

#include "w2c2_base.h"

typedef struct s90retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s90retdecInstance;

void f0(s90retdecInstance*);

void f1(s90retdecInstance*);

U32 f2(s90retdecInstance*);

void f3(s90retdecInstance*,U32);

U32 f4(s90retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s90retdecInstance*,U32,U32,U32,U32,U32);

void f6(s90retdecInstance*,U32);

void f7(s90retdecInstance*,U32,U32,U32);

void f8(s90retdecInstance*,U32,U32,U32);

void s90retdec____wasm_call_ctors(s90retdecInstance*i);

void s90retdec____wasm_apply_data_relocs(s90retdecInstance*i);

U32 s90retdec_func_1(s90retdecInstance*i);

void s90retdec_call_cb(s90retdecInstance*i,U32 l0);

void s90retdecInstantiate(s90retdecInstance* instance, void* resolve(const char* module, const char* name));

void s90retdecFreeInstance(s90retdecInstance* instance);

#endif /* s90retdec_H */

