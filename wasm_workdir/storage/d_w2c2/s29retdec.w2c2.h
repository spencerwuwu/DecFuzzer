#ifndef s29retdec_H
#define s29retdec_H

#include "w2c2_base.h"

typedef struct s29retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s29retdecInstance;

void f0(s29retdecInstance*);

void f1(s29retdecInstance*);

U32 f2(s29retdecInstance*);

void f3(s29retdecInstance*,U32);

void f4(s29retdecInstance*,U32);

void s29retdec____wasm_call_ctors(s29retdecInstance*i);

void s29retdec____wasm_apply_data_relocs(s29retdecInstance*i);

U32 s29retdec_func_1(s29retdecInstance*i);

void s29retdec_call_cb(s29retdecInstance*i,U32 l0);

void s29retdecInstantiate(s29retdecInstance* instance, void* resolve(const char* module, const char* name));

void s29retdecFreeInstance(s29retdecInstance* instance);

#endif /* s29retdec_H */

