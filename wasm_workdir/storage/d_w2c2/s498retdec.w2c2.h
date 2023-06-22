#ifndef s498retdec_H
#define s498retdec_H

#include "w2c2_base.h"

typedef struct s498retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s498retdecInstance;

void f0(s498retdecInstance*);

void f1(s498retdecInstance*);

U32 f2(s498retdecInstance*);

void f3(s498retdecInstance*,U32);

U32 f4(s498retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s498retdecInstance*,U32,U32,U32,U32,U32);

void f6(s498retdecInstance*,U32);

void f7(s498retdecInstance*,U32,U32,U32);

void f8(s498retdecInstance*,U32,U32,U32);

void s498retdec____wasm_call_ctors(s498retdecInstance*i);

void s498retdec____wasm_apply_data_relocs(s498retdecInstance*i);

U32 s498retdec_func_1(s498retdecInstance*i);

void s498retdec_call_cb(s498retdecInstance*i,U32 l0);

void s498retdecInstantiate(s498retdecInstance* instance, void* resolve(const char* module, const char* name));

void s498retdecFreeInstance(s498retdecInstance* instance);

#endif /* s498retdec_H */

