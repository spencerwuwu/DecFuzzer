#ifndef s739retdec_H
#define s739retdec_H

#include "w2c2_base.h"

typedef struct s739retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s739retdecInstance;

void f0(s739retdecInstance*);

void f1(s739retdecInstance*);

U32 f2(s739retdecInstance*);

void f3(s739retdecInstance*,U32);

U32 f4(s739retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s739retdecInstance*,U32,U32,U32,U32,U32);

void f6(s739retdecInstance*,U32);

void f7(s739retdecInstance*,U32,U32,U32);

void f8(s739retdecInstance*,U32,U32,U32);

void s739retdec____wasm_call_ctors(s739retdecInstance*i);

void s739retdec____wasm_apply_data_relocs(s739retdecInstance*i);

U32 s739retdec_func_1(s739retdecInstance*i);

void s739retdec_call_cb(s739retdecInstance*i,U32 l0);

void s739retdecInstantiate(s739retdecInstance* instance, void* resolve(const char* module, const char* name));

void s739retdecFreeInstance(s739retdecInstance* instance);

#endif /* s739retdec_H */

