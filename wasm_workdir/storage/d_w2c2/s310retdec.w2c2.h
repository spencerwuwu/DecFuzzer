#ifndef s310retdec_H
#define s310retdec_H

#include "w2c2_base.h"

typedef struct s310retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s310retdecInstance;

void f0(s310retdecInstance*);

void f1(s310retdecInstance*);

U32 f2(s310retdecInstance*);

void f3(s310retdecInstance*,U32);

U32 f4(s310retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s310retdecInstance*,U32,U32,U32,U32,U32);

void f6(s310retdecInstance*,U32);

void f7(s310retdecInstance*,U32,U32,U32);

void f8(s310retdecInstance*,U32,U32,U32);

void s310retdec____wasm_call_ctors(s310retdecInstance*i);

void s310retdec____wasm_apply_data_relocs(s310retdecInstance*i);

U32 s310retdec_func_1(s310retdecInstance*i);

void s310retdec_call_cb(s310retdecInstance*i,U32 l0);

void s310retdecInstantiate(s310retdecInstance* instance, void* resolve(const char* module, const char* name));

void s310retdecFreeInstance(s310retdecInstance* instance);

#endif /* s310retdec_H */

