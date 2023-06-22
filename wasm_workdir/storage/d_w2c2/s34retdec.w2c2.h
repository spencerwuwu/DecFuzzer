#ifndef s34retdec_H
#define s34retdec_H

#include "w2c2_base.h"

typedef struct s34retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s34retdecInstance;

void f0(s34retdecInstance*);

void f1(s34retdecInstance*);

U32 f2(s34retdecInstance*);

void f3(s34retdecInstance*,U32);

U32 f4(s34retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s34retdecInstance*,U32,U32,U32,U32,U32);

void f6(s34retdecInstance*,U32);

void f7(s34retdecInstance*,U32,U32,U32);

void f8(s34retdecInstance*,U32,U32,U32);

void s34retdec____wasm_call_ctors(s34retdecInstance*i);

void s34retdec____wasm_apply_data_relocs(s34retdecInstance*i);

U32 s34retdec_func_1(s34retdecInstance*i);

void s34retdec_call_cb(s34retdecInstance*i,U32 l0);

void s34retdecInstantiate(s34retdecInstance* instance, void* resolve(const char* module, const char* name));

void s34retdecFreeInstance(s34retdecInstance* instance);

#endif /* s34retdec_H */

