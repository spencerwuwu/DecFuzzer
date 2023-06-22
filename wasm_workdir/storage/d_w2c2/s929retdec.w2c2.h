#ifndef s929retdec_H
#define s929retdec_H

#include "w2c2_base.h"

typedef struct s929retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s929retdecInstance;

void f0(s929retdecInstance*);

void f1(s929retdecInstance*);

U32 f2(s929retdecInstance*);

void f3(s929retdecInstance*,U32);

U32 f4(s929retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s929retdecInstance*,U32,U32,U32,U32,U32);

void f6(s929retdecInstance*,U32);

void f7(s929retdecInstance*,U32,U32,U32);

void f8(s929retdecInstance*,U32,U32,U32);

void s929retdec____wasm_call_ctors(s929retdecInstance*i);

void s929retdec____wasm_apply_data_relocs(s929retdecInstance*i);

U32 s929retdec_func_1(s929retdecInstance*i);

void s929retdec_call_cb(s929retdecInstance*i,U32 l0);

void s929retdecInstantiate(s929retdecInstance* instance, void* resolve(const char* module, const char* name));

void s929retdecFreeInstance(s929retdecInstance* instance);

#endif /* s929retdec_H */

