#ifndef s529retdec_H
#define s529retdec_H

#include "w2c2_base.h"

typedef struct s529retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s529retdecInstance;

void f0(s529retdecInstance*);

void f1(s529retdecInstance*);

U32 f2(s529retdecInstance*);

void f3(s529retdecInstance*,U32);

U32 f4(s529retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s529retdecInstance*,U32,U32,U32,U32,U32);

void f6(s529retdecInstance*,U32);

void f7(s529retdecInstance*,U32,U32,U32);

void f8(s529retdecInstance*,U32,U32,U32);

void s529retdec____wasm_call_ctors(s529retdecInstance*i);

void s529retdec____wasm_apply_data_relocs(s529retdecInstance*i);

U32 s529retdec_func_1(s529retdecInstance*i);

void s529retdec_call_cb(s529retdecInstance*i,U32 l0);

void s529retdecInstantiate(s529retdecInstance* instance, void* resolve(const char* module, const char* name));

void s529retdecFreeInstance(s529retdecInstance* instance);

#endif /* s529retdec_H */

