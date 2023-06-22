#ifndef s822retdec_H
#define s822retdec_H

#include "w2c2_base.h"

typedef struct s822retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s822retdecInstance;

void f0(s822retdecInstance*);

void f1(s822retdecInstance*);

U32 f2(s822retdecInstance*);

void f3(s822retdecInstance*,U32);

U32 f4(s822retdecInstance*,U32,U32,U32,U32,U32);

void f5(s822retdecInstance*,U32,U32,U32,U32,U32);

void f6(s822retdecInstance*,U32);

void f7(s822retdecInstance*,U32,U32,U32);

void f8(s822retdecInstance*,U32,U32,U32);

void s822retdec____wasm_call_ctors(s822retdecInstance*i);

void s822retdec____wasm_apply_data_relocs(s822retdecInstance*i);

U32 s822retdec_func_1(s822retdecInstance*i);

void s822retdec_call_cb(s822retdecInstance*i,U32 l0);

void s822retdecInstantiate(s822retdecInstance* instance, void* resolve(const char* module, const char* name));

void s822retdecFreeInstance(s822retdecInstance* instance);

#endif /* s822retdec_H */

