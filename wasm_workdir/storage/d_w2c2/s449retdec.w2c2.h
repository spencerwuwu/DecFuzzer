#ifndef s449retdec_H
#define s449retdec_H

#include "w2c2_base.h"

typedef struct s449retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s449retdecInstance;

void f0(s449retdecInstance*);

void f1(s449retdecInstance*);

U32 f2(s449retdecInstance*);

void f3(s449retdecInstance*,U32);

U32 f4(s449retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s449retdecInstance*,U32,U32,U32,U32,U32);

void f6(s449retdecInstance*,U32);

void f7(s449retdecInstance*,U32,U32,U32);

void f8(s449retdecInstance*,U32,U32,U32);

void s449retdec____wasm_call_ctors(s449retdecInstance*i);

void s449retdec____wasm_apply_data_relocs(s449retdecInstance*i);

U32 s449retdec_func_1(s449retdecInstance*i);

void s449retdec_call_cb(s449retdecInstance*i,U32 l0);

void s449retdecInstantiate(s449retdecInstance* instance, void* resolve(const char* module, const char* name));

void s449retdecFreeInstance(s449retdecInstance* instance);

#endif /* s449retdec_H */

