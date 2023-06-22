#ifndef s802retdec_H
#define s802retdec_H

#include "w2c2_base.h"

typedef struct s802retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s802retdecInstance;

void f0(s802retdecInstance*);

void f1(s802retdecInstance*);

U32 f2(s802retdecInstance*);

void f3(s802retdecInstance*,U32);

U32 f4(s802retdecInstance*,U32,U32,U32);

void f5(s802retdecInstance*,U32,U32,U32,U32,U32);

void f6(s802retdecInstance*,U32);

void f7(s802retdecInstance*,U32,U32,U32);

void f8(s802retdecInstance*,U32,U32,U32);

void s802retdec____wasm_call_ctors(s802retdecInstance*i);

void s802retdec____wasm_apply_data_relocs(s802retdecInstance*i);

U32 s802retdec_func_1(s802retdecInstance*i);

void s802retdec_call_cb(s802retdecInstance*i,U32 l0);

void s802retdecInstantiate(s802retdecInstance* instance, void* resolve(const char* module, const char* name));

void s802retdecFreeInstance(s802retdecInstance* instance);

#endif /* s802retdec_H */

