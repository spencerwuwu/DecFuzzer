#ifndef s221retdec_H
#define s221retdec_H

#include "w2c2_base.h"

typedef struct s221retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s221retdecInstance;

void f0(s221retdecInstance*);

void f1(s221retdecInstance*);

U32 f2(s221retdecInstance*);

void f3(s221retdecInstance*,U32);

U32 f4(s221retdecInstance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s221retdecInstance*,U32,U32,U32,U32,U32);

void f6(s221retdecInstance*,U32);

void f7(s221retdecInstance*,U32,U32,U32);

void f8(s221retdecInstance*,U32,U32,U32);

void s221retdec____wasm_call_ctors(s221retdecInstance*i);

void s221retdec____wasm_apply_data_relocs(s221retdecInstance*i);

U32 s221retdec_func_1(s221retdecInstance*i);

void s221retdec_call_cb(s221retdecInstance*i,U32 l0);

void s221retdecInstantiate(s221retdecInstance* instance, void* resolve(const char* module, const char* name));

void s221retdecFreeInstance(s221retdecInstance* instance);

#endif /* s221retdec_H */

