#ifndef s863retdec_H
#define s863retdec_H

#include "w2c2_base.h"

typedef struct s863retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s863retdecInstance;

void f0(s863retdecInstance*);

void f1(s863retdecInstance*);

U32 f2(s863retdecInstance*);

void f3(s863retdecInstance*,U32);

U32 f4(s863retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s863retdecInstance*,U32,U32,U32,U32,U32);

void f6(s863retdecInstance*,U32);

void f7(s863retdecInstance*,U32,U32,U32);

void f8(s863retdecInstance*,U32,U32,U32);

void s863retdec____wasm_call_ctors(s863retdecInstance*i);

void s863retdec____wasm_apply_data_relocs(s863retdecInstance*i);

U32 s863retdec_func_1(s863retdecInstance*i);

void s863retdec_call_cb(s863retdecInstance*i,U32 l0);

void s863retdecInstantiate(s863retdecInstance* instance, void* resolve(const char* module, const char* name));

void s863retdecFreeInstance(s863retdecInstance* instance);

#endif /* s863retdec_H */

