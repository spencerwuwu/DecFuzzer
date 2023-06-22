#ifndef s463retdec_H
#define s463retdec_H

#include "w2c2_base.h"

typedef struct s463retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s463retdecInstance;

void f0(s463retdecInstance*);

void f1(s463retdecInstance*);

U32 f2(s463retdecInstance*);

void f3(s463retdecInstance*,U32);

U32 f4(s463retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s463retdecInstance*,U32,U32,U32,U32,U32);

void f6(s463retdecInstance*,U32);

void f7(s463retdecInstance*,U32,U32,U32);

void f8(s463retdecInstance*,U32,U32,U32);

void s463retdec____wasm_call_ctors(s463retdecInstance*i);

void s463retdec____wasm_apply_data_relocs(s463retdecInstance*i);

U32 s463retdec_func_1(s463retdecInstance*i);

void s463retdec_call_cb(s463retdecInstance*i,U32 l0);

void s463retdecInstantiate(s463retdecInstance* instance, void* resolve(const char* module, const char* name));

void s463retdecFreeInstance(s463retdecInstance* instance);

#endif /* s463retdec_H */

