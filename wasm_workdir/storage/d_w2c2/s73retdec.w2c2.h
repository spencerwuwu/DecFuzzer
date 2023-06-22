#ifndef s73retdec_H
#define s73retdec_H

#include "w2c2_base.h"

typedef struct s73retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s73retdecInstance;

void f0(s73retdecInstance*);

void f1(s73retdecInstance*);

U32 f2(s73retdecInstance*);

void f3(s73retdecInstance*,U32);

U32 f4(s73retdecInstance*,U32,U32,U32);

void f5(s73retdecInstance*,U32,U32,U32,U32,U32);

void f6(s73retdecInstance*,U32);

void f7(s73retdecInstance*,U32,U32,U32);

void f8(s73retdecInstance*,U32,U32,U32);

void s73retdec____wasm_call_ctors(s73retdecInstance*i);

void s73retdec____wasm_apply_data_relocs(s73retdecInstance*i);

U32 s73retdec_func_1(s73retdecInstance*i);

void s73retdec_call_cb(s73retdecInstance*i,U32 l0);

void s73retdecInstantiate(s73retdecInstance* instance, void* resolve(const char* module, const char* name));

void s73retdecFreeInstance(s73retdecInstance* instance);

#endif /* s73retdec_H */

