#ifndef s309retdec_H
#define s309retdec_H

#include "w2c2_base.h"

typedef struct s309retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s309retdecInstance;

void f0(s309retdecInstance*);

void f1(s309retdecInstance*);

U32 f2(s309retdecInstance*);

void f3(s309retdecInstance*,U32);

U32 f4(s309retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s309retdecInstance*,U32,U32,U32,U32,U32);

void f6(s309retdecInstance*,U32);

void f7(s309retdecInstance*,U32,U32,U32);

void f8(s309retdecInstance*,U32,U32,U32);

void s309retdec____wasm_call_ctors(s309retdecInstance*i);

void s309retdec____wasm_apply_data_relocs(s309retdecInstance*i);

U32 s309retdec_func_1(s309retdecInstance*i);

void s309retdec_call_cb(s309retdecInstance*i,U32 l0);

void s309retdecInstantiate(s309retdecInstance* instance, void* resolve(const char* module, const char* name));

void s309retdecFreeInstance(s309retdecInstance* instance);

#endif /* s309retdec_H */

