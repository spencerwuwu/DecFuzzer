#ifndef s303retdec_H
#define s303retdec_H

#include "w2c2_base.h"

typedef struct s303retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s303retdecInstance;

void f0(s303retdecInstance*);

void f1(s303retdecInstance*);

U32 f2(s303retdecInstance*);

void f3(s303retdecInstance*,U32);

U32 f4(s303retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s303retdecInstance*,U32,U32,U32,U32,U32);

void f6(s303retdecInstance*,U32);

void f7(s303retdecInstance*,U32,U32,U32);

void f8(s303retdecInstance*,U32,U32,U32);

void s303retdec____wasm_call_ctors(s303retdecInstance*i);

void s303retdec____wasm_apply_data_relocs(s303retdecInstance*i);

U32 s303retdec_func_1(s303retdecInstance*i);

void s303retdec_call_cb(s303retdecInstance*i,U32 l0);

void s303retdecInstantiate(s303retdecInstance* instance, void* resolve(const char* module, const char* name));

void s303retdecFreeInstance(s303retdecInstance* instance);

#endif /* s303retdec_H */

