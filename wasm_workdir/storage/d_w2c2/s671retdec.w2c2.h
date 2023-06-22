#ifndef s671retdec_H
#define s671retdec_H

#include "w2c2_base.h"

typedef struct s671retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s671retdecInstance;

void f0(s671retdecInstance*);

void f1(s671retdecInstance*);

U32 f2(s671retdecInstance*);

void f3(s671retdecInstance*,U32);

U32 f4(s671retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s671retdecInstance*,U32,U32,U32,U32,U32);

void f6(s671retdecInstance*,U32);

void f7(s671retdecInstance*,U32,U32,U32);

void f8(s671retdecInstance*,U32,U32,U32);

void s671retdec____wasm_call_ctors(s671retdecInstance*i);

void s671retdec____wasm_apply_data_relocs(s671retdecInstance*i);

U32 s671retdec_func_1(s671retdecInstance*i);

void s671retdec_call_cb(s671retdecInstance*i,U32 l0);

void s671retdecInstantiate(s671retdecInstance* instance, void* resolve(const char* module, const char* name));

void s671retdecFreeInstance(s671retdecInstance* instance);

#endif /* s671retdec_H */

