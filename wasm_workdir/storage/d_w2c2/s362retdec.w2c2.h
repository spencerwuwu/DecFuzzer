#ifndef s362retdec_H
#define s362retdec_H

#include "w2c2_base.h"

typedef struct s362retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s362retdecInstance;

void f0(s362retdecInstance*);

void f1(s362retdecInstance*);

U32 f2(s362retdecInstance*);

void f3(s362retdecInstance*,U32);

U32 f4(s362retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s362retdecInstance*,U32,U32,U32,U32,U32);

void f6(s362retdecInstance*,U32);

void f7(s362retdecInstance*,U32,U32,U32);

void f8(s362retdecInstance*,U32,U32,U32);

void s362retdec____wasm_call_ctors(s362retdecInstance*i);

void s362retdec____wasm_apply_data_relocs(s362retdecInstance*i);

U32 s362retdec_func_1(s362retdecInstance*i);

void s362retdec_call_cb(s362retdecInstance*i,U32 l0);

void s362retdecInstantiate(s362retdecInstance* instance, void* resolve(const char* module, const char* name));

void s362retdecFreeInstance(s362retdecInstance* instance);

#endif /* s362retdec_H */

