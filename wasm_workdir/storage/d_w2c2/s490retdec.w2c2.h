#ifndef s490retdec_H
#define s490retdec_H

#include "w2c2_base.h"

typedef struct s490retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s490retdecInstance;

void f0(s490retdecInstance*);

void f1(s490retdecInstance*);

U32 f2(s490retdecInstance*);

void f3(s490retdecInstance*,U32);

U32 f4(s490retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s490retdecInstance*,U32,U32,U32,U32,U32);

void f6(s490retdecInstance*,U32);

void f7(s490retdecInstance*,U32,U32,U32);

void f8(s490retdecInstance*,U32,U32,U32);

void s490retdec____wasm_call_ctors(s490retdecInstance*i);

void s490retdec____wasm_apply_data_relocs(s490retdecInstance*i);

U32 s490retdec_func_1(s490retdecInstance*i);

void s490retdec_call_cb(s490retdecInstance*i,U32 l0);

void s490retdecInstantiate(s490retdecInstance* instance, void* resolve(const char* module, const char* name));

void s490retdecFreeInstance(s490retdecInstance* instance);

#endif /* s490retdec_H */

