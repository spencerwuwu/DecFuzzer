#ifndef s106retdec_H
#define s106retdec_H

#include "w2c2_base.h"

typedef struct s106retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s106retdecInstance;

void f0(s106retdecInstance*);

void f1(s106retdecInstance*);

U32 f2(s106retdecInstance*);

void f3(s106retdecInstance*,U32);

U32 f4(s106retdecInstance*,U32,U32,U32,U32,U32);

void f5(s106retdecInstance*,U32,U32,U32,U32,U32);

void f6(s106retdecInstance*,U32);

void f7(s106retdecInstance*,U32,U32,U32);

void f8(s106retdecInstance*,U32,U32,U32);

void s106retdec____wasm_call_ctors(s106retdecInstance*i);

void s106retdec____wasm_apply_data_relocs(s106retdecInstance*i);

U32 s106retdec_func_1(s106retdecInstance*i);

void s106retdec_call_cb(s106retdecInstance*i,U32 l0);

void s106retdecInstantiate(s106retdecInstance* instance, void* resolve(const char* module, const char* name));

void s106retdecFreeInstance(s106retdecInstance* instance);

#endif /* s106retdec_H */

