#ifndef s707retdec_H
#define s707retdec_H

#include "w2c2_base.h"

typedef struct s707retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s707retdecInstance;

void f0(s707retdecInstance*);

void f1(s707retdecInstance*);

U32 f2(s707retdecInstance*);

void f3(s707retdecInstance*,U32);

U32 f4(s707retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s707retdecInstance*,U32,U32,U32,U32,U32);

void f6(s707retdecInstance*,U32);

void f7(s707retdecInstance*,U32,U32,U32);

void f8(s707retdecInstance*,U32,U32,U32);

void s707retdec____wasm_call_ctors(s707retdecInstance*i);

void s707retdec____wasm_apply_data_relocs(s707retdecInstance*i);

U32 s707retdec_func_1(s707retdecInstance*i);

void s707retdec_call_cb(s707retdecInstance*i,U32 l0);

void s707retdecInstantiate(s707retdecInstance* instance, void* resolve(const char* module, const char* name));

void s707retdecFreeInstance(s707retdecInstance* instance);

#endif /* s707retdec_H */

