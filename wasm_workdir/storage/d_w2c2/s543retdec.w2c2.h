#ifndef s543retdec_H
#define s543retdec_H

#include "w2c2_base.h"

typedef struct s543retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s543retdecInstance;

void f0(s543retdecInstance*);

void f1(s543retdecInstance*);

U32 f2(s543retdecInstance*);

void f3(s543retdecInstance*,U32);

U32 f4(s543retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s543retdecInstance*,U32,U32,U32,U32,U32);

void f6(s543retdecInstance*,U32);

void f7(s543retdecInstance*,U32,U32,U32);

void f8(s543retdecInstance*,U32,U32,U32);

void s543retdec____wasm_call_ctors(s543retdecInstance*i);

void s543retdec____wasm_apply_data_relocs(s543retdecInstance*i);

U32 s543retdec_func_1(s543retdecInstance*i);

void s543retdec_call_cb(s543retdecInstance*i,U32 l0);

void s543retdecInstantiate(s543retdecInstance* instance, void* resolve(const char* module, const char* name));

void s543retdecFreeInstance(s543retdecInstance* instance);

#endif /* s543retdec_H */

