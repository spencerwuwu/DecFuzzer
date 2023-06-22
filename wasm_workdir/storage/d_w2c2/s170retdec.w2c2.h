#ifndef s170retdec_H
#define s170retdec_H

#include "w2c2_base.h"

typedef struct s170retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s170retdecInstance;

void f0(s170retdecInstance*);

void f1(s170retdecInstance*);

U32 f2(s170retdecInstance*);

void f3(s170retdecInstance*,U32);

U32 f4(s170retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s170retdecInstance*,U32,U32,U32,U32,U32);

void f6(s170retdecInstance*,U32);

void f7(s170retdecInstance*,U32,U32,U32);

void f8(s170retdecInstance*,U32,U32,U32);

void s170retdec____wasm_call_ctors(s170retdecInstance*i);

void s170retdec____wasm_apply_data_relocs(s170retdecInstance*i);

U32 s170retdec_func_1(s170retdecInstance*i);

void s170retdec_call_cb(s170retdecInstance*i,U32 l0);

void s170retdecInstantiate(s170retdecInstance* instance, void* resolve(const char* module, const char* name));

void s170retdecFreeInstance(s170retdecInstance* instance);

#endif /* s170retdec_H */

