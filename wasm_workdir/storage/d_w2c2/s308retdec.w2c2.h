#ifndef s308retdec_H
#define s308retdec_H

#include "w2c2_base.h"

typedef struct s308retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s308retdecInstance;

void f0(s308retdecInstance*);

void f1(s308retdecInstance*);

U32 f2(s308retdecInstance*);

void f3(s308retdecInstance*,U32);

U32 f4(s308retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s308retdecInstance*,U32,U32,U32,U32,U32);

void f6(s308retdecInstance*,U32);

void f7(s308retdecInstance*,U32,U32,U32);

void f8(s308retdecInstance*,U32,U32,U32);

void s308retdec____wasm_call_ctors(s308retdecInstance*i);

void s308retdec____wasm_apply_data_relocs(s308retdecInstance*i);

U32 s308retdec_func_1(s308retdecInstance*i);

void s308retdec_call_cb(s308retdecInstance*i,U32 l0);

void s308retdecInstantiate(s308retdecInstance* instance, void* resolve(const char* module, const char* name));

void s308retdecFreeInstance(s308retdecInstance* instance);

#endif /* s308retdec_H */

