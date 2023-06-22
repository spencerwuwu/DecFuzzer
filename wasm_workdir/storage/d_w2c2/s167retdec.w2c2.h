#ifndef s167retdec_H
#define s167retdec_H

#include "w2c2_base.h"

typedef struct s167retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s167retdecInstance;

void f0(s167retdecInstance*);

void f1(s167retdecInstance*);

U32 f2(s167retdecInstance*);

void f3(s167retdecInstance*,U32);

U32 f4(s167retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s167retdecInstance*,U32,U32,U32,U32,U32);

void f6(s167retdecInstance*,U32);

void f7(s167retdecInstance*,U32,U32,U32);

void f8(s167retdecInstance*,U32,U32,U32);

void s167retdec____wasm_call_ctors(s167retdecInstance*i);

void s167retdec____wasm_apply_data_relocs(s167retdecInstance*i);

U32 s167retdec_func_1(s167retdecInstance*i);

void s167retdec_call_cb(s167retdecInstance*i,U32 l0);

void s167retdecInstantiate(s167retdecInstance* instance, void* resolve(const char* module, const char* name));

void s167retdecFreeInstance(s167retdecInstance* instance);

#endif /* s167retdec_H */

