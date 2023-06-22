#ifndef s865retdec_H
#define s865retdec_H

#include "w2c2_base.h"

typedef struct s865retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s865retdecInstance;

void f0(s865retdecInstance*);

void f1(s865retdecInstance*);

U32 f2(s865retdecInstance*);

void f3(s865retdecInstance*,U32);

U32 f4(s865retdecInstance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s865retdecInstance*,U32,U32,U32,U32,U32);

void f6(s865retdecInstance*,U32);

void f7(s865retdecInstance*,U32,U32,U32);

void f8(s865retdecInstance*,U32,U32,U32);

void s865retdec____wasm_call_ctors(s865retdecInstance*i);

void s865retdec____wasm_apply_data_relocs(s865retdecInstance*i);

U32 s865retdec_func_1(s865retdecInstance*i);

void s865retdec_call_cb(s865retdecInstance*i,U32 l0);

void s865retdecInstantiate(s865retdecInstance* instance, void* resolve(const char* module, const char* name));

void s865retdecFreeInstance(s865retdecInstance* instance);

#endif /* s865retdec_H */

