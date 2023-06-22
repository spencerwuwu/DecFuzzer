#ifndef s638retdec_H
#define s638retdec_H

#include "w2c2_base.h"

typedef struct s638retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s638retdecInstance;

void f0(s638retdecInstance*);

void f1(s638retdecInstance*);

U32 f2(s638retdecInstance*);

void f3(s638retdecInstance*,U32);

U32 f4(s638retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s638retdecInstance*,U32,U32,U32,U32,U32);

void f6(s638retdecInstance*,U32);

void f7(s638retdecInstance*,U32,U32,U32);

void f8(s638retdecInstance*,U32,U32,U32);

void s638retdec____wasm_call_ctors(s638retdecInstance*i);

void s638retdec____wasm_apply_data_relocs(s638retdecInstance*i);

U32 s638retdec_func_1(s638retdecInstance*i);

void s638retdec_call_cb(s638retdecInstance*i,U32 l0);

void s638retdecInstantiate(s638retdecInstance* instance, void* resolve(const char* module, const char* name));

void s638retdecFreeInstance(s638retdecInstance* instance);

#endif /* s638retdec_H */

