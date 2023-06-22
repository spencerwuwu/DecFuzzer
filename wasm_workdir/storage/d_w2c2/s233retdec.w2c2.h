#ifndef s233retdec_H
#define s233retdec_H

#include "w2c2_base.h"

typedef struct s233retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s233retdecInstance;

void f0(s233retdecInstance*);

void f1(s233retdecInstance*);

U32 f2(s233retdecInstance*);

void f3(s233retdecInstance*,U32);

U32 f4(s233retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s233retdecInstance*,U32,U32,U32,U32,U32);

void f6(s233retdecInstance*,U32);

void f7(s233retdecInstance*,U32,U32,U32);

void f8(s233retdecInstance*,U32,U32,U32);

void s233retdec____wasm_call_ctors(s233retdecInstance*i);

void s233retdec____wasm_apply_data_relocs(s233retdecInstance*i);

U32 s233retdec_func_1(s233retdecInstance*i);

void s233retdec_call_cb(s233retdecInstance*i,U32 l0);

void s233retdecInstantiate(s233retdecInstance* instance, void* resolve(const char* module, const char* name));

void s233retdecFreeInstance(s233retdecInstance* instance);

#endif /* s233retdec_H */

