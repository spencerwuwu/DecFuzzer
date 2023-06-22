#ifndef s272retdec_H
#define s272retdec_H

#include "w2c2_base.h"

typedef struct s272retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s272retdecInstance;

void f0(s272retdecInstance*);

void f1(s272retdecInstance*);

U32 f2(s272retdecInstance*);

void f3(s272retdecInstance*,U32);

U32 f4(s272retdecInstance*,U32,U32,U32,U32);

void f5(s272retdecInstance*,U32,U32,U32,U32,U32);

void f6(s272retdecInstance*,U32);

void f7(s272retdecInstance*,U32,U32,U32);

void f8(s272retdecInstance*,U32,U32,U32);

void s272retdec____wasm_call_ctors(s272retdecInstance*i);

void s272retdec____wasm_apply_data_relocs(s272retdecInstance*i);

U32 s272retdec_func_1(s272retdecInstance*i);

void s272retdec_call_cb(s272retdecInstance*i,U32 l0);

void s272retdecInstantiate(s272retdecInstance* instance, void* resolve(const char* module, const char* name));

void s272retdecFreeInstance(s272retdecInstance* instance);

#endif /* s272retdec_H */

