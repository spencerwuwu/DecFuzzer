#ifndef s455retdec_H
#define s455retdec_H

#include "w2c2_base.h"

typedef struct s455retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s455retdecInstance;

void f0(s455retdecInstance*);

void f1(s455retdecInstance*);

U32 f2(s455retdecInstance*);

void f3(s455retdecInstance*,U32);

U32 f4(s455retdecInstance*,U32,U32,U32,U32,U32);

void f5(s455retdecInstance*,U32,U32,U32,U32,U32);

void f6(s455retdecInstance*,U32);

void f7(s455retdecInstance*,U32,U32,U32);

void f8(s455retdecInstance*,U32,U32,U32);

void s455retdec____wasm_call_ctors(s455retdecInstance*i);

void s455retdec____wasm_apply_data_relocs(s455retdecInstance*i);

U32 s455retdec_func_1(s455retdecInstance*i);

void s455retdec_call_cb(s455retdecInstance*i,U32 l0);

void s455retdecInstantiate(s455retdecInstance* instance, void* resolve(const char* module, const char* name));

void s455retdecFreeInstance(s455retdecInstance* instance);

#endif /* s455retdec_H */

