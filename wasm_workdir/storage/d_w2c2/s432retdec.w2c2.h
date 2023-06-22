#ifndef s432retdec_H
#define s432retdec_H

#include "w2c2_base.h"

typedef struct s432retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s432retdecInstance;

void f0(s432retdecInstance*);

void f1(s432retdecInstance*);

U32 f2(s432retdecInstance*);

void f3(s432retdecInstance*,U32);

U32 f4(s432retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s432retdecInstance*,U32,U32,U32,U32,U32);

void f6(s432retdecInstance*,U32);

void f7(s432retdecInstance*,U32,U32,U32);

void f8(s432retdecInstance*,U32,U32,U32);

void s432retdec____wasm_call_ctors(s432retdecInstance*i);

void s432retdec____wasm_apply_data_relocs(s432retdecInstance*i);

U32 s432retdec_func_1(s432retdecInstance*i);

void s432retdec_call_cb(s432retdecInstance*i,U32 l0);

void s432retdecInstantiate(s432retdecInstance* instance, void* resolve(const char* module, const char* name));

void s432retdecFreeInstance(s432retdecInstance* instance);

#endif /* s432retdec_H */

