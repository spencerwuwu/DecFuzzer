#ifndef s778retdec_H
#define s778retdec_H

#include "w2c2_base.h"

typedef struct s778retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s778retdecInstance;

void f0(s778retdecInstance*);

void f1(s778retdecInstance*);

U32 f2(s778retdecInstance*);

void f3(s778retdecInstance*,U32);

U32 f4(s778retdecInstance*,U32,U32,U32);

void f5(s778retdecInstance*,U32,U32,U32,U32,U32);

void f6(s778retdecInstance*,U32);

void f7(s778retdecInstance*,U32,U32,U32);

void f8(s778retdecInstance*,U32,U32,U32);

void s778retdec____wasm_call_ctors(s778retdecInstance*i);

void s778retdec____wasm_apply_data_relocs(s778retdecInstance*i);

U32 s778retdec_func_1(s778retdecInstance*i);

void s778retdec_call_cb(s778retdecInstance*i,U32 l0);

void s778retdecInstantiate(s778retdecInstance* instance, void* resolve(const char* module, const char* name));

void s778retdecFreeInstance(s778retdecInstance* instance);

#endif /* s778retdec_H */

