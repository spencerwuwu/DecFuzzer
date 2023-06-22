#ifndef s798retdec_H
#define s798retdec_H

#include "w2c2_base.h"

typedef struct s798retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s798retdecInstance;

void f0(s798retdecInstance*);

void f1(s798retdecInstance*);

U32 f2(s798retdecInstance*);

void f3(s798retdecInstance*,U32);

U32 f4(s798retdecInstance*,U32,U32,U32,U32);

void f5(s798retdecInstance*,U32,U32,U32,U32,U32);

void f6(s798retdecInstance*,U32);

void f7(s798retdecInstance*,U32,U32,U32);

void f8(s798retdecInstance*,U32,U32,U32);

void s798retdec____wasm_call_ctors(s798retdecInstance*i);

void s798retdec____wasm_apply_data_relocs(s798retdecInstance*i);

U32 s798retdec_func_1(s798retdecInstance*i);

void s798retdec_call_cb(s798retdecInstance*i,U32 l0);

void s798retdecInstantiate(s798retdecInstance* instance, void* resolve(const char* module, const char* name));

void s798retdecFreeInstance(s798retdecInstance* instance);

#endif /* s798retdec_H */

