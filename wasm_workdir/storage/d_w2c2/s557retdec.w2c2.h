#ifndef s557retdec_H
#define s557retdec_H

#include "w2c2_base.h"

typedef struct s557retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s557retdecInstance;

void f0(s557retdecInstance*);

void f1(s557retdecInstance*);

U32 f2(s557retdecInstance*);

void f3(s557retdecInstance*,U32);

U32 f4(s557retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s557retdecInstance*,U32,U32,U32,U32,U32);

void f6(s557retdecInstance*,U32);

void f7(s557retdecInstance*,U32,U32,U32);

void f8(s557retdecInstance*,U32,U32,U32);

void s557retdec____wasm_call_ctors(s557retdecInstance*i);

void s557retdec____wasm_apply_data_relocs(s557retdecInstance*i);

U32 s557retdec_func_1(s557retdecInstance*i);

void s557retdec_call_cb(s557retdecInstance*i,U32 l0);

void s557retdecInstantiate(s557retdecInstance* instance, void* resolve(const char* module, const char* name));

void s557retdecFreeInstance(s557retdecInstance* instance);

#endif /* s557retdec_H */

