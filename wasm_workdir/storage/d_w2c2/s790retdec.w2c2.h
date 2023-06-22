#ifndef s790retdec_H
#define s790retdec_H

#include "w2c2_base.h"

typedef struct s790retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s790retdecInstance;

void f0(s790retdecInstance*);

void f1(s790retdecInstance*);

U32 f2(s790retdecInstance*);

void f3(s790retdecInstance*,U32);

U32 f4(s790retdecInstance*,U32,U32,U32);

void f5(s790retdecInstance*,U32,U32,U32,U32,U32);

void f6(s790retdecInstance*,U32);

void f7(s790retdecInstance*,U32,U32,U32);

void f8(s790retdecInstance*,U32,U32,U32);

void s790retdec____wasm_call_ctors(s790retdecInstance*i);

void s790retdec____wasm_apply_data_relocs(s790retdecInstance*i);

U32 s790retdec_func_1(s790retdecInstance*i);

void s790retdec_call_cb(s790retdecInstance*i,U32 l0);

void s790retdecInstantiate(s790retdecInstance* instance, void* resolve(const char* module, const char* name));

void s790retdecFreeInstance(s790retdecInstance* instance);

#endif /* s790retdec_H */

