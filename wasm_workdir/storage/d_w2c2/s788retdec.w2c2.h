#ifndef s788retdec_H
#define s788retdec_H

#include "w2c2_base.h"

typedef struct s788retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s788retdecInstance;

void f0(s788retdecInstance*);

void f1(s788retdecInstance*);

U32 f2(s788retdecInstance*);

void f3(s788retdecInstance*,U32);

U32 f4(s788retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s788retdecInstance*,U32,U32,U32,U32,U32);

void f6(s788retdecInstance*,U32);

void f7(s788retdecInstance*,U32,U32,U32);

void f8(s788retdecInstance*,U32,U32,U32);

void s788retdec____wasm_call_ctors(s788retdecInstance*i);

void s788retdec____wasm_apply_data_relocs(s788retdecInstance*i);

U32 s788retdec_func_1(s788retdecInstance*i);

void s788retdec_call_cb(s788retdecInstance*i,U32 l0);

void s788retdecInstantiate(s788retdecInstance* instance, void* resolve(const char* module, const char* name));

void s788retdecFreeInstance(s788retdecInstance* instance);

#endif /* s788retdec_H */

