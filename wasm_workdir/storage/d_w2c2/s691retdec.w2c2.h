#ifndef s691retdec_H
#define s691retdec_H

#include "w2c2_base.h"

typedef struct s691retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s691retdecInstance;

void f0(s691retdecInstance*);

void f1(s691retdecInstance*);

U32 f2(s691retdecInstance*);

void f3(s691retdecInstance*,U32);

U32 f4(s691retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s691retdecInstance*,U32,U32,U32,U32,U32);

void f6(s691retdecInstance*,U32);

void f7(s691retdecInstance*,U32,U32,U32);

void f8(s691retdecInstance*,U32,U32,U32);

void s691retdec____wasm_call_ctors(s691retdecInstance*i);

void s691retdec____wasm_apply_data_relocs(s691retdecInstance*i);

U32 s691retdec_func_1(s691retdecInstance*i);

void s691retdec_call_cb(s691retdecInstance*i,U32 l0);

void s691retdecInstantiate(s691retdecInstance* instance, void* resolve(const char* module, const char* name));

void s691retdecFreeInstance(s691retdecInstance* instance);

#endif /* s691retdec_H */

