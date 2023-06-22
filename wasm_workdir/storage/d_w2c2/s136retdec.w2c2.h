#ifndef s136retdec_H
#define s136retdec_H

#include "w2c2_base.h"

typedef struct s136retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s136retdecInstance;

void f0(s136retdecInstance*);

void f1(s136retdecInstance*);

U32 f2(s136retdecInstance*);

void f3(s136retdecInstance*,U32);

U32 f4(s136retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s136retdecInstance*,U32,U32,U32,U32,U32);

void f6(s136retdecInstance*,U32);

void f7(s136retdecInstance*,U32,U32,U32);

void f8(s136retdecInstance*,U32,U32,U32);

void s136retdec____wasm_call_ctors(s136retdecInstance*i);

void s136retdec____wasm_apply_data_relocs(s136retdecInstance*i);

U32 s136retdec_func_1(s136retdecInstance*i);

void s136retdec_call_cb(s136retdecInstance*i,U32 l0);

void s136retdecInstantiate(s136retdecInstance* instance, void* resolve(const char* module, const char* name));

void s136retdecFreeInstance(s136retdecInstance* instance);

#endif /* s136retdec_H */

