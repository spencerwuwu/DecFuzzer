#ifndef s938retdec_H
#define s938retdec_H

#include "w2c2_base.h"

typedef struct s938retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s938retdecInstance;

void f0(s938retdecInstance*);

void f1(s938retdecInstance*);

U32 f2(s938retdecInstance*);

void f3(s938retdecInstance*,U32);

U32 f4(s938retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s938retdecInstance*,U32,U32,U32,U32,U32);

void f6(s938retdecInstance*,U32);

void f7(s938retdecInstance*,U32,U32,U32);

void f8(s938retdecInstance*,U32,U32,U32);

void s938retdec____wasm_call_ctors(s938retdecInstance*i);

void s938retdec____wasm_apply_data_relocs(s938retdecInstance*i);

U32 s938retdec_func_1(s938retdecInstance*i);

void s938retdec_call_cb(s938retdecInstance*i,U32 l0);

void s938retdecInstantiate(s938retdecInstance* instance, void* resolve(const char* module, const char* name));

void s938retdecFreeInstance(s938retdecInstance* instance);

#endif /* s938retdec_H */

