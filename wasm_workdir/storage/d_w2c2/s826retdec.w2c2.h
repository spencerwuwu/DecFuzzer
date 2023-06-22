#ifndef s826retdec_H
#define s826retdec_H

#include "w2c2_base.h"

typedef struct s826retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s826retdecInstance;

void f0(s826retdecInstance*);

void f1(s826retdecInstance*);

U32 f2(s826retdecInstance*);

void f3(s826retdecInstance*,U32);

U32 f4(s826retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s826retdecInstance*,U32,U32,U32,U32,U32);

void f6(s826retdecInstance*,U32);

void f7(s826retdecInstance*,U32,U32,U32);

void f8(s826retdecInstance*,U32,U32,U32);

void s826retdec____wasm_call_ctors(s826retdecInstance*i);

void s826retdec____wasm_apply_data_relocs(s826retdecInstance*i);

U32 s826retdec_func_1(s826retdecInstance*i);

void s826retdec_call_cb(s826retdecInstance*i,U32 l0);

void s826retdecInstantiate(s826retdecInstance* instance, void* resolve(const char* module, const char* name));

void s826retdecFreeInstance(s826retdecInstance* instance);

#endif /* s826retdec_H */

