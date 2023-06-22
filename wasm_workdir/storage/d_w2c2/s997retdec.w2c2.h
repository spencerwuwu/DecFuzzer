#ifndef s997retdec_H
#define s997retdec_H

#include "w2c2_base.h"

typedef struct s997retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s997retdecInstance;

void f0(s997retdecInstance*);

void f1(s997retdecInstance*);

U32 f2(s997retdecInstance*);

void f3(s997retdecInstance*,U32);

U32 f4(s997retdecInstance*,U32,U32,U32);

void f5(s997retdecInstance*,U32,U32,U32,U32,U32);

void f6(s997retdecInstance*,U32);

void f7(s997retdecInstance*,U32,U32,U32);

void f8(s997retdecInstance*,U32,U32,U32);

void s997retdec____wasm_call_ctors(s997retdecInstance*i);

void s997retdec____wasm_apply_data_relocs(s997retdecInstance*i);

U32 s997retdec_func_1(s997retdecInstance*i);

void s997retdec_call_cb(s997retdecInstance*i,U32 l0);

void s997retdecInstantiate(s997retdecInstance* instance, void* resolve(const char* module, const char* name));

void s997retdecFreeInstance(s997retdecInstance* instance);

#endif /* s997retdec_H */

