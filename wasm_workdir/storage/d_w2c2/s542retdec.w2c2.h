#ifndef s542retdec_H
#define s542retdec_H

#include "w2c2_base.h"

typedef struct s542retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s542retdecInstance;

void f0(s542retdecInstance*);

void f1(s542retdecInstance*);

U32 f2(s542retdecInstance*);

void f3(s542retdecInstance*,U32);

U32 f4(s542retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s542retdecInstance*,U32,U32,U32,U32,U32);

void f6(s542retdecInstance*,U32);

void f7(s542retdecInstance*,U32,U32,U32);

void f8(s542retdecInstance*,U32,U32,U32);

void s542retdec____wasm_call_ctors(s542retdecInstance*i);

void s542retdec____wasm_apply_data_relocs(s542retdecInstance*i);

U32 s542retdec_func_1(s542retdecInstance*i);

void s542retdec_call_cb(s542retdecInstance*i,U32 l0);

void s542retdecInstantiate(s542retdecInstance* instance, void* resolve(const char* module, const char* name));

void s542retdecFreeInstance(s542retdecInstance* instance);

#endif /* s542retdec_H */

