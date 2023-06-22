#ifndef s148retdec_H
#define s148retdec_H

#include "w2c2_base.h"

typedef struct s148retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s148retdecInstance;

void f0(s148retdecInstance*);

void f1(s148retdecInstance*);

U32 f2(s148retdecInstance*);

void f3(s148retdecInstance*,U32);

U32 f4(s148retdecInstance*,U32,U32,U32,U32,U32);

void f5(s148retdecInstance*,U32,U32,U32,U32,U32);

void f6(s148retdecInstance*,U32);

void f7(s148retdecInstance*,U32,U32,U32);

void f8(s148retdecInstance*,U32,U32,U32);

void s148retdec____wasm_call_ctors(s148retdecInstance*i);

void s148retdec____wasm_apply_data_relocs(s148retdecInstance*i);

U32 s148retdec_func_1(s148retdecInstance*i);

void s148retdec_call_cb(s148retdecInstance*i,U32 l0);

void s148retdecInstantiate(s148retdecInstance* instance, void* resolve(const char* module, const char* name));

void s148retdecFreeInstance(s148retdecInstance* instance);

#endif /* s148retdec_H */

