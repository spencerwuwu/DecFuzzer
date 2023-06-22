#ifndef s424retdec_H
#define s424retdec_H

#include "w2c2_base.h"

typedef struct s424retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s424retdecInstance;

void f0(s424retdecInstance*);

void f1(s424retdecInstance*);

U32 f2(s424retdecInstance*);

void f3(s424retdecInstance*,U32);

U32 f4(s424retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s424retdecInstance*,U32,U32,U32,U32,U32);

void f6(s424retdecInstance*,U32);

void f7(s424retdecInstance*,U32,U32,U32);

void f8(s424retdecInstance*,U32,U32,U32);

void s424retdec____wasm_call_ctors(s424retdecInstance*i);

void s424retdec____wasm_apply_data_relocs(s424retdecInstance*i);

U32 s424retdec_func_1(s424retdecInstance*i);

void s424retdec_call_cb(s424retdecInstance*i,U32 l0);

void s424retdecInstantiate(s424retdecInstance* instance, void* resolve(const char* module, const char* name));

void s424retdecFreeInstance(s424retdecInstance* instance);

#endif /* s424retdec_H */

