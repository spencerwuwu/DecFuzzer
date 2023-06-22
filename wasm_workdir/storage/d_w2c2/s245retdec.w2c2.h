#ifndef s245retdec_H
#define s245retdec_H

#include "w2c2_base.h"

typedef struct s245retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s245retdecInstance;

void f0(s245retdecInstance*);

void f1(s245retdecInstance*);

U32 f2(s245retdecInstance*);

void f3(s245retdecInstance*,U32);

U32 f4(s245retdecInstance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s245retdecInstance*,U32,U32,U32,U32,U32);

void f6(s245retdecInstance*,U32);

void f7(s245retdecInstance*,U32,U32,U32);

void f8(s245retdecInstance*,U32,U32,U32);

void s245retdec____wasm_call_ctors(s245retdecInstance*i);

void s245retdec____wasm_apply_data_relocs(s245retdecInstance*i);

U32 s245retdec_func_1(s245retdecInstance*i);

void s245retdec_call_cb(s245retdecInstance*i,U32 l0);

void s245retdecInstantiate(s245retdecInstance* instance, void* resolve(const char* module, const char* name));

void s245retdecFreeInstance(s245retdecInstance* instance);

#endif /* s245retdec_H */

