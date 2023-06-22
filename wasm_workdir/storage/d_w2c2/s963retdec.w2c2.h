#ifndef s963retdec_H
#define s963retdec_H

#include "w2c2_base.h"

typedef struct s963retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s963retdecInstance;

void f0(s963retdecInstance*);

void f1(s963retdecInstance*);

U32 f2(s963retdecInstance*);

void f3(s963retdecInstance*,U32);

U32 f4(s963retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s963retdecInstance*,U32,U32,U32,U32,U32);

void f6(s963retdecInstance*,U32);

void f7(s963retdecInstance*,U32,U32,U32);

void f8(s963retdecInstance*,U32,U32,U32);

void s963retdec____wasm_call_ctors(s963retdecInstance*i);

void s963retdec____wasm_apply_data_relocs(s963retdecInstance*i);

U32 s963retdec_func_1(s963retdecInstance*i);

void s963retdec_call_cb(s963retdecInstance*i,U32 l0);

void s963retdecInstantiate(s963retdecInstance* instance, void* resolve(const char* module, const char* name));

void s963retdecFreeInstance(s963retdecInstance* instance);

#endif /* s963retdec_H */

