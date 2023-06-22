#ifndef s349retdec_H
#define s349retdec_H

#include "w2c2_base.h"

typedef struct s349retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s349retdecInstance;

void f0(s349retdecInstance*);

void f1(s349retdecInstance*);

U32 f2(s349retdecInstance*);

void f3(s349retdecInstance*,U32);

U32 f4(s349retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s349retdecInstance*,U32,U32,U32,U32,U32);

void f6(s349retdecInstance*,U32);

void f7(s349retdecInstance*,U32,U32,U32);

void f8(s349retdecInstance*,U32,U32,U32);

void s349retdec____wasm_call_ctors(s349retdecInstance*i);

void s349retdec____wasm_apply_data_relocs(s349retdecInstance*i);

U32 s349retdec_func_1(s349retdecInstance*i);

void s349retdec_call_cb(s349retdecInstance*i,U32 l0);

void s349retdecInstantiate(s349retdecInstance* instance, void* resolve(const char* module, const char* name));

void s349retdecFreeInstance(s349retdecInstance* instance);

#endif /* s349retdec_H */

