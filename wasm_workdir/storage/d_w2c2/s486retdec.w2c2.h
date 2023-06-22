#ifndef s486retdec_H
#define s486retdec_H

#include "w2c2_base.h"

typedef struct s486retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s486retdecInstance;

void f0(s486retdecInstance*);

void f1(s486retdecInstance*);

U32 f2(s486retdecInstance*);

void f3(s486retdecInstance*,U32);

U32 f4(s486retdecInstance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s486retdecInstance*,U32,U32,U32,U32,U32);

void f6(s486retdecInstance*,U32);

void f7(s486retdecInstance*,U32,U32,U32);

void f8(s486retdecInstance*,U32,U32,U32);

void s486retdec____wasm_call_ctors(s486retdecInstance*i);

void s486retdec____wasm_apply_data_relocs(s486retdecInstance*i);

U32 s486retdec_func_1(s486retdecInstance*i);

void s486retdec_call_cb(s486retdecInstance*i,U32 l0);

void s486retdecInstantiate(s486retdecInstance* instance, void* resolve(const char* module, const char* name));

void s486retdecFreeInstance(s486retdecInstance* instance);

#endif /* s486retdec_H */

