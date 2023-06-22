#ifndef s930retdec_H
#define s930retdec_H

#include "w2c2_base.h"

typedef struct s930retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s930retdecInstance;

void f0(s930retdecInstance*);

void f1(s930retdecInstance*);

U32 f2(s930retdecInstance*);

void f3(s930retdecInstance*,U32);

U32 f4(s930retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s930retdecInstance*,U32,U32,U32,U32,U32);

void f6(s930retdecInstance*,U32);

void f7(s930retdecInstance*,U32,U32,U32);

void f8(s930retdecInstance*,U32,U32,U32);

void s930retdec____wasm_call_ctors(s930retdecInstance*i);

void s930retdec____wasm_apply_data_relocs(s930retdecInstance*i);

U32 s930retdec_func_1(s930retdecInstance*i);

void s930retdec_call_cb(s930retdecInstance*i,U32 l0);

void s930retdecInstantiate(s930retdecInstance* instance, void* resolve(const char* module, const char* name));

void s930retdecFreeInstance(s930retdecInstance* instance);

#endif /* s930retdec_H */

