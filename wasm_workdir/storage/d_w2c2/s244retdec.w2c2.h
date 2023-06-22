#ifndef s244retdec_H
#define s244retdec_H

#include "w2c2_base.h"

typedef struct s244retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s244retdecInstance;

void f0(s244retdecInstance*);

void f1(s244retdecInstance*);

U32 f2(s244retdecInstance*);

void f3(s244retdecInstance*,U32);

U32 f4(s244retdecInstance*,U32,U32,U32,U32,U32);

void f5(s244retdecInstance*,U32,U32,U32,U32,U32);

void f6(s244retdecInstance*,U32);

void f7(s244retdecInstance*,U32,U32,U32);

void f8(s244retdecInstance*,U32,U32,U32);

void s244retdec____wasm_call_ctors(s244retdecInstance*i);

void s244retdec____wasm_apply_data_relocs(s244retdecInstance*i);

U32 s244retdec_func_1(s244retdecInstance*i);

void s244retdec_call_cb(s244retdecInstance*i,U32 l0);

void s244retdecInstantiate(s244retdecInstance* instance, void* resolve(const char* module, const char* name));

void s244retdecFreeInstance(s244retdecInstance* instance);

#endif /* s244retdec_H */

