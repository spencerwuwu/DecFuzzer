#ifndef s879retdec_H
#define s879retdec_H

#include "w2c2_base.h"

typedef struct s879retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s879retdecInstance;

void f0(s879retdecInstance*);

void f1(s879retdecInstance*);

U32 f2(s879retdecInstance*);

void f3(s879retdecInstance*,U32);

U32 f4(s879retdecInstance*,U32,U32,U32,U32);

void f5(s879retdecInstance*,U32,U32,U32,U32,U32);

void f6(s879retdecInstance*,U32);

void f7(s879retdecInstance*,U32,U32,U32);

void f8(s879retdecInstance*,U32,U32,U32);

void s879retdec____wasm_call_ctors(s879retdecInstance*i);

void s879retdec____wasm_apply_data_relocs(s879retdecInstance*i);

U32 s879retdec_func_1(s879retdecInstance*i);

void s879retdec_call_cb(s879retdecInstance*i,U32 l0);

void s879retdecInstantiate(s879retdecInstance* instance, void* resolve(const char* module, const char* name));

void s879retdecFreeInstance(s879retdecInstance* instance);

#endif /* s879retdec_H */

