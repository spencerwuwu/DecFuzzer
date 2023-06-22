#ifndef s296retdec_H
#define s296retdec_H

#include "w2c2_base.h"

typedef struct s296retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s296retdecInstance;

void f0(s296retdecInstance*);

void f1(s296retdecInstance*);

U32 f2(s296retdecInstance*);

void f3(s296retdecInstance*,U32);

U32 f4(s296retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s296retdecInstance*,U32,U32,U32,U32,U32);

void f6(s296retdecInstance*,U32);

void f7(s296retdecInstance*,U32,U32,U32);

void f8(s296retdecInstance*,U32,U32,U32);

void s296retdec____wasm_call_ctors(s296retdecInstance*i);

void s296retdec____wasm_apply_data_relocs(s296retdecInstance*i);

U32 s296retdec_func_1(s296retdecInstance*i);

void s296retdec_call_cb(s296retdecInstance*i,U32 l0);

void s296retdecInstantiate(s296retdecInstance* instance, void* resolve(const char* module, const char* name));

void s296retdecFreeInstance(s296retdecInstance* instance);

#endif /* s296retdec_H */

