#ifndef s196retdec_H
#define s196retdec_H

#include "w2c2_base.h"

typedef struct s196retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s196retdecInstance;

void f0(s196retdecInstance*);

void f1(s196retdecInstance*);

U32 f2(s196retdecInstance*);

void f3(s196retdecInstance*,U32);

U32 f4(s196retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s196retdecInstance*,U32,U32,U32,U32,U32);

void f6(s196retdecInstance*,U32);

void f7(s196retdecInstance*,U32,U32,U32);

void f8(s196retdecInstance*,U32,U32,U32);

void s196retdec____wasm_call_ctors(s196retdecInstance*i);

void s196retdec____wasm_apply_data_relocs(s196retdecInstance*i);

U32 s196retdec_func_1(s196retdecInstance*i);

void s196retdec_call_cb(s196retdecInstance*i,U32 l0);

void s196retdecInstantiate(s196retdecInstance* instance, void* resolve(const char* module, const char* name));

void s196retdecFreeInstance(s196retdecInstance* instance);

#endif /* s196retdec_H */

