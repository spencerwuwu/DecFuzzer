#ifndef s887retdec_H
#define s887retdec_H

#include "w2c2_base.h"

typedef struct s887retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s887retdecInstance;

void f0(s887retdecInstance*);

void f1(s887retdecInstance*);

U32 f2(s887retdecInstance*);

void f3(s887retdecInstance*,U32);

U32 f4(s887retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s887retdecInstance*,U32,U32,U32,U32,U32);

void f6(s887retdecInstance*,U32);

void f7(s887retdecInstance*,U32,U32,U32);

void f8(s887retdecInstance*,U32,U32,U32);

void s887retdec____wasm_call_ctors(s887retdecInstance*i);

void s887retdec____wasm_apply_data_relocs(s887retdecInstance*i);

U32 s887retdec_func_1(s887retdecInstance*i);

void s887retdec_call_cb(s887retdecInstance*i,U32 l0);

void s887retdecInstantiate(s887retdecInstance* instance, void* resolve(const char* module, const char* name));

void s887retdecFreeInstance(s887retdecInstance* instance);

#endif /* s887retdec_H */

