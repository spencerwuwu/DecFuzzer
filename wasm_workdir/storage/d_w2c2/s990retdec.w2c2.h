#ifndef s990retdec_H
#define s990retdec_H

#include "w2c2_base.h"

typedef struct s990retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s990retdecInstance;

void f0(s990retdecInstance*);

void f1(s990retdecInstance*);

U32 f2(s990retdecInstance*);

void f3(s990retdecInstance*,U32);

U32 f4(s990retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s990retdecInstance*,U32,U32,U32,U32,U32);

void f6(s990retdecInstance*,U32);

void f7(s990retdecInstance*,U32,U32,U32);

void f8(s990retdecInstance*,U32,U32,U32);

void s990retdec____wasm_call_ctors(s990retdecInstance*i);

void s990retdec____wasm_apply_data_relocs(s990retdecInstance*i);

U32 s990retdec_func_1(s990retdecInstance*i);

void s990retdec_call_cb(s990retdecInstance*i,U32 l0);

void s990retdecInstantiate(s990retdecInstance* instance, void* resolve(const char* module, const char* name));

void s990retdecFreeInstance(s990retdecInstance* instance);

#endif /* s990retdec_H */

