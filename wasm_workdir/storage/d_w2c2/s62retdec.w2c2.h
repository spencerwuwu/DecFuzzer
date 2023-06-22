#ifndef s62retdec_H
#define s62retdec_H

#include "w2c2_base.h"

typedef struct s62retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s62retdecInstance;

void f0(s62retdecInstance*);

void f1(s62retdecInstance*);

U32 f2(s62retdecInstance*);

void f3(s62retdecInstance*,U32);

U32 f4(s62retdecInstance*,U32,U32,U32,U32,U32);

void f5(s62retdecInstance*,U32,U32,U32,U32,U32);

void f6(s62retdecInstance*,U32);

void f7(s62retdecInstance*,U32,U32,U32);

void f8(s62retdecInstance*,U32,U32,U32);

void s62retdec____wasm_call_ctors(s62retdecInstance*i);

void s62retdec____wasm_apply_data_relocs(s62retdecInstance*i);

U32 s62retdec_func_1(s62retdecInstance*i);

void s62retdec_call_cb(s62retdecInstance*i,U32 l0);

void s62retdecInstantiate(s62retdecInstance* instance, void* resolve(const char* module, const char* name));

void s62retdecFreeInstance(s62retdecInstance* instance);

#endif /* s62retdec_H */

