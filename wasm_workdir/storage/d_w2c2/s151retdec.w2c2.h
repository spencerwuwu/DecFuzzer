#ifndef s151retdec_H
#define s151retdec_H

#include "w2c2_base.h"

typedef struct s151retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s151retdecInstance;

void f0(s151retdecInstance*);

void f1(s151retdecInstance*);

U32 f2(s151retdecInstance*);

void f3(s151retdecInstance*,U32);

U32 f4(s151retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s151retdecInstance*,U32,U32,U32,U32,U32);

void f6(s151retdecInstance*,U32);

void f7(s151retdecInstance*,U32,U32,U32);

void f8(s151retdecInstance*,U32,U32,U32);

void s151retdec____wasm_call_ctors(s151retdecInstance*i);

void s151retdec____wasm_apply_data_relocs(s151retdecInstance*i);

U32 s151retdec_func_1(s151retdecInstance*i);

void s151retdec_call_cb(s151retdecInstance*i,U32 l0);

void s151retdecInstantiate(s151retdecInstance* instance, void* resolve(const char* module, const char* name));

void s151retdecFreeInstance(s151retdecInstance* instance);

#endif /* s151retdec_H */

