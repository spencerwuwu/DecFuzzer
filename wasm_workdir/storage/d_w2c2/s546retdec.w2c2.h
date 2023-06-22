#ifndef s546retdec_H
#define s546retdec_H

#include "w2c2_base.h"

typedef struct s546retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s546retdecInstance;

void f0(s546retdecInstance*);

void f1(s546retdecInstance*);

U32 f2(s546retdecInstance*);

void f3(s546retdecInstance*,U32);

U32 f4(s546retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s546retdecInstance*,U32,U32,U32,U32,U32);

void f6(s546retdecInstance*,U32);

void f7(s546retdecInstance*,U32,U32,U32);

void f8(s546retdecInstance*,U32,U32,U32);

void s546retdec____wasm_call_ctors(s546retdecInstance*i);

void s546retdec____wasm_apply_data_relocs(s546retdecInstance*i);

U32 s546retdec_func_1(s546retdecInstance*i);

void s546retdec_call_cb(s546retdecInstance*i,U32 l0);

void s546retdecInstantiate(s546retdecInstance* instance, void* resolve(const char* module, const char* name));

void s546retdecFreeInstance(s546retdecInstance* instance);

#endif /* s546retdec_H */

