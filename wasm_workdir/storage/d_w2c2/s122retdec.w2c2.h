#ifndef s122retdec_H
#define s122retdec_H

#include "w2c2_base.h"

typedef struct s122retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s122retdecInstance;

void f0(s122retdecInstance*);

void f1(s122retdecInstance*);

U32 f2(s122retdecInstance*);

void f3(s122retdecInstance*,U32);

U32 f4(s122retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s122retdecInstance*,U32,U32,U32,U32,U32);

void f6(s122retdecInstance*,U32);

void f7(s122retdecInstance*,U32,U32,U32);

void f8(s122retdecInstance*,U32,U32,U32);

void s122retdec____wasm_call_ctors(s122retdecInstance*i);

void s122retdec____wasm_apply_data_relocs(s122retdecInstance*i);

U32 s122retdec_func_1(s122retdecInstance*i);

void s122retdec_call_cb(s122retdecInstance*i,U32 l0);

void s122retdecInstantiate(s122retdecInstance* instance, void* resolve(const char* module, const char* name));

void s122retdecFreeInstance(s122retdecInstance* instance);

#endif /* s122retdec_H */

