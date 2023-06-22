#ifndef s215retdec_H
#define s215retdec_H

#include "w2c2_base.h"

typedef struct s215retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s215retdecInstance;

void f0(s215retdecInstance*);

void f1(s215retdecInstance*);

U32 f2(s215retdecInstance*);

void f3(s215retdecInstance*,U32);

U32 f4(s215retdecInstance*,U32,U32,U32,U32);

void f5(s215retdecInstance*,U32,U32,U32,U32,U32);

void f6(s215retdecInstance*,U32);

void f7(s215retdecInstance*,U32,U32,U32);

void f8(s215retdecInstance*,U32,U32,U32);

void s215retdec____wasm_call_ctors(s215retdecInstance*i);

void s215retdec____wasm_apply_data_relocs(s215retdecInstance*i);

U32 s215retdec_func_1(s215retdecInstance*i);

void s215retdec_call_cb(s215retdecInstance*i,U32 l0);

void s215retdecInstantiate(s215retdecInstance* instance, void* resolve(const char* module, const char* name));

void s215retdecFreeInstance(s215retdecInstance* instance);

#endif /* s215retdec_H */

