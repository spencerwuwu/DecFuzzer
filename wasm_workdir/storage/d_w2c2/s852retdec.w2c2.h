#ifndef s852retdec_H
#define s852retdec_H

#include "w2c2_base.h"

typedef struct s852retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s852retdecInstance;

void f0(s852retdecInstance*);

void f1(s852retdecInstance*);

U32 f2(s852retdecInstance*);

void f3(s852retdecInstance*,U32);

U32 f4(s852retdecInstance*,U32,U32,U32,U32,U32);

void f5(s852retdecInstance*,U32,U32,U32,U32,U32);

void f6(s852retdecInstance*,U32);

void f7(s852retdecInstance*,U32,U32,U32);

void f8(s852retdecInstance*,U32,U32,U32);

void s852retdec____wasm_call_ctors(s852retdecInstance*i);

void s852retdec____wasm_apply_data_relocs(s852retdecInstance*i);

U32 s852retdec_func_1(s852retdecInstance*i);

void s852retdec_call_cb(s852retdecInstance*i,U32 l0);

void s852retdecInstantiate(s852retdecInstance* instance, void* resolve(const char* module, const char* name));

void s852retdecFreeInstance(s852retdecInstance* instance);

#endif /* s852retdec_H */

