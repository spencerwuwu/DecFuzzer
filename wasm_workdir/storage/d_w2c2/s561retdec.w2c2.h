#ifndef s561retdec_H
#define s561retdec_H

#include "w2c2_base.h"

typedef struct s561retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s561retdecInstance;

void f0(s561retdecInstance*);

void f1(s561retdecInstance*);

U32 f2(s561retdecInstance*);

void f3(s561retdecInstance*,U32);

U32 f4(s561retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s561retdecInstance*,U32,U32,U32,U32,U32);

void f6(s561retdecInstance*,U32);

void f7(s561retdecInstance*,U32,U32,U32);

void f8(s561retdecInstance*,U32,U32,U32);

void s561retdec____wasm_call_ctors(s561retdecInstance*i);

void s561retdec____wasm_apply_data_relocs(s561retdecInstance*i);

U32 s561retdec_func_1(s561retdecInstance*i);

void s561retdec_call_cb(s561retdecInstance*i,U32 l0);

void s561retdecInstantiate(s561retdecInstance* instance, void* resolve(const char* module, const char* name));

void s561retdecFreeInstance(s561retdecInstance* instance);

#endif /* s561retdec_H */

