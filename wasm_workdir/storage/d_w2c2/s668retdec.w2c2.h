#ifndef s668retdec_H
#define s668retdec_H

#include "w2c2_base.h"

typedef struct s668retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s668retdecInstance;

void f0(s668retdecInstance*);

void f1(s668retdecInstance*);

U32 f2(s668retdecInstance*);

void f3(s668retdecInstance*,U32);

U32 f4(s668retdecInstance*,U32,U32,U32,U32,U32);

void f5(s668retdecInstance*,U32,U32,U32,U32,U32);

void f6(s668retdecInstance*,U32);

void f7(s668retdecInstance*,U32,U32,U32);

void f8(s668retdecInstance*,U32,U32,U32);

void s668retdec____wasm_call_ctors(s668retdecInstance*i);

void s668retdec____wasm_apply_data_relocs(s668retdecInstance*i);

U32 s668retdec_func_1(s668retdecInstance*i);

void s668retdec_call_cb(s668retdecInstance*i,U32 l0);

void s668retdecInstantiate(s668retdecInstance* instance, void* resolve(const char* module, const char* name));

void s668retdecFreeInstance(s668retdecInstance* instance);

#endif /* s668retdec_H */

