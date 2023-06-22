#ifndef s14retdec_H
#define s14retdec_H

#include "w2c2_base.h"

typedef struct s14retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s14retdecInstance;

void f0(s14retdecInstance*);

void f1(s14retdecInstance*);

U32 f2(s14retdecInstance*);

void f3(s14retdecInstance*,U32);

U32 f4(s14retdecInstance*,U32,U32,U32);

void f5(s14retdecInstance*,U32,U32,U32,U32,U32);

void f6(s14retdecInstance*,U32);

void f7(s14retdecInstance*,U32,U32,U32);

void f8(s14retdecInstance*,U32,U32,U32);

void s14retdec____wasm_call_ctors(s14retdecInstance*i);

void s14retdec____wasm_apply_data_relocs(s14retdecInstance*i);

U32 s14retdec_func_1(s14retdecInstance*i);

void s14retdec_call_cb(s14retdecInstance*i,U32 l0);

void s14retdecInstantiate(s14retdecInstance* instance, void* resolve(const char* module, const char* name));

void s14retdecFreeInstance(s14retdecInstance* instance);

#endif /* s14retdec_H */

