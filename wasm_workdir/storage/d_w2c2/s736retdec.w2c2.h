#ifndef s736retdec_H
#define s736retdec_H

#include "w2c2_base.h"

typedef struct s736retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s736retdecInstance;

void f0(s736retdecInstance*);

void f1(s736retdecInstance*);

U32 f2(s736retdecInstance*);

void f3(s736retdecInstance*,U32);

U32 f4(s736retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s736retdecInstance*,U32,U32,U32,U32,U32);

void f6(s736retdecInstance*,U32);

void f7(s736retdecInstance*,U32,U32,U32);

void f8(s736retdecInstance*,U32,U32,U32);

void s736retdec____wasm_call_ctors(s736retdecInstance*i);

void s736retdec____wasm_apply_data_relocs(s736retdecInstance*i);

U32 s736retdec_func_1(s736retdecInstance*i);

void s736retdec_call_cb(s736retdecInstance*i,U32 l0);

void s736retdecInstantiate(s736retdecInstance* instance, void* resolve(const char* module, const char* name));

void s736retdecFreeInstance(s736retdecInstance* instance);

#endif /* s736retdec_H */

