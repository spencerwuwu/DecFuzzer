#ifndef s499retdec_H
#define s499retdec_H

#include "w2c2_base.h"

typedef struct s499retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s499retdecInstance;

void f0(s499retdecInstance*);

void f1(s499retdecInstance*);

U32 f2(s499retdecInstance*);

void f3(s499retdecInstance*,U32);

U32 f4(s499retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s499retdecInstance*,U32,U32,U32,U32,U32);

void f6(s499retdecInstance*,U32);

void f7(s499retdecInstance*,U32,U32,U32);

void f8(s499retdecInstance*,U32,U32,U32);

void s499retdec____wasm_call_ctors(s499retdecInstance*i);

void s499retdec____wasm_apply_data_relocs(s499retdecInstance*i);

U32 s499retdec_func_1(s499retdecInstance*i);

void s499retdec_call_cb(s499retdecInstance*i,U32 l0);

void s499retdecInstantiate(s499retdecInstance* instance, void* resolve(const char* module, const char* name));

void s499retdecFreeInstance(s499retdecInstance* instance);

#endif /* s499retdec_H */

