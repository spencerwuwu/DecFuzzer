#ifndef s475retdec_H
#define s475retdec_H

#include "w2c2_base.h"

typedef struct s475retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s475retdecInstance;

void f0(s475retdecInstance*);

void f1(s475retdecInstance*);

U32 f2(s475retdecInstance*);

void f3(s475retdecInstance*,U32);

U32 f4(s475retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s475retdecInstance*,U32,U32,U32,U32,U32);

void f6(s475retdecInstance*,U32);

void f7(s475retdecInstance*,U32,U32,U32);

void f8(s475retdecInstance*,U32,U32,U32);

void s475retdec____wasm_call_ctors(s475retdecInstance*i);

void s475retdec____wasm_apply_data_relocs(s475retdecInstance*i);

U32 s475retdec_func_1(s475retdecInstance*i);

void s475retdec_call_cb(s475retdecInstance*i,U32 l0);

void s475retdecInstantiate(s475retdecInstance* instance, void* resolve(const char* module, const char* name));

void s475retdecFreeInstance(s475retdecInstance* instance);

#endif /* s475retdec_H */

