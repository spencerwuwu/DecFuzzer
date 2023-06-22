#ifndef s81retdec_H
#define s81retdec_H

#include "w2c2_base.h"

typedef struct s81retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s81retdecInstance;

void f0(s81retdecInstance*);

void f1(s81retdecInstance*);

U32 f2(s81retdecInstance*);

void f3(s81retdecInstance*,U32);

U32 f4(s81retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s81retdecInstance*,U32,U32,U32,U32,U32);

void f6(s81retdecInstance*,U32);

void f7(s81retdecInstance*,U32,U32,U32);

void f8(s81retdecInstance*,U32,U32,U32);

void s81retdec____wasm_call_ctors(s81retdecInstance*i);

void s81retdec____wasm_apply_data_relocs(s81retdecInstance*i);

U32 s81retdec_func_1(s81retdecInstance*i);

void s81retdec_call_cb(s81retdecInstance*i,U32 l0);

void s81retdecInstantiate(s81retdecInstance* instance, void* resolve(const char* module, const char* name));

void s81retdecFreeInstance(s81retdecInstance* instance);

#endif /* s81retdec_H */

