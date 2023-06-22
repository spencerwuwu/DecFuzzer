#ifndef s592retdec_H
#define s592retdec_H

#include "w2c2_base.h"

typedef struct s592retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s592retdecInstance;

void f0(s592retdecInstance*);

void f1(s592retdecInstance*);

U32 f2(s592retdecInstance*);

void f3(s592retdecInstance*,U32);

U32 f4(s592retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s592retdecInstance*,U32,U32,U32,U32,U32);

void f6(s592retdecInstance*,U32);

void f7(s592retdecInstance*,U32,U32,U32);

void f8(s592retdecInstance*,U32,U32,U32);

void s592retdec____wasm_call_ctors(s592retdecInstance*i);

void s592retdec____wasm_apply_data_relocs(s592retdecInstance*i);

U32 s592retdec_func_1(s592retdecInstance*i);

void s592retdec_call_cb(s592retdecInstance*i,U32 l0);

void s592retdecInstantiate(s592retdecInstance* instance, void* resolve(const char* module, const char* name));

void s592retdecFreeInstance(s592retdecInstance* instance);

#endif /* s592retdec_H */

