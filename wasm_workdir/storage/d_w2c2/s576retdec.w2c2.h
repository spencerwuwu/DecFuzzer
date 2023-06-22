#ifndef s576retdec_H
#define s576retdec_H

#include "w2c2_base.h"

typedef struct s576retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s576retdecInstance;

void f0(s576retdecInstance*);

void f1(s576retdecInstance*);

U32 f2(s576retdecInstance*);

void f3(s576retdecInstance*,U32);

U32 f4(s576retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s576retdecInstance*,U32,U32,U32,U32,U32);

void f6(s576retdecInstance*,U32);

void f7(s576retdecInstance*,U32,U32,U32);

void f8(s576retdecInstance*,U32,U32,U32);

void s576retdec____wasm_call_ctors(s576retdecInstance*i);

void s576retdec____wasm_apply_data_relocs(s576retdecInstance*i);

U32 s576retdec_func_1(s576retdecInstance*i);

void s576retdec_call_cb(s576retdecInstance*i,U32 l0);

void s576retdecInstantiate(s576retdecInstance* instance, void* resolve(const char* module, const char* name));

void s576retdecFreeInstance(s576retdecInstance* instance);

#endif /* s576retdec_H */

