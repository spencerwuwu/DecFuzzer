#ifndef s327retdec_H
#define s327retdec_H

#include "w2c2_base.h"

typedef struct s327retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s327retdecInstance;

void f0(s327retdecInstance*);

void f1(s327retdecInstance*);

U32 f2(s327retdecInstance*);

void f3(s327retdecInstance*,U32);

U32 f4(s327retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s327retdecInstance*,U32,U32,U32,U32,U32);

void f6(s327retdecInstance*,U32);

void f7(s327retdecInstance*,U32,U32,U32);

void f8(s327retdecInstance*,U32,U32,U32);

void s327retdec____wasm_call_ctors(s327retdecInstance*i);

void s327retdec____wasm_apply_data_relocs(s327retdecInstance*i);

U32 s327retdec_func_1(s327retdecInstance*i);

void s327retdec_call_cb(s327retdecInstance*i,U32 l0);

void s327retdecInstantiate(s327retdecInstance* instance, void* resolve(const char* module, const char* name));

void s327retdecFreeInstance(s327retdecInstance* instance);

#endif /* s327retdec_H */

