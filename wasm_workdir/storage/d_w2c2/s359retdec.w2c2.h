#ifndef s359retdec_H
#define s359retdec_H

#include "w2c2_base.h"

typedef struct s359retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s359retdecInstance;

void f0(s359retdecInstance*);

void f1(s359retdecInstance*);

U32 f2(s359retdecInstance*);

void f3(s359retdecInstance*,U32);

U32 f4(s359retdecInstance*,U32,U32,U32,U32);

void f5(s359retdecInstance*,U32,U32,U32,U32,U32);

void f6(s359retdecInstance*,U32);

void f7(s359retdecInstance*,U32,U32,U32);

void f8(s359retdecInstance*,U32,U32,U32);

void s359retdec____wasm_call_ctors(s359retdecInstance*i);

void s359retdec____wasm_apply_data_relocs(s359retdecInstance*i);

U32 s359retdec_func_1(s359retdecInstance*i);

void s359retdec_call_cb(s359retdecInstance*i,U32 l0);

void s359retdecInstantiate(s359retdecInstance* instance, void* resolve(const char* module, const char* name));

void s359retdecFreeInstance(s359retdecInstance* instance);

#endif /* s359retdec_H */

