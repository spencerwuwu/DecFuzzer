#ifndef s163retdec_H
#define s163retdec_H

#include "w2c2_base.h"

typedef struct s163retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s163retdecInstance;

void f0(s163retdecInstance*);

void f1(s163retdecInstance*);

U32 f2(s163retdecInstance*);

void f3(s163retdecInstance*,U32);

U32 f4(s163retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s163retdecInstance*,U32,U32,U32,U32,U32);

void f6(s163retdecInstance*,U32);

void f7(s163retdecInstance*,U32,U32,U32);

void f8(s163retdecInstance*,U32,U32,U32);

void s163retdec____wasm_call_ctors(s163retdecInstance*i);

void s163retdec____wasm_apply_data_relocs(s163retdecInstance*i);

U32 s163retdec_func_1(s163retdecInstance*i);

void s163retdec_call_cb(s163retdecInstance*i,U32 l0);

void s163retdecInstantiate(s163retdecInstance* instance, void* resolve(const char* module, const char* name));

void s163retdecFreeInstance(s163retdecInstance* instance);

#endif /* s163retdec_H */

