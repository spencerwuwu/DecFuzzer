#ifndef s402retdec_H
#define s402retdec_H

#include "w2c2_base.h"

typedef struct s402retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s402retdecInstance;

void f0(s402retdecInstance*);

void f1(s402retdecInstance*);

U32 f2(s402retdecInstance*);

void f3(s402retdecInstance*,U32);

U32 f4(s402retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s402retdecInstance*,U32,U32,U32,U32,U32);

void f6(s402retdecInstance*,U32);

void f7(s402retdecInstance*,U32,U32,U32);

void f8(s402retdecInstance*,U32,U32,U32);

void s402retdec____wasm_call_ctors(s402retdecInstance*i);

void s402retdec____wasm_apply_data_relocs(s402retdecInstance*i);

U32 s402retdec_func_1(s402retdecInstance*i);

void s402retdec_call_cb(s402retdecInstance*i,U32 l0);

void s402retdecInstantiate(s402retdecInstance* instance, void* resolve(const char* module, const char* name));

void s402retdecFreeInstance(s402retdecInstance* instance);

#endif /* s402retdec_H */

