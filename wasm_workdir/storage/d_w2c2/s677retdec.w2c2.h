#ifndef s677retdec_H
#define s677retdec_H

#include "w2c2_base.h"

typedef struct s677retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s677retdecInstance;

void f0(s677retdecInstance*);

void f1(s677retdecInstance*);

U32 f2(s677retdecInstance*);

void f3(s677retdecInstance*,U32);

U32 f4(s677retdecInstance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s677retdecInstance*,U32,U32,U32,U32,U32);

void f6(s677retdecInstance*,U32);

void f7(s677retdecInstance*,U32,U32,U32);

void f8(s677retdecInstance*,U32,U32,U32);

void s677retdec____wasm_call_ctors(s677retdecInstance*i);

void s677retdec____wasm_apply_data_relocs(s677retdecInstance*i);

U32 s677retdec_func_1(s677retdecInstance*i);

void s677retdec_call_cb(s677retdecInstance*i,U32 l0);

void s677retdecInstantiate(s677retdecInstance* instance, void* resolve(const char* module, const char* name));

void s677retdecFreeInstance(s677retdecInstance* instance);

#endif /* s677retdec_H */

