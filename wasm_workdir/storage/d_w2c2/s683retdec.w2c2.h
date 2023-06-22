#ifndef s683retdec_H
#define s683retdec_H

#include "w2c2_base.h"

typedef struct s683retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s683retdecInstance;

void f0(s683retdecInstance*);

void f1(s683retdecInstance*);

U32 f2(s683retdecInstance*);

void f3(s683retdecInstance*,U32);

U32 f4(s683retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s683retdecInstance*,U32,U32,U32,U32,U32);

void f6(s683retdecInstance*,U32);

void f7(s683retdecInstance*,U32,U32,U32);

void f8(s683retdecInstance*,U32,U32,U32);

void s683retdec____wasm_call_ctors(s683retdecInstance*i);

void s683retdec____wasm_apply_data_relocs(s683retdecInstance*i);

U32 s683retdec_func_1(s683retdecInstance*i);

void s683retdec_call_cb(s683retdecInstance*i,U32 l0);

void s683retdecInstantiate(s683retdecInstance* instance, void* resolve(const char* module, const char* name));

void s683retdecFreeInstance(s683retdecInstance* instance);

#endif /* s683retdec_H */

