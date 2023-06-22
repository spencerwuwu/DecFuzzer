#ifndef s847retdec_H
#define s847retdec_H

#include "w2c2_base.h"

typedef struct s847retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s847retdecInstance;

void f0(s847retdecInstance*);

void f1(s847retdecInstance*);

U32 f2(s847retdecInstance*);

void f3(s847retdecInstance*,U32);

U32 f4(s847retdecInstance*,U32,U32,U32,U32);

void f5(s847retdecInstance*,U32,U32,U32,U32,U32);

void f6(s847retdecInstance*,U32);

void f7(s847retdecInstance*,U32,U32,U32);

void f8(s847retdecInstance*,U32,U32,U32);

void s847retdec____wasm_call_ctors(s847retdecInstance*i);

void s847retdec____wasm_apply_data_relocs(s847retdecInstance*i);

U32 s847retdec_func_1(s847retdecInstance*i);

void s847retdec_call_cb(s847retdecInstance*i,U32 l0);

void s847retdecInstantiate(s847retdecInstance* instance, void* resolve(const char* module, const char* name));

void s847retdecFreeInstance(s847retdecInstance* instance);

#endif /* s847retdec_H */

