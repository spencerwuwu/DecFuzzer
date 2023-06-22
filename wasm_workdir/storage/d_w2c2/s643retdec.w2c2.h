#ifndef s643retdec_H
#define s643retdec_H

#include "w2c2_base.h"

typedef struct s643retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s643retdecInstance;

void f0(s643retdecInstance*);

void f1(s643retdecInstance*);

U32 f2(s643retdecInstance*);

void f3(s643retdecInstance*,U32);

U32 f4(s643retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s643retdecInstance*,U32,U32,U32,U32,U32);

void f6(s643retdecInstance*,U32);

void f7(s643retdecInstance*,U32,U32,U32);

void f8(s643retdecInstance*,U32,U32,U32);

void s643retdec____wasm_call_ctors(s643retdecInstance*i);

void s643retdec____wasm_apply_data_relocs(s643retdecInstance*i);

U32 s643retdec_func_1(s643retdecInstance*i);

void s643retdec_call_cb(s643retdecInstance*i,U32 l0);

void s643retdecInstantiate(s643retdecInstance* instance, void* resolve(const char* module, const char* name));

void s643retdecFreeInstance(s643retdecInstance* instance);

#endif /* s643retdec_H */

