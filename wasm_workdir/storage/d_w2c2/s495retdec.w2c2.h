#ifndef s495retdec_H
#define s495retdec_H

#include "w2c2_base.h"

typedef struct s495retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s495retdecInstance;

void f0(s495retdecInstance*);

void f1(s495retdecInstance*);

U32 f2(s495retdecInstance*);

void f3(s495retdecInstance*,U32);

U32 f4(s495retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s495retdecInstance*,U32,U32,U32,U32,U32);

void f6(s495retdecInstance*,U32);

void f7(s495retdecInstance*,U32,U32,U32);

void f8(s495retdecInstance*,U32,U32,U32);

void s495retdec____wasm_call_ctors(s495retdecInstance*i);

void s495retdec____wasm_apply_data_relocs(s495retdecInstance*i);

U32 s495retdec_func_1(s495retdecInstance*i);

void s495retdec_call_cb(s495retdecInstance*i,U32 l0);

void s495retdecInstantiate(s495retdecInstance* instance, void* resolve(const char* module, const char* name));

void s495retdecFreeInstance(s495retdecInstance* instance);

#endif /* s495retdec_H */

