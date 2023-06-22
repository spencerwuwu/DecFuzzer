#ifndef s618retdec_H
#define s618retdec_H

#include "w2c2_base.h"

typedef struct s618retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s618retdecInstance;

void f0(s618retdecInstance*);

void f1(s618retdecInstance*);

U32 f2(s618retdecInstance*);

void f3(s618retdecInstance*,U32);

U32 f4(s618retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s618retdecInstance*,U32,U32,U32,U32,U32);

void f6(s618retdecInstance*,U32);

void f7(s618retdecInstance*,U32,U32,U32);

void f8(s618retdecInstance*,U32,U32,U32);

void s618retdec____wasm_call_ctors(s618retdecInstance*i);

void s618retdec____wasm_apply_data_relocs(s618retdecInstance*i);

U32 s618retdec_func_1(s618retdecInstance*i);

void s618retdec_call_cb(s618retdecInstance*i,U32 l0);

void s618retdecInstantiate(s618retdecInstance* instance, void* resolve(const char* module, const char* name));

void s618retdecFreeInstance(s618retdecInstance* instance);

#endif /* s618retdec_H */

