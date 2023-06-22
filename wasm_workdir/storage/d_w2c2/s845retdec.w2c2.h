#ifndef s845retdec_H
#define s845retdec_H

#include "w2c2_base.h"

typedef struct s845retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s845retdecInstance;

void f0(s845retdecInstance*);

void f1(s845retdecInstance*);

U32 f2(s845retdecInstance*);

void f3(s845retdecInstance*,U32);

U32 f4(s845retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s845retdecInstance*,U32,U32,U32,U32,U32);

void f6(s845retdecInstance*,U32);

void f7(s845retdecInstance*,U32,U32,U32);

void f8(s845retdecInstance*,U32,U32,U32);

void s845retdec____wasm_call_ctors(s845retdecInstance*i);

void s845retdec____wasm_apply_data_relocs(s845retdecInstance*i);

U32 s845retdec_func_1(s845retdecInstance*i);

void s845retdec_call_cb(s845retdecInstance*i,U32 l0);

void s845retdecInstantiate(s845retdecInstance* instance, void* resolve(const char* module, const char* name));

void s845retdecFreeInstance(s845retdecInstance* instance);

#endif /* s845retdec_H */

