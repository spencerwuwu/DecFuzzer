#ifndef s989retdec_H
#define s989retdec_H

#include "w2c2_base.h"

typedef struct s989retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s989retdecInstance;

void f0(s989retdecInstance*);

void f1(s989retdecInstance*);

U32 f2(s989retdecInstance*);

void f3(s989retdecInstance*,U32);

U32 f4(s989retdecInstance*,U32,U32,U32);

void f5(s989retdecInstance*,U32,U32,U32,U32,U32);

void f6(s989retdecInstance*,U32);

void f7(s989retdecInstance*,U32,U32,U32);

void f8(s989retdecInstance*,U32,U32,U32);

void s989retdec____wasm_call_ctors(s989retdecInstance*i);

void s989retdec____wasm_apply_data_relocs(s989retdecInstance*i);

U32 s989retdec_func_1(s989retdecInstance*i);

void s989retdec_call_cb(s989retdecInstance*i,U32 l0);

void s989retdecInstantiate(s989retdecInstance* instance, void* resolve(const char* module, const char* name));

void s989retdecFreeInstance(s989retdecInstance* instance);

#endif /* s989retdec_H */

