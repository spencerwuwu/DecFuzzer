#ifndef s980retdec_H
#define s980retdec_H

#include "w2c2_base.h"

typedef struct s980retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s980retdecInstance;

void f0(s980retdecInstance*);

void f1(s980retdecInstance*);

U32 f2(s980retdecInstance*);

void f3(s980retdecInstance*,U32);

U32 f4(s980retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s980retdecInstance*,U32,U32,U32,U32,U32);

void f6(s980retdecInstance*,U32);

void f7(s980retdecInstance*,U32,U32,U32);

void f8(s980retdecInstance*,U32,U32,U32);

void s980retdec____wasm_call_ctors(s980retdecInstance*i);

void s980retdec____wasm_apply_data_relocs(s980retdecInstance*i);

U32 s980retdec_func_1(s980retdecInstance*i);

void s980retdec_call_cb(s980retdecInstance*i,U32 l0);

void s980retdecInstantiate(s980retdecInstance* instance, void* resolve(const char* module, const char* name));

void s980retdecFreeInstance(s980retdecInstance* instance);

#endif /* s980retdec_H */

