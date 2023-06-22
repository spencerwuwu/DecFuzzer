#ifndef s936retdec_H
#define s936retdec_H

#include "w2c2_base.h"

typedef struct s936retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s936retdecInstance;

void f0(s936retdecInstance*);

void f1(s936retdecInstance*);

U32 f2(s936retdecInstance*);

void f3(s936retdecInstance*,U32);

U32 f4(s936retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s936retdecInstance*,U32,U32,U32,U32,U32);

void f6(s936retdecInstance*,U32);

void f7(s936retdecInstance*,U32,U32,U32);

void f8(s936retdecInstance*,U32,U32,U32);

void s936retdec____wasm_call_ctors(s936retdecInstance*i);

void s936retdec____wasm_apply_data_relocs(s936retdecInstance*i);

U32 s936retdec_func_1(s936retdecInstance*i);

void s936retdec_call_cb(s936retdecInstance*i,U32 l0);

void s936retdecInstantiate(s936retdecInstance* instance, void* resolve(const char* module, const char* name));

void s936retdecFreeInstance(s936retdecInstance* instance);

#endif /* s936retdec_H */

