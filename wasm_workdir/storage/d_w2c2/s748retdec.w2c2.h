#ifndef s748retdec_H
#define s748retdec_H

#include "w2c2_base.h"

typedef struct s748retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s748retdecInstance;

void f0(s748retdecInstance*);

void f1(s748retdecInstance*);

U32 f2(s748retdecInstance*);

void f3(s748retdecInstance*,U32);

U32 f4(s748retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s748retdecInstance*,U32,U32,U32,U32,U32);

void f6(s748retdecInstance*,U32);

void f7(s748retdecInstance*,U32,U32,U32);

void f8(s748retdecInstance*,U32,U32,U32);

void s748retdec____wasm_call_ctors(s748retdecInstance*i);

void s748retdec____wasm_apply_data_relocs(s748retdecInstance*i);

U32 s748retdec_func_1(s748retdecInstance*i);

void s748retdec_call_cb(s748retdecInstance*i,U32 l0);

void s748retdecInstantiate(s748retdecInstance* instance, void* resolve(const char* module, const char* name));

void s748retdecFreeInstance(s748retdecInstance* instance);

#endif /* s748retdec_H */

