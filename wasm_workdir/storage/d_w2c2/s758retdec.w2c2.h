#ifndef s758retdec_H
#define s758retdec_H

#include "w2c2_base.h"

typedef struct s758retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s758retdecInstance;

void f0(s758retdecInstance*);

void f1(s758retdecInstance*);

U32 f2(s758retdecInstance*);

void f3(s758retdecInstance*,U32);

U32 f4(s758retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s758retdecInstance*,U32,U32,U32,U32,U32);

void f6(s758retdecInstance*,U32);

void f7(s758retdecInstance*,U32,U32,U32);

void f8(s758retdecInstance*,U32,U32,U32);

void s758retdec____wasm_call_ctors(s758retdecInstance*i);

void s758retdec____wasm_apply_data_relocs(s758retdecInstance*i);

U32 s758retdec_func_1(s758retdecInstance*i);

void s758retdec_call_cb(s758retdecInstance*i,U32 l0);

void s758retdecInstantiate(s758retdecInstance* instance, void* resolve(const char* module, const char* name));

void s758retdecFreeInstance(s758retdecInstance* instance);

#endif /* s758retdec_H */

