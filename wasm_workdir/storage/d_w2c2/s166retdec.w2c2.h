#ifndef s166retdec_H
#define s166retdec_H

#include "w2c2_base.h"

typedef struct s166retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s166retdecInstance;

void f0(s166retdecInstance*);

void f1(s166retdecInstance*);

U32 f2(s166retdecInstance*);

void f3(s166retdecInstance*,U32);

U32 f4(s166retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s166retdecInstance*,U32,U32,U32,U32,U32);

void f6(s166retdecInstance*,U32);

void f7(s166retdecInstance*,U32,U32,U32);

void f8(s166retdecInstance*,U32,U32,U32);

void s166retdec____wasm_call_ctors(s166retdecInstance*i);

void s166retdec____wasm_apply_data_relocs(s166retdecInstance*i);

U32 s166retdec_func_1(s166retdecInstance*i);

void s166retdec_call_cb(s166retdecInstance*i,U32 l0);

void s166retdecInstantiate(s166retdecInstance* instance, void* resolve(const char* module, const char* name));

void s166retdecFreeInstance(s166retdecInstance* instance);

#endif /* s166retdec_H */

