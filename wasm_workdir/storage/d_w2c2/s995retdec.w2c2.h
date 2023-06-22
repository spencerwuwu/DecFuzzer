#ifndef s995retdec_H
#define s995retdec_H

#include "w2c2_base.h"

typedef struct s995retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s995retdecInstance;

void f0(s995retdecInstance*);

void f1(s995retdecInstance*);

U32 f2(s995retdecInstance*);

void f3(s995retdecInstance*,U32);

U32 f4(s995retdecInstance*,U32,U32,U32,U32);

void f5(s995retdecInstance*,U32,U32,U32,U32,U32);

void f6(s995retdecInstance*,U32);

void f7(s995retdecInstance*,U32,U32,U32);

void f8(s995retdecInstance*,U32,U32,U32);

void s995retdec____wasm_call_ctors(s995retdecInstance*i);

void s995retdec____wasm_apply_data_relocs(s995retdecInstance*i);

U32 s995retdec_func_1(s995retdecInstance*i);

void s995retdec_call_cb(s995retdecInstance*i,U32 l0);

void s995retdecInstantiate(s995retdecInstance* instance, void* resolve(const char* module, const char* name));

void s995retdecFreeInstance(s995retdecInstance* instance);

#endif /* s995retdec_H */

