#ifndef s329retdec_H
#define s329retdec_H

#include "w2c2_base.h"

typedef struct s329retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s329retdecInstance;

void f0(s329retdecInstance*);

void f1(s329retdecInstance*);

U32 f2(s329retdecInstance*);

void f3(s329retdecInstance*,U32);

U32 f4(s329retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s329retdecInstance*,U32,U32,U32,U32,U32);

void f6(s329retdecInstance*,U32);

void f7(s329retdecInstance*,U32,U32,U32);

void f8(s329retdecInstance*,U32,U32,U32);

void s329retdec____wasm_call_ctors(s329retdecInstance*i);

void s329retdec____wasm_apply_data_relocs(s329retdecInstance*i);

U32 s329retdec_func_1(s329retdecInstance*i);

void s329retdec_call_cb(s329retdecInstance*i,U32 l0);

void s329retdecInstantiate(s329retdecInstance* instance, void* resolve(const char* module, const char* name));

void s329retdecFreeInstance(s329retdecInstance* instance);

#endif /* s329retdec_H */

