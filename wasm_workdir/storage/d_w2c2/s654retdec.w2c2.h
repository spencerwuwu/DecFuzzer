#ifndef s654retdec_H
#define s654retdec_H

#include "w2c2_base.h"

typedef struct s654retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s654retdecInstance;

void f0(s654retdecInstance*);

void f1(s654retdecInstance*);

U32 f2(s654retdecInstance*);

void f3(s654retdecInstance*,U32);

U32 f4(s654retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s654retdecInstance*,U32,U32,U32,U32,U32);

void f6(s654retdecInstance*,U32);

void f7(s654retdecInstance*,U32,U32,U32);

void f8(s654retdecInstance*,U32,U32,U32);

void s654retdec____wasm_call_ctors(s654retdecInstance*i);

void s654retdec____wasm_apply_data_relocs(s654retdecInstance*i);

U32 s654retdec_func_1(s654retdecInstance*i);

void s654retdec_call_cb(s654retdecInstance*i,U32 l0);

void s654retdecInstantiate(s654retdecInstance* instance, void* resolve(const char* module, const char* name));

void s654retdecFreeInstance(s654retdecInstance* instance);

#endif /* s654retdec_H */

