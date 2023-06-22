#ifndef s893retdec_H
#define s893retdec_H

#include "w2c2_base.h"

typedef struct s893retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s893retdecInstance;

void f0(s893retdecInstance*);

void f1(s893retdecInstance*);

U32 f2(s893retdecInstance*);

void f3(s893retdecInstance*,U32);

U32 f4(s893retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s893retdecInstance*,U32,U32,U32,U32,U32);

void f6(s893retdecInstance*,U32);

void f7(s893retdecInstance*,U32,U32,U32);

void f8(s893retdecInstance*,U32,U32,U32);

void s893retdec____wasm_call_ctors(s893retdecInstance*i);

void s893retdec____wasm_apply_data_relocs(s893retdecInstance*i);

U32 s893retdec_func_1(s893retdecInstance*i);

void s893retdec_call_cb(s893retdecInstance*i,U32 l0);

void s893retdecInstantiate(s893retdecInstance* instance, void* resolve(const char* module, const char* name));

void s893retdecFreeInstance(s893retdecInstance* instance);

#endif /* s893retdec_H */

