#ifndef s324retdec_H
#define s324retdec_H

#include "w2c2_base.h"

typedef struct s324retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s324retdecInstance;

void f0(s324retdecInstance*);

void f1(s324retdecInstance*);

U32 f2(s324retdecInstance*);

void f3(s324retdecInstance*,U32);

U32 f4(s324retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s324retdecInstance*,U32,U32,U32,U32,U32);

void f6(s324retdecInstance*,U32);

void f7(s324retdecInstance*,U32,U32,U32);

void f8(s324retdecInstance*,U32,U32,U32);

void s324retdec____wasm_call_ctors(s324retdecInstance*i);

void s324retdec____wasm_apply_data_relocs(s324retdecInstance*i);

U32 s324retdec_func_1(s324retdecInstance*i);

void s324retdec_call_cb(s324retdecInstance*i,U32 l0);

void s324retdecInstantiate(s324retdecInstance* instance, void* resolve(const char* module, const char* name));

void s324retdecFreeInstance(s324retdecInstance* instance);

#endif /* s324retdec_H */

