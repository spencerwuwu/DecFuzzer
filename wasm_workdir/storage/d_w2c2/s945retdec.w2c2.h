#ifndef s945retdec_H
#define s945retdec_H

#include "w2c2_base.h"

typedef struct s945retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s945retdecInstance;

void f0(s945retdecInstance*);

void f1(s945retdecInstance*);

U32 f2(s945retdecInstance*);

void f3(s945retdecInstance*,U32);

U32 f4(s945retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s945retdecInstance*,U32,U32,U32,U32,U32);

void f6(s945retdecInstance*,U32);

void f7(s945retdecInstance*,U32,U32,U32);

void f8(s945retdecInstance*,U32,U32,U32);

void s945retdec____wasm_call_ctors(s945retdecInstance*i);

void s945retdec____wasm_apply_data_relocs(s945retdecInstance*i);

U32 s945retdec_func_1(s945retdecInstance*i);

void s945retdec_call_cb(s945retdecInstance*i,U32 l0);

void s945retdecInstantiate(s945retdecInstance* instance, void* resolve(const char* module, const char* name));

void s945retdecFreeInstance(s945retdecInstance* instance);

#endif /* s945retdec_H */

