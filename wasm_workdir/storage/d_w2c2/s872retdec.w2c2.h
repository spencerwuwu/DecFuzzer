#ifndef s872retdec_H
#define s872retdec_H

#include "w2c2_base.h"

typedef struct s872retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s872retdecInstance;

void f0(s872retdecInstance*);

void f1(s872retdecInstance*);

U32 f2(s872retdecInstance*);

void f3(s872retdecInstance*,U32);

U32 f4(s872retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s872retdecInstance*,U32,U32,U32,U32,U32);

void f6(s872retdecInstance*,U32);

void f7(s872retdecInstance*,U32,U32,U32);

void f8(s872retdecInstance*,U32,U32,U32);

void s872retdec____wasm_call_ctors(s872retdecInstance*i);

void s872retdec____wasm_apply_data_relocs(s872retdecInstance*i);

U32 s872retdec_func_1(s872retdecInstance*i);

void s872retdec_call_cb(s872retdecInstance*i,U32 l0);

void s872retdecInstantiate(s872retdecInstance* instance, void* resolve(const char* module, const char* name));

void s872retdecFreeInstance(s872retdecInstance* instance);

#endif /* s872retdec_H */

