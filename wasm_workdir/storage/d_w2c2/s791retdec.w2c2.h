#ifndef s791retdec_H
#define s791retdec_H

#include "w2c2_base.h"

typedef struct s791retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s791retdecInstance;

void f0(s791retdecInstance*);

void f1(s791retdecInstance*);

U32 f2(s791retdecInstance*);

void f3(s791retdecInstance*,U32);

U32 f4(s791retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s791retdecInstance*,U32,U32,U32,U32,U32);

void f6(s791retdecInstance*,U32);

void f7(s791retdecInstance*,U32,U32,U32);

void f8(s791retdecInstance*,U32,U32,U32);

void s791retdec____wasm_call_ctors(s791retdecInstance*i);

void s791retdec____wasm_apply_data_relocs(s791retdecInstance*i);

U32 s791retdec_func_1(s791retdecInstance*i);

void s791retdec_call_cb(s791retdecInstance*i,U32 l0);

void s791retdecInstantiate(s791retdecInstance* instance, void* resolve(const char* module, const char* name));

void s791retdecFreeInstance(s791retdecInstance* instance);

#endif /* s791retdec_H */

