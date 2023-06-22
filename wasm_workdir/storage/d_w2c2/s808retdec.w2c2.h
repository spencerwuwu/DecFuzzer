#ifndef s808retdec_H
#define s808retdec_H

#include "w2c2_base.h"

typedef struct s808retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s808retdecInstance;

void f0(s808retdecInstance*);

void f1(s808retdecInstance*);

U32 f2(s808retdecInstance*);

void f3(s808retdecInstance*,U32);

U32 f4(s808retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s808retdecInstance*,U32,U32,U32,U32,U32);

void f6(s808retdecInstance*,U32);

void f7(s808retdecInstance*,U32,U32,U32);

void f8(s808retdecInstance*,U32,U32,U32);

void s808retdec____wasm_call_ctors(s808retdecInstance*i);

void s808retdec____wasm_apply_data_relocs(s808retdecInstance*i);

U32 s808retdec_func_1(s808retdecInstance*i);

void s808retdec_call_cb(s808retdecInstance*i,U32 l0);

void s808retdecInstantiate(s808retdecInstance* instance, void* resolve(const char* module, const char* name));

void s808retdecFreeInstance(s808retdecInstance* instance);

#endif /* s808retdec_H */

