#ifndef s771retdec_H
#define s771retdec_H

#include "w2c2_base.h"

typedef struct s771retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s771retdecInstance;

void f0(s771retdecInstance*);

void f1(s771retdecInstance*);

U32 f2(s771retdecInstance*);

void f3(s771retdecInstance*,U32);

U32 f4(s771retdecInstance*,U32,U32,U32,U32);

void f5(s771retdecInstance*,U32,U32,U32,U32,U32);

void f6(s771retdecInstance*,U32);

void f7(s771retdecInstance*,U32,U32,U32);

void f8(s771retdecInstance*,U32,U32,U32);

void s771retdec____wasm_call_ctors(s771retdecInstance*i);

void s771retdec____wasm_apply_data_relocs(s771retdecInstance*i);

U32 s771retdec_func_1(s771retdecInstance*i);

void s771retdec_call_cb(s771retdecInstance*i,U32 l0);

void s771retdecInstantiate(s771retdecInstance* instance, void* resolve(const char* module, const char* name));

void s771retdecFreeInstance(s771retdecInstance* instance);

#endif /* s771retdec_H */

