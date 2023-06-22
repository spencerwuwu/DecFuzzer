#ifndef s275retdec_H
#define s275retdec_H

#include "w2c2_base.h"

typedef struct s275retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s275retdecInstance;

void f0(s275retdecInstance*);

void f1(s275retdecInstance*);

U32 f2(s275retdecInstance*);

void f3(s275retdecInstance*,U32);

U32 f4(s275retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s275retdecInstance*,U32,U32,U32,U32,U32);

void f6(s275retdecInstance*,U32);

void f7(s275retdecInstance*,U32,U32,U32);

void f8(s275retdecInstance*,U32,U32,U32);

void s275retdec____wasm_call_ctors(s275retdecInstance*i);

void s275retdec____wasm_apply_data_relocs(s275retdecInstance*i);

U32 s275retdec_func_1(s275retdecInstance*i);

void s275retdec_call_cb(s275retdecInstance*i,U32 l0);

void s275retdecInstantiate(s275retdecInstance* instance, void* resolve(const char* module, const char* name));

void s275retdecFreeInstance(s275retdecInstance* instance);

#endif /* s275retdec_H */

