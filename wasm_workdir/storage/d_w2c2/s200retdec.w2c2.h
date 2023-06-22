#ifndef s200retdec_H
#define s200retdec_H

#include "w2c2_base.h"

typedef struct s200retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s200retdecInstance;

void f0(s200retdecInstance*);

void f1(s200retdecInstance*);

U32 f2(s200retdecInstance*);

void f3(s200retdecInstance*,U32);

U32 f4(s200retdecInstance*,U32,U32,U32,U32,U32);

void f5(s200retdecInstance*,U32,U32,U32,U32,U32);

void f6(s200retdecInstance*,U32);

void f7(s200retdecInstance*,U32,U32,U32);

void f8(s200retdecInstance*,U32,U32,U32);

void s200retdec____wasm_call_ctors(s200retdecInstance*i);

void s200retdec____wasm_apply_data_relocs(s200retdecInstance*i);

U32 s200retdec_func_1(s200retdecInstance*i);

void s200retdec_call_cb(s200retdecInstance*i,U32 l0);

void s200retdecInstantiate(s200retdecInstance* instance, void* resolve(const char* module, const char* name));

void s200retdecFreeInstance(s200retdecInstance* instance);

#endif /* s200retdec_H */

