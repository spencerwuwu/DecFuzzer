#ifndef s834retdec_H
#define s834retdec_H

#include "w2c2_base.h"

typedef struct s834retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s834retdecInstance;

void f0(s834retdecInstance*);

void f1(s834retdecInstance*);

U32 f2(s834retdecInstance*);

void f3(s834retdecInstance*,U32);

U32 f4(s834retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s834retdecInstance*,U32,U32,U32,U32,U32);

void f6(s834retdecInstance*,U32);

void f7(s834retdecInstance*,U32,U32,U32);

void f8(s834retdecInstance*,U32,U32,U32);

void s834retdec____wasm_call_ctors(s834retdecInstance*i);

void s834retdec____wasm_apply_data_relocs(s834retdecInstance*i);

U32 s834retdec_func_1(s834retdecInstance*i);

void s834retdec_call_cb(s834retdecInstance*i,U32 l0);

void s834retdecInstantiate(s834retdecInstance* instance, void* resolve(const char* module, const char* name));

void s834retdecFreeInstance(s834retdecInstance* instance);

#endif /* s834retdec_H */

