#ifndef s598retdec_H
#define s598retdec_H

#include "w2c2_base.h"

typedef struct s598retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s598retdecInstance;

void f0(s598retdecInstance*);

void f1(s598retdecInstance*);

U32 f2(s598retdecInstance*);

void f3(s598retdecInstance*,U32);

U32 f4(s598retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s598retdecInstance*,U32,U32,U32,U32,U32);

void f6(s598retdecInstance*,U32);

void f7(s598retdecInstance*,U32,U32,U32);

void f8(s598retdecInstance*,U32,U32,U32);

void s598retdec____wasm_call_ctors(s598retdecInstance*i);

void s598retdec____wasm_apply_data_relocs(s598retdecInstance*i);

U32 s598retdec_func_1(s598retdecInstance*i);

void s598retdec_call_cb(s598retdecInstance*i,U32 l0);

void s598retdecInstantiate(s598retdecInstance* instance, void* resolve(const char* module, const char* name));

void s598retdecFreeInstance(s598retdecInstance* instance);

#endif /* s598retdec_H */

