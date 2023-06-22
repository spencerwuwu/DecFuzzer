#ifndef s82retdec_H
#define s82retdec_H

#include "w2c2_base.h"

typedef struct s82retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s82retdecInstance;

void f0(s82retdecInstance*);

void f1(s82retdecInstance*);

U32 f2(s82retdecInstance*);

void f3(s82retdecInstance*,U32);

U32 f4(s82retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s82retdecInstance*,U32,U32,U32,U32,U32);

void f6(s82retdecInstance*,U32);

void f7(s82retdecInstance*,U32,U32,U32);

void f8(s82retdecInstance*,U32,U32,U32);

void s82retdec____wasm_call_ctors(s82retdecInstance*i);

void s82retdec____wasm_apply_data_relocs(s82retdecInstance*i);

U32 s82retdec_func_1(s82retdecInstance*i);

void s82retdec_call_cb(s82retdecInstance*i,U32 l0);

void s82retdecInstantiate(s82retdecInstance* instance, void* resolve(const char* module, const char* name));

void s82retdecFreeInstance(s82retdecInstance* instance);

#endif /* s82retdec_H */

