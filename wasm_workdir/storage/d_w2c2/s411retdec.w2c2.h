#ifndef s411retdec_H
#define s411retdec_H

#include "w2c2_base.h"

typedef struct s411retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s411retdecInstance;

void f0(s411retdecInstance*);

void f1(s411retdecInstance*);

U32 f2(s411retdecInstance*);

void f3(s411retdecInstance*,U32);

U32 f4(s411retdecInstance*,U32,U32,U32,U32,U32);

void f5(s411retdecInstance*,U32,U32,U32,U32,U32);

void f6(s411retdecInstance*,U32);

void f7(s411retdecInstance*,U32,U32,U32);

void f8(s411retdecInstance*,U32,U32,U32);

void s411retdec____wasm_call_ctors(s411retdecInstance*i);

void s411retdec____wasm_apply_data_relocs(s411retdecInstance*i);

U32 s411retdec_func_1(s411retdecInstance*i);

void s411retdec_call_cb(s411retdecInstance*i,U32 l0);

void s411retdecInstantiate(s411retdecInstance* instance, void* resolve(const char* module, const char* name));

void s411retdecFreeInstance(s411retdecInstance* instance);

#endif /* s411retdec_H */

