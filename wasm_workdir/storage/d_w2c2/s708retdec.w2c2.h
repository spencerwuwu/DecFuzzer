#ifndef s708retdec_H
#define s708retdec_H

#include "w2c2_base.h"

typedef struct s708retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s708retdecInstance;

void f0(s708retdecInstance*);

void f1(s708retdecInstance*);

U32 f2(s708retdecInstance*);

void f3(s708retdecInstance*,U32);

U32 f4(s708retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s708retdecInstance*,U32,U32,U32,U32,U32);

void f6(s708retdecInstance*,U32);

void f7(s708retdecInstance*,U32,U32,U32);

void f8(s708retdecInstance*,U32,U32,U32);

void s708retdec____wasm_call_ctors(s708retdecInstance*i);

void s708retdec____wasm_apply_data_relocs(s708retdecInstance*i);

U32 s708retdec_func_1(s708retdecInstance*i);

void s708retdec_call_cb(s708retdecInstance*i,U32 l0);

void s708retdecInstantiate(s708retdecInstance* instance, void* resolve(const char* module, const char* name));

void s708retdecFreeInstance(s708retdecInstance* instance);

#endif /* s708retdec_H */

