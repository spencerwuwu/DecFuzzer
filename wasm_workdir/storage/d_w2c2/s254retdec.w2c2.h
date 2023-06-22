#ifndef s254retdec_H
#define s254retdec_H

#include "w2c2_base.h"

typedef struct s254retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s254retdecInstance;

void f0(s254retdecInstance*);

void f1(s254retdecInstance*);

U32 f2(s254retdecInstance*);

void f3(s254retdecInstance*,U32);

U32 f4(s254retdecInstance*,U32,U32,U32,U32,U32);

void f5(s254retdecInstance*,U32,U32,U32,U32,U32);

void f6(s254retdecInstance*,U32);

void f7(s254retdecInstance*,U32,U32,U32);

void f8(s254retdecInstance*,U32,U32,U32);

void s254retdec____wasm_call_ctors(s254retdecInstance*i);

void s254retdec____wasm_apply_data_relocs(s254retdecInstance*i);

U32 s254retdec_func_1(s254retdecInstance*i);

void s254retdec_call_cb(s254retdecInstance*i,U32 l0);

void s254retdecInstantiate(s254retdecInstance* instance, void* resolve(const char* module, const char* name));

void s254retdecFreeInstance(s254retdecInstance* instance);

#endif /* s254retdec_H */

