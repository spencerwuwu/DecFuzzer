#ifndef s591retdec_H
#define s591retdec_H

#include "w2c2_base.h"

typedef struct s591retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s591retdecInstance;

void f0(s591retdecInstance*);

void f1(s591retdecInstance*);

U32 f2(s591retdecInstance*);

void f3(s591retdecInstance*,U32);

U32 f4(s591retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s591retdecInstance*,U32,U32,U32,U32,U32);

void f6(s591retdecInstance*,U32);

void f7(s591retdecInstance*,U32,U32,U32);

void f8(s591retdecInstance*,U32,U32,U32);

void s591retdec____wasm_call_ctors(s591retdecInstance*i);

void s591retdec____wasm_apply_data_relocs(s591retdecInstance*i);

U32 s591retdec_func_1(s591retdecInstance*i);

void s591retdec_call_cb(s591retdecInstance*i,U32 l0);

void s591retdecInstantiate(s591retdecInstance* instance, void* resolve(const char* module, const char* name));

void s591retdecFreeInstance(s591retdecInstance* instance);

#endif /* s591retdec_H */

