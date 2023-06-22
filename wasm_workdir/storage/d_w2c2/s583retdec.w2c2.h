#ifndef s583retdec_H
#define s583retdec_H

#include "w2c2_base.h"

typedef struct s583retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s583retdecInstance;

void f0(s583retdecInstance*);

void f1(s583retdecInstance*);

U32 f2(s583retdecInstance*);

void f3(s583retdecInstance*,U32);

U32 f4(s583retdecInstance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s583retdecInstance*,U32,U32,U32,U32,U32);

void f6(s583retdecInstance*,U32);

void f7(s583retdecInstance*,U32,U32,U32);

void f8(s583retdecInstance*,U32,U32,U32);

void s583retdec____wasm_call_ctors(s583retdecInstance*i);

void s583retdec____wasm_apply_data_relocs(s583retdecInstance*i);

U32 s583retdec_func_1(s583retdecInstance*i);

void s583retdec_call_cb(s583retdecInstance*i,U32 l0);

void s583retdecInstantiate(s583retdecInstance* instance, void* resolve(const char* module, const char* name));

void s583retdecFreeInstance(s583retdecInstance* instance);

#endif /* s583retdec_H */

