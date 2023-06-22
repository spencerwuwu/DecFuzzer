#ifndef s593retdec_H
#define s593retdec_H

#include "w2c2_base.h"

typedef struct s593retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s593retdecInstance;

void f0(s593retdecInstance*);

void f1(s593retdecInstance*);

U32 f2(s593retdecInstance*);

void f3(s593retdecInstance*,U32);

U32 f4(s593retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s593retdecInstance*,U32,U32,U32,U32,U32);

void f6(s593retdecInstance*,U32);

void f7(s593retdecInstance*,U32,U32,U32);

void f8(s593retdecInstance*,U32,U32,U32);

void s593retdec____wasm_call_ctors(s593retdecInstance*i);

void s593retdec____wasm_apply_data_relocs(s593retdecInstance*i);

U32 s593retdec_func_1(s593retdecInstance*i);

void s593retdec_call_cb(s593retdecInstance*i,U32 l0);

void s593retdecInstantiate(s593retdecInstance* instance, void* resolve(const char* module, const char* name));

void s593retdecFreeInstance(s593retdecInstance* instance);

#endif /* s593retdec_H */

