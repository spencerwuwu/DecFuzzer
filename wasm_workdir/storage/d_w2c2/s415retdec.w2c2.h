#ifndef s415retdec_H
#define s415retdec_H

#include "w2c2_base.h"

typedef struct s415retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s415retdecInstance;

void f0(s415retdecInstance*);

void f1(s415retdecInstance*);

U32 f2(s415retdecInstance*);

void f3(s415retdecInstance*,U32);

U32 f4(s415retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s415retdecInstance*,U32,U32,U32,U32,U32);

void f6(s415retdecInstance*,U32);

void f7(s415retdecInstance*,U32,U32,U32);

void f8(s415retdecInstance*,U32,U32,U32);

void s415retdec____wasm_call_ctors(s415retdecInstance*i);

void s415retdec____wasm_apply_data_relocs(s415retdecInstance*i);

U32 s415retdec_func_1(s415retdecInstance*i);

void s415retdec_call_cb(s415retdecInstance*i,U32 l0);

void s415retdecInstantiate(s415retdecInstance* instance, void* resolve(const char* module, const char* name));

void s415retdecFreeInstance(s415retdecInstance* instance);

#endif /* s415retdec_H */

