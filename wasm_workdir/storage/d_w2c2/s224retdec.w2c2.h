#ifndef s224retdec_H
#define s224retdec_H

#include "w2c2_base.h"

typedef struct s224retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s224retdecInstance;

void f0(s224retdecInstance*);

void f1(s224retdecInstance*);

U32 f2(s224retdecInstance*);

void f3(s224retdecInstance*,U32);

U32 f4(s224retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s224retdecInstance*,U32,U32,U32,U32,U32);

void f6(s224retdecInstance*,U32);

void f7(s224retdecInstance*,U32,U32,U32);

void f8(s224retdecInstance*,U32,U32,U32);

void s224retdec____wasm_call_ctors(s224retdecInstance*i);

void s224retdec____wasm_apply_data_relocs(s224retdecInstance*i);

U32 s224retdec_func_1(s224retdecInstance*i);

void s224retdec_call_cb(s224retdecInstance*i,U32 l0);

void s224retdecInstantiate(s224retdecInstance* instance, void* resolve(const char* module, const char* name));

void s224retdecFreeInstance(s224retdecInstance* instance);

#endif /* s224retdec_H */

