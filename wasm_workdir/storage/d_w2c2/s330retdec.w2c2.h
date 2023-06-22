#ifndef s330retdec_H
#define s330retdec_H

#include "w2c2_base.h"

typedef struct s330retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s330retdecInstance;

void f0(s330retdecInstance*);

void f1(s330retdecInstance*);

U32 f2(s330retdecInstance*);

void f3(s330retdecInstance*,U32);

U32 f4(s330retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s330retdecInstance*,U32,U32,U32,U32,U32);

void f6(s330retdecInstance*,U32);

void f7(s330retdecInstance*,U32,U32,U32);

void f8(s330retdecInstance*,U32,U32,U32);

void s330retdec____wasm_call_ctors(s330retdecInstance*i);

void s330retdec____wasm_apply_data_relocs(s330retdecInstance*i);

U32 s330retdec_func_1(s330retdecInstance*i);

void s330retdec_call_cb(s330retdecInstance*i,U32 l0);

void s330retdecInstantiate(s330retdecInstance* instance, void* resolve(const char* module, const char* name));

void s330retdecFreeInstance(s330retdecInstance* instance);

#endif /* s330retdec_H */

