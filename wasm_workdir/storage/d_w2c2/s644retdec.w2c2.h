#ifndef s644retdec_H
#define s644retdec_H

#include "w2c2_base.h"

typedef struct s644retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s644retdecInstance;

void f0(s644retdecInstance*);

void f1(s644retdecInstance*);

U32 f2(s644retdecInstance*);

void f3(s644retdecInstance*,U32);

U32 f4(s644retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s644retdecInstance*,U32,U32,U32,U32,U32);

void f6(s644retdecInstance*,U32);

void f7(s644retdecInstance*,U32,U32,U32);

void f8(s644retdecInstance*,U32,U32,U32);

void s644retdec____wasm_call_ctors(s644retdecInstance*i);

void s644retdec____wasm_apply_data_relocs(s644retdecInstance*i);

U32 s644retdec_func_1(s644retdecInstance*i);

void s644retdec_call_cb(s644retdecInstance*i,U32 l0);

void s644retdecInstantiate(s644retdecInstance* instance, void* resolve(const char* module, const char* name));

void s644retdecFreeInstance(s644retdecInstance* instance);

#endif /* s644retdec_H */

