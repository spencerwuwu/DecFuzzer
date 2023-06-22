#ifndef s285retdec_H
#define s285retdec_H

#include "w2c2_base.h"

typedef struct s285retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s285retdecInstance;

void f0(s285retdecInstance*);

void f1(s285retdecInstance*);

U32 f2(s285retdecInstance*);

void f3(s285retdecInstance*,U32);

U32 f4(s285retdecInstance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s285retdecInstance*,U32,U32,U32,U32,U32);

void f6(s285retdecInstance*,U32);

void f7(s285retdecInstance*,U32,U32,U32);

void f8(s285retdecInstance*,U32,U32,U32);

void s285retdec____wasm_call_ctors(s285retdecInstance*i);

void s285retdec____wasm_apply_data_relocs(s285retdecInstance*i);

U32 s285retdec_func_1(s285retdecInstance*i);

void s285retdec_call_cb(s285retdecInstance*i,U32 l0);

void s285retdecInstantiate(s285retdecInstance* instance, void* resolve(const char* module, const char* name));

void s285retdecFreeInstance(s285retdecInstance* instance);

#endif /* s285retdec_H */

