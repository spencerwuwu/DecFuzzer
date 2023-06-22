#ifndef s524retdec_H
#define s524retdec_H

#include "w2c2_base.h"

typedef struct s524retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s524retdecInstance;

void f0(s524retdecInstance*);

void f1(s524retdecInstance*);

U32 f2(s524retdecInstance*);

void f3(s524retdecInstance*,U32);

U32 f4(s524retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s524retdecInstance*,U32,U32,U32,U32,U32);

void f6(s524retdecInstance*,U32);

void f7(s524retdecInstance*,U32,U32,U32);

void f8(s524retdecInstance*,U32,U32,U32);

void s524retdec____wasm_call_ctors(s524retdecInstance*i);

void s524retdec____wasm_apply_data_relocs(s524retdecInstance*i);

U32 s524retdec_func_1(s524retdecInstance*i);

void s524retdec_call_cb(s524retdecInstance*i,U32 l0);

void s524retdecInstantiate(s524retdecInstance* instance, void* resolve(const char* module, const char* name));

void s524retdecFreeInstance(s524retdecInstance* instance);

#endif /* s524retdec_H */

