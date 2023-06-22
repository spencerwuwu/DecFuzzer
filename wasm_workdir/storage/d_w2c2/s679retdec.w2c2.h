#ifndef s679retdec_H
#define s679retdec_H

#include "w2c2_base.h"

typedef struct s679retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s679retdecInstance;

void f0(s679retdecInstance*);

void f1(s679retdecInstance*);

U32 f2(s679retdecInstance*);

void f3(s679retdecInstance*,U32);

U32 f4(s679retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s679retdecInstance*,U32,U32,U32,U32,U32);

void f6(s679retdecInstance*,U32);

void f7(s679retdecInstance*,U32,U32,U32);

void f8(s679retdecInstance*,U32,U32,U32);

void s679retdec____wasm_call_ctors(s679retdecInstance*i);

void s679retdec____wasm_apply_data_relocs(s679retdecInstance*i);

U32 s679retdec_func_1(s679retdecInstance*i);

void s679retdec_call_cb(s679retdecInstance*i,U32 l0);

void s679retdecInstantiate(s679retdecInstance* instance, void* resolve(const char* module, const char* name));

void s679retdecFreeInstance(s679retdecInstance* instance);

#endif /* s679retdec_H */

