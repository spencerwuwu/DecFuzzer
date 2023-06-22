#ifndef s317retdec_H
#define s317retdec_H

#include "w2c2_base.h"

typedef struct s317retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s317retdecInstance;

void f0(s317retdecInstance*);

void f1(s317retdecInstance*);

U32 f2(s317retdecInstance*);

void f3(s317retdecInstance*,U32);

U32 f4(s317retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s317retdecInstance*,U32,U32,U32,U32,U32);

void f6(s317retdecInstance*,U32);

void f7(s317retdecInstance*,U32,U32,U32);

void f8(s317retdecInstance*,U32,U32,U32);

void s317retdec____wasm_call_ctors(s317retdecInstance*i);

void s317retdec____wasm_apply_data_relocs(s317retdecInstance*i);

U32 s317retdec_func_1(s317retdecInstance*i);

void s317retdec_call_cb(s317retdecInstance*i,U32 l0);

void s317retdecInstantiate(s317retdecInstance* instance, void* resolve(const char* module, const char* name));

void s317retdecFreeInstance(s317retdecInstance* instance);

#endif /* s317retdec_H */

