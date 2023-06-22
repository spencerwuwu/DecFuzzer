#ifndef s631retdec_H
#define s631retdec_H

#include "w2c2_base.h"

typedef struct s631retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s631retdecInstance;

void f0(s631retdecInstance*);

void f1(s631retdecInstance*);

U32 f2(s631retdecInstance*);

void f3(s631retdecInstance*,U32);

U32 f4(s631retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s631retdecInstance*,U32,U32,U32,U32,U32);

void f6(s631retdecInstance*,U32);

void f7(s631retdecInstance*,U32,U32,U32);

void f8(s631retdecInstance*,U32,U32,U32);

void s631retdec____wasm_call_ctors(s631retdecInstance*i);

void s631retdec____wasm_apply_data_relocs(s631retdecInstance*i);

U32 s631retdec_func_1(s631retdecInstance*i);

void s631retdec_call_cb(s631retdecInstance*i,U32 l0);

void s631retdecInstantiate(s631retdecInstance* instance, void* resolve(const char* module, const char* name));

void s631retdecFreeInstance(s631retdecInstance* instance);

#endif /* s631retdec_H */

