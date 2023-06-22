#ifndef s260retdec_H
#define s260retdec_H

#include "w2c2_base.h"

typedef struct s260retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s260retdecInstance;

void f0(s260retdecInstance*);

void f1(s260retdecInstance*);

U32 f2(s260retdecInstance*);

void f3(s260retdecInstance*,U32);

U32 f4(s260retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s260retdecInstance*,U32,U32,U32,U32,U32);

void f6(s260retdecInstance*,U32);

void f7(s260retdecInstance*,U32,U32,U32);

void f8(s260retdecInstance*,U32,U32,U32);

void s260retdec____wasm_call_ctors(s260retdecInstance*i);

void s260retdec____wasm_apply_data_relocs(s260retdecInstance*i);

U32 s260retdec_func_1(s260retdecInstance*i);

void s260retdec_call_cb(s260retdecInstance*i,U32 l0);

void s260retdecInstantiate(s260retdecInstance* instance, void* resolve(const char* module, const char* name));

void s260retdecFreeInstance(s260retdecInstance* instance);

#endif /* s260retdec_H */

