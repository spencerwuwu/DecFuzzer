#ifndef s389retdec_H
#define s389retdec_H

#include "w2c2_base.h"

typedef struct s389retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s389retdecInstance;

void f0(s389retdecInstance*);

void f1(s389retdecInstance*);

U32 f2(s389retdecInstance*);

void f3(s389retdecInstance*,U32);

U32 f4(s389retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s389retdecInstance*,U32,U32,U32,U32,U32);

void f6(s389retdecInstance*,U32);

void f7(s389retdecInstance*,U32,U32,U32);

void f8(s389retdecInstance*,U32,U32,U32);

void s389retdec____wasm_call_ctors(s389retdecInstance*i);

void s389retdec____wasm_apply_data_relocs(s389retdecInstance*i);

U32 s389retdec_func_1(s389retdecInstance*i);

void s389retdec_call_cb(s389retdecInstance*i,U32 l0);

void s389retdecInstantiate(s389retdecInstance* instance, void* resolve(const char* module, const char* name));

void s389retdecFreeInstance(s389retdecInstance* instance);

#endif /* s389retdec_H */

