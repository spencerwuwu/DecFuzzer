#ifndef s971retdec_H
#define s971retdec_H

#include "w2c2_base.h"

typedef struct s971retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s971retdecInstance;

void f0(s971retdecInstance*);

void f1(s971retdecInstance*);

U32 f2(s971retdecInstance*);

void f3(s971retdecInstance*,U32);

U32 f4(s971retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s971retdecInstance*,U32,U32,U32,U32,U32);

void f6(s971retdecInstance*,U32);

void f7(s971retdecInstance*,U32,U32,U32);

void f8(s971retdecInstance*,U32,U32,U32);

void s971retdec____wasm_call_ctors(s971retdecInstance*i);

void s971retdec____wasm_apply_data_relocs(s971retdecInstance*i);

U32 s971retdec_func_1(s971retdecInstance*i);

void s971retdec_call_cb(s971retdecInstance*i,U32 l0);

void s971retdecInstantiate(s971retdecInstance* instance, void* resolve(const char* module, const char* name));

void s971retdecFreeInstance(s971retdecInstance* instance);

#endif /* s971retdec_H */

