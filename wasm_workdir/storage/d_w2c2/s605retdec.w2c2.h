#ifndef s605retdec_H
#define s605retdec_H

#include "w2c2_base.h"

typedef struct s605retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s605retdecInstance;

void f0(s605retdecInstance*);

void f1(s605retdecInstance*);

U32 f2(s605retdecInstance*);

void f3(s605retdecInstance*,U32);

U32 f4(s605retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s605retdecInstance*,U32,U32,U32,U32,U32);

void f6(s605retdecInstance*,U32);

void f7(s605retdecInstance*,U32,U32,U32);

void f8(s605retdecInstance*,U32,U32,U32);

void s605retdec____wasm_call_ctors(s605retdecInstance*i);

void s605retdec____wasm_apply_data_relocs(s605retdecInstance*i);

U32 s605retdec_func_1(s605retdecInstance*i);

void s605retdec_call_cb(s605retdecInstance*i,U32 l0);

void s605retdecInstantiate(s605retdecInstance* instance, void* resolve(const char* module, const char* name));

void s605retdecFreeInstance(s605retdecInstance* instance);

#endif /* s605retdec_H */

