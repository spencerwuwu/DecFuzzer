#ifndef s437retdec_H
#define s437retdec_H

#include "w2c2_base.h"

typedef struct s437retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s437retdecInstance;

void f0(s437retdecInstance*);

void f1(s437retdecInstance*);

U32 f2(s437retdecInstance*);

void f3(s437retdecInstance*,U32);

U32 f4(s437retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s437retdecInstance*,U32,U32,U32,U32,U32);

void f6(s437retdecInstance*,U32);

void f7(s437retdecInstance*,U32,U32,U32);

void f8(s437retdecInstance*,U32,U32,U32);

void s437retdec____wasm_call_ctors(s437retdecInstance*i);

void s437retdec____wasm_apply_data_relocs(s437retdecInstance*i);

U32 s437retdec_func_1(s437retdecInstance*i);

void s437retdec_call_cb(s437retdecInstance*i,U32 l0);

void s437retdecInstantiate(s437retdecInstance* instance, void* resolve(const char* module, const char* name));

void s437retdecFreeInstance(s437retdecInstance* instance);

#endif /* s437retdec_H */

